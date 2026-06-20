#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "Vsim.h"
#include <verilated.h>
#include "sim_header.h"

extern "C" void litex_sim_init_runtime(long load_start, long save_start);
#if defined(__GNUC__) || defined(__clang__)
extern "C" void litex_sim_user_init(void *vsim) __attribute__((weak));
static void litex_sim_call_user_init(void *vsim)
{
    if (litex_sim_user_init != nullptr)
        litex_sim_user_init(vsim);
}
#else
static void litex_sim_call_user_init(void *vsim)
{
    (void)vsim;
}
#endif
extern "C" void litex_sim_dump()
{
}

extern "C" void litex_sim_init(void **out)
{
    Vsim *sim;

    sim = new Vsim;

    litex_sim_init_runtime(0, -1);
    sim_trace[0].signal = &sim->sim_trace;
    litex_sim_register_pads(sim_trace, (char*)"sim_trace", 0);

    sys_clk[0].signal = &sim->sys_clk;
    litex_sim_register_pads(sys_clk, (char*)"sys_clk", 0);

    serial[0].signal = &sim->serial_source_valid;
    serial[1].signal = &sim->serial_source_ready;
    serial[2].signal = &sim->serial_source_data;
    serial[3].signal = &sim->serial_sink_valid;
    serial[4].signal = &sim->serial_sink_ready;
    serial[5].signal = &sim->serial_sink_data;
    litex_sim_register_pads(serial, (char*)"serial", 0);

    litex_sim_call_user_init(sim);

    *out = sim;
}

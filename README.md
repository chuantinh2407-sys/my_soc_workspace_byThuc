SoC Generator Tool - Automated System-on-Chip Framework
SoC Generator Tool is an automated framework designed to streamline the integration of Intellectual Property (IP) cores into a unified System-on-Chip (SoC) architecture. By leveraging the power of Python for automation and Verilog for hardware synthesis, this project helps hardware engineers eliminate manual tasks, reduce port-mapping errors, and optimize development cycles.
Table of Contents
1. Introduction

2. Key Features and Applications

3. Repository File Structure

4. Module Specifications

5. Getting Started Guide

6. Development Workflow

7. References and Resources

8. Contact Information

1. Introduction
In modern IC design, managing dozens of different IP cores is a significant challenge. SoC Generator Tool was created with an Object-Oriented Programming (OOP) mindset, enabling engineers to encapsulate IPs (such as UART, SPI, and Memory Controllers) into manageable, controllable, and logically connected objects rather than relying on manual assembly.

2. Key Features and Applications
Modular Design: The modular structure allows new peripherals to be "plugged in" without disrupting the existing architecture.

Configuration-Driven: The system uses configuration scripts rather than hard-coding parameters into Verilog, facilitating easy changes to memory addresses or baud rates.

Automated Integration: Automatically generates soc_top.v files with precise bus connectivity.

Prototyping Ready: Optimized for testing on Xilinx (Vivado), Intel/Altera (Quartus) FPGA families, or simulation via Icarus Verilog.

3. Repository File Structure
The project is tiered to ensure a strict separation between IP logic and control logic:
```
MY_SOC_WORKSPACE/
├── imported_ips/    # Contains original, verified IP cores
├── soc/             # Contains firmware (C code) and linker scripts (.lds)
├── scripts/         # Helper tools for system construction
├── python/          # Generator logic (OOP class definitions)
└── README.md        # Project documentation
```
4. Module Specifications
The following table outlines the technical specifications of the core IPs integrated into the system:
Module,Primary Function,Interface
simpleuart,Serial data transmission for system debugging,UART (8-N-1)
spiflash,External Flash memory controller,SPI
spimemio,SPI I/O bridge for real-time instruction fetching,Wishbone / SPI
picosoc,Central module managing connectivity between CPU and Slaves,System Bus

5. Getting Started
To set up the development environment:

Requirements: Python 3.10+, Verilog Compiler (Icarus/Vivado).

Clone Repository:

git clone https://github.com/chuantinh2407-sys/project_soc.git


6. Development Workflow
The framework follows standard industry design steps:

Abstraction: Define IPs as Python classes.

Generation: Automated signal interconnect schematics.

Verification: Validate via testbenches to ensure bus integrity.

7. References
PicoSoC Project - RISC-V PicoRV32 Foundation.

RISC-V ISA - Standard Instruction Set Architecture.

Awesome HDL - Best practices in hardware design.

8. Contact Information
For collaboration and technical inquiries:

Author: Nguyen Van Thuc

Email: chuantinh2407@gmail.com

University Email: 24161421@student.hcmute.edu.vn

GitHub: @chuantinh2407-sys

Dedicated to the pursuit of Excellence in IC Design.

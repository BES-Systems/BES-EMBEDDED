# BES-EMBEDDED

<p align="center">
  <b>BES Embedded Operating System</b><br>
  A lightweight industrial-grade embedded platform for modern control systems.
</p>

---

## Overview

BES-Embedded is an experimental embedded operating system developed by **BES Systems**.

The goal is to create a reliable, modular, and scalable software platform for embedded devices, industrial controllers, automation systems, and custom hardware.

BES-Embedded is designed to run on platforms such as:

- ESP32
- RISC-V microcontrollers
- ARM-based embedded systems
- Future BES hardware platforms

---

## Features

Current development goals:

- Custom bootloader
- Hardware abstraction layer (HAL)
- Real-time task scheduling
- Device drivers
- Serial console
- Configuration system
- Networking support
- Industrial communication protocols
- OTA firmware updates

---

## Architecture

+--------------------------------+
| Applications |
| HMI | Control | Monitoring |
+--------------------------------+
| BES Runtime |
| APIs | Services | Drivers |
+--------------------------------+
| BES Kernel |
| Scheduler | Memory | Security |
+--------------------------------+
| Hardware |
| ESP32 | RISC-V | ARM |
+--------------------------------+


---

## Supported Hardware

### Current
- ESP32 (development target)

### Planned
- RISC-V MCUs
- ARM Cortex-M devices
- Custom BES Systems controllers

---

## Development

Requirements:

- C/C++ toolchain
- PlatformIO or ESP-IDF
- Supported development board

Clone:

```bash
git clone https://github.com/BES-Systems/BES-EMBEDDED.git
cd BES-EMBEDDED
```

## License

Copyright © BES Systems.

This project is currently under active development.

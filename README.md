# Adaptive-AIoT-RPA-Engine
A high-performance Agentic Process Automation (APA) framework bridging Web-layer microsecond scheduling with ESP32-C3 physical execution.
> **Next-generation, LLM-driven Agentic Process Automation (APA) framework.**
> Bridging Web-layer microsecond scheduling with ESP32-C3 physical execution through Xiaomi MiMo Brain.

[![License](https://img.shields.io/badge/License-MIT-green.svg)]()
[![Xiaomi MiMo](https://img.shields.io/badge/Powered_By-Xiaomi_MiMo-FF6700.svg)]()
[![Hardware](https://img.shields.io/badge/Hardware-ESP32--C3-blue.svg)]()

## 📌 重要声明 (Important Notice)
**由于合规性要求及商业技术保密协议，本仓库目前仅开源项目的系统架构、接口规范及 IoT 桥接协议定义。核心的 Web V8 执行引擎（高并发 Content Script）以及 ESP32 定制化固件源码目前在私有研发环境运行。**

## 🚀 项目愿景
在动态前端环境（Shadow DOM、动态混淆）和严格的边缘访问控制（WAF、TCP连接池隔离）下，传统的 RPA 方案已达到瓶颈。`Adaptive-AIoT-RPA-Engine` 旨在利用 **Xiaomi MiMo-V2.5-Pro** 的超长上下文能力，构建一套具备“自愈”能力的自动化中枢：
1. **智能诊断：** 自动分析毫秒级网络链路日志，优化 TCP/TLS 复用。
2. **结构自愈：** 实时感知 DOM 变异，通过 LLM 自动修复自动化逻辑。
3. **云边协同：** 将云端决策秒级下发至 ESP32 物理节点，实现全链路自动化。

## 🧠 技术栈 (Technology Stack)
- **AI Engine:** Xiaomi MiMo-V2.5-Pro (Orbit Plan)
- **Web Execution:** Chrome Manifest V3 / MessageChannel (Zero-delay scheduling)
- **Edge Computing:** ESP32-C3 / FreeRTOS / MQTT Bridge
- **Monitoring:** PerformanceObserver / Resource-Timing Analysis

## 🛠️ 研发里程碑 (Roadmap)
- [x] 基于 Manifest V3 的微秒级调度引擎原型开发。
- [x] ESP32-C3 与 Web 通信协议定义（Bridge Protocol）。
- [ ] **(当前阶段)** 接入 Xiaomi MiMo API，进行长文本网络日志对齐测试。
- [ ] 实现针对复杂动态页面的 DOM 自动修复 Agent。

## 📞 联系方式
如有技术交流或商业合作需求，请通过项目内开发者主页联系。

## 🙏 致谢与架构灵感 (Acknowledgements & Architectural Inspirations)
本项目底层的意图转化引擎与自适应调度逻辑，深受以下全球顶尖开源架构的启发。我们在其理念基础上，针对高频 Web RPA 信号的特化解析与 TCP 底层保活进行了重构：

* **[espressif/esp-claw](https://github.com/espressif/esp-claw)** - 乐鑫官方的智能硬件 Agent 框架，为本项目的 LLM-to-MCU 物理意图转化提供了底层协议参考。
* **[Skyvern-AI/skyvern](https://github.com/Skyvern-AI/skyvern)** - 业界领先的 LLM 驱动浏览器自动化方案，为本系统的“无选择器（Selector-less）” DOM 嗅探与自愈机制提供了核心理论支撑。
* **[OpenBMB/ProAgent](https://github.com/OpenBMB/ProAgent)** - 为本项目从传统 RPA 向 APA（Agentic Process Automation，智能体流程自动化）的架构演进提供了极具价值的多 Agent 协同范式。

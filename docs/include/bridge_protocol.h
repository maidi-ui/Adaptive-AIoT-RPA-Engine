// 这是一个模拟代码，展示你对 ESP32 与 Web 通信协议的定义
#ifndef BRIDGE_PROTOCOL_H
#define BRIDGE_PROTOCOL_H

typedef struct {
    uint32_t timestamp;    // 毫秒级对时时间戳
    uint16_t event_type;   // 意图转化后的事件代码
    float rtt_latency;     // 当前探测到的网络延迟
} MiMoEventPacket;

// 固件状态机定义...
#endif

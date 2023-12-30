# 硬件信息

- 不支持硬浮点
- 小端模式
- 32 位处理器 cortex-m3 内核

## 存储区域, 存储映射

- 片上 flash 大小 256KB
  - 片内 flash 的地址范围: `0x0800_0000~0x0807_FFFF`
- 片上 RAM 大小 64KB
  - 片内内存区域的地址范围: `0x2000_0000~0x2000_FFFF`
- 片外 spi flash 大小 8MB
- 片外 SRAM 大小 1MB
- 片内 bootrom 的地址范围: `0x1FFFF_F000~0x1FFF_F7FF`

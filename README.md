# Device configuration for Daria Bond II

Copyright (C) 2023-2024 The LineageOS Project

The Daria Bond II (codenamed "hormoz") is a mid-range smartphone from Daria.
It was released in 2025.

## Device specifications

| Feature                 | Details                                          |
| ------------------------ | ------------------------------------------------ |
| SoC                       | MediaTek Dimensity 8350 (MT6897)                 |
| CPU                       | Octa-core (1x3.35 GHz + 3x3.2 GHz + 4x2.2 GHz)   |
| GPU                       | Mali-G615 MC6                                    |
| Memory                    | 12GB LPDDR5X                                     |
| Storage                   | 512GB UFS 4.0                                    |
| Shipped Android Version   | 15 (this device tree targets Android 15)         |
| Battery                   | Non-removable Li-Po 5000 mAh battery             |
| Dimensions                | 160.7 x 75.3 x 8.6 mm                            |
| Display Type              | AMOLED, 120Hz                                    |
| Display Size              | 6.67 inches                                      |
| Display Resolution        | 1220 x 2712 pixels (~446 ppi)                    |
| Rear Camera 1             | 50 MP wide, OIS                                  |
| Rear Camera 2             | 8 MP telephoto                                   |
| Rear Camera 3             | 8 MP ultrawide                                   |
| Front Camera              | 50 MP                                            |
| Fingerprint               | Under-display, Goodix GW9598                     |
| NFC                       | Samsung NFC chip                                 |

## Device tree origin

This device tree was ported from `device_xiaomi_duchamp` (same MT6897 SoC),
with all values, partition layout, and proprietary blobs extracted directly
from the device's official OTA package. See `HANDOFF.md` for full technical
details, known limitations, and remaining work.

## References

- https://github.com/itisMahdi/device_daria_hormoz
- https://github.com/MorZeus/twrp_device_daria_hormoz

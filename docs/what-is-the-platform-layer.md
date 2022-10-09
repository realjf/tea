## what is the platform layer?

- loosely define a platform as an os or type of device
- ex: windows, linux, android, xbox/playstation, etc
- abstraact platform-specific code from the rest of the engine
- achieve this by piping all platform requests through a single platform interface
- note: "windowing" will be abstracted away


```bash
platform interface(platform.h)
|———— Win32(platform_win32.c)
|———— Linux(platform_linux.c)
|———— Mac(platform_mac.c)
|———— Console(platform_xbox.c)
|———— Mobile(platform_x.c)
```

# Desktop Bridge Helpers
Helpers for the Windows 10 Desktop Bridge

The library offers a simple class to detect if a desktop application is running as native or as converted inside the UWP container.

Example code:

```
public bool IsRunningAsUwp()
{
    DesktopBridge.Helpers helpers = new DesktopBridge.Helpers();
    return helpers.IsRunningAsUwp();
}
```

The library is available also on NuGet. There are two packages, based on your project's architecture:

- https://www.nuget.org/packages/DesktopBridge.Helpers.x86/ for x86 applications
- https://www.nuget.org/packages/DesktopBridge.Helpers.x64/ for x64 applications

<b>Important!</b> Since it's a native library, you will need to compile your desktop application for x86 or x64 architecture, you can't use the AnyCPU compilation configuration.
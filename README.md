# Helpers for the Windows 10 Desktop Bridge

The library offers a simple class to detect if a desktop application is running as native or as converted inside the UWP container.

Example code:

```
public bool IsRunningAsUwp()
{
    DesktopBridge.Helpers helpers = new DesktopBridge.Helpers();
    return helpers.IsRunningAsUwp();
}
```

The library is available also on NuGet: https://www.nuget.org/packages/DesktopBridge.Helpers/

The library currently supports every application developed with .NET Framework >=4.0

Thanks to [Raffaele Rialdi](http://twitter.com/raffaeler) for the help with understanding how to properly use the P/Invoke approach
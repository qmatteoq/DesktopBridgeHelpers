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

The repository contains also a sample for eery major .NET desktop technology:

- Windows Forms
- WPF
- Console application

<b>Important!</b> The sample projects are based on the Windows Application Packaging Project, which has been added starting from Visual Studio 2017 Update 4

The library is available also on NuGet: https://www.nuget.org/packages/DesktopBridge.Helpers/

The library currently supports every application developed with .NET Framework >=4.0

Thanks to [Raffaele Rialdi](http://twitter.com/raffaeler) for the help with understanding how to properly use the P/Invoke approach
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

<b>Important!</b> The sample projects are based on [Visual Studio 15 Preview](https://www.visualstudio.com/visual-studio-pre-release-downloads/) and the [Desktop Bridge extension](http://go.microsoft.com/fwlink/?LinkId=797871)

The library is available also on NuGet: https://www.nuget.org/packages/DesktopBridge.Helpers/

The library currently supports every application developed with .NET Framework >=4.0

Thanks to [Raffaele Rialdi](http://twitter.com/raffaeler) for the help with understanding how to properly use the P/Invoke approach

# Contributing

This project welcomes contributions and suggestions.  Most contributions require you to agree to a
Contributor License Agreement (CLA) declaring that you have the right to, and actually do, grant us
the rights to use your contribution. For details, visit https://cla.microsoft.com.

When you submit a pull request, a CLA-bot will automatically determine whether you need to provide
a CLA and decorate the PR appropriately (e.g., label, comment). Simply follow the instructions
provided by the bot. You will only need to do this once across all repos using our CLA.

This project has adopted the [Microsoft Open Source Code of Conduct](https://opensource.microsoft.com/codeofconduct/).
For more information see the [Code of Conduct FAQ](https://opensource.microsoft.com/codeofconduct/faq/) or
contact [opencode@microsoft.com](mailto:opencode@microsoft.com) with any additional questions or comments.

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication.App
{
    class Program
    {
        static void Main(string[] args)
        {
            DesktopBridge.Helpers helpers = new DesktopBridge.Helpers();
            bool isUwp = helpers.IsRunningAsUwp();
            string text = isUwp ? "The app is running inside the UWP container" : "The app is running as a native Win32 app";
            Console.WriteLine(text);
            Console.ReadLine();
        }
    }
}

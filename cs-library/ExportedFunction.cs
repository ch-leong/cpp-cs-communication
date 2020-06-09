using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using RGiesecke.DllExport;
using System.Runtime.InteropServices;

namespace cs_library
{
    public class ExportedFunction
    {
        [DllExport("CsFunction")]
        public static void CsFunction()
        {
            Console.WriteLine("C# call success!");
            CppFunction();
        }

        [DllImport("cpp-library.dll")]
        static extern void CppFunction();
    }
}

// Use NuGet to get following packages for solution:
// - DllExport
// - UnmanagedExports

// Somehow doesn't work for .Net framework 4.7. Using 4.5 for this project.

// If still cannot compile cs library due to the package, reinstall the package with the same architecture (x64).

// Some references from https://jacksondunstan.com/articles/3938

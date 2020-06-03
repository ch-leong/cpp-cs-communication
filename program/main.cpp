#include <Windows.h>
#include <iostream>

int main()
{
    std::cout << "Hello main.cpp\n";

    HMODULE hModule = LoadLibraryA("cs-library.dll");
    if (hModule == nullptr)
    {
        std::cerr << "dll not found. Error: " << GetLastError() << "\n";
    }
    else
    {
        // Finding the function and calling it.
        auto load = (void(*)())GetProcAddress(hModule, "CsFunction");
        if (load != nullptr)
        {
            load();
        }
        else
        {
            std::cerr << "function not found. Error: " << GetLastError() << "\n";
        }
    }

    system("pause");
}

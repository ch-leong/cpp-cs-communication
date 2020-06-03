#include "pch.h"
#include "exported-function.h"

void* CppFunction()
{
    std::cout << "Cpp call success!\n";
    return nullptr;
}

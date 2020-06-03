#pragma once
#include <iostream>
#ifdef CPPLIBRARY_EXPORTS
#define API __declspec(dllexport)
#else
#define API __declspec(dllimport)
#endif

extern "C"
{

API void* CppFunction();

}

// In cpp, no need to install additional stuffs.
// Use extern "C" in case of c++ name mangling.

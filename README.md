# 📄 Features
Module remapping
Thread filtering
Module hiding
Memory check
Integrity check
Anti-DLL Injection
Anti-Debugging
Process policy
Literal string obfuscation
Compatibility with Themida/VMProtect

# ✔️ Dependencies
Windows 7~11
Visual Studio 2019

# 🔧 How to use
1. Set options in ```options.h``` and build ```0xGuard```.
2. Include ```0xGuardSDK.h``` and link ```0xGuard.lib``` in your project.
3. Build your project.

# 📝 Example
```
#include <Windows.h>
#include <stdio.h>
#include "../0xGuard/0xGuardSDK.h"
#pragma comment (lib, "0xGuard.lib")

int main(void)
{
	printf(RGS("Welcome to 0xGuard's sample Executable File.\n"));

	LoadLibraryA(RGS("SampleDLL.dll"));

	getchar();

	return 0;
}
```

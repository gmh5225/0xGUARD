
#include <Windows.h>
#include <stdio.h>
#include "../0xGuard/0xGuardSDK.h"
#pragma comment (lib, "0xGuard.lib")

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
		printf(RGS("Welcome to 0xGUARD.\n"));
		break;

	case DLL_THREAD_ATTACH:
		break;

	case DLL_THREAD_DETACH:
		break;

	case DLL_PROCESS_DETACH:
		break;
	}

    return TRUE;
}

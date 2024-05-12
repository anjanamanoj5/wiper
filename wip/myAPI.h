#pragma once

#include <windows.h>
#include <malloc.h>

HMODULE WINAPI Superdog(LPCWSTR sModuleName);
FARPROC WINAPI Supercat(HMODULE hMod, char * sProcName);

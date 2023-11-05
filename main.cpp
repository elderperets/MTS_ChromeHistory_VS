#include <Windows.h>
#include "MTS_ChromeHistoryEmail/exec.h"

int WINAPI wWinMain(HINSTANCE instance, HINSTANCE prev_instance, LPWSTR cmd, int show)
{
	return exec_(instance, prev_instance, cmd, show);
}
#include<windows.h>

int main()
	{
		SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);  //for turning off the monitor

		SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)-1); //for turning on the monitor

	return 0;
	}


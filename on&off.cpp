#include<windows.h>

int main()
	{
	int i = 0;
	for(;;){
		if(i=0){
			SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);  //for turning off the monitor
			i = 1;
			}
		else if(i=1)
			{
			SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)-1); //for turning on the monitor
			i=0;
			}
		else 
			cout<<"Nothing happens"<<endl;
	}
	return 0;
	}


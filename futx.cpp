#include <stdio.h>
#include "windows.h"
#pragma comment(linker,"/subsystem:\"windwos\" /entry:\"mainCRTStartup\"")

int main(int argc,_TCHAR* argv[])
{
    ShowWindow(GetConsoleWindow(),SW_HIDE); 
    while(1){
        HWND hwnd ;
        /* (hwnd = FindWindow(("TXGuiFoundation"),("��Ѷ����")))&&SendMessage(hwnd,WM_SYSCOMMAND,SC_CLOSE,NULL); */
        (hwnd = FindWindow(("TXGuiFoundation"),("��Ѷ����������"))) &&SendMessage(hwnd,WM_SYSCOMMAND,SC_CLOSE,NULL);
        Sleep(5000);
    }
    return 0;
}

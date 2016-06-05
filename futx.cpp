#include <stdio.h>
/* #define _WIN32 _MSC_VER */
#define _WIN32_WINNT 0x601
#include "windows.h"
#include "simpleini\SimpleIni.h"
/* #pragma comment(linker,"/subsystem:\"windwos\" /entry:\"mainCRTStartup\"") */

int main(int argc,_TCHAR* argv[])
{
    ShowWindow(GetConsoleWindow(),SW_HIDE); 
    /* CSimpleIniA ini; */
    CSimpleIni ini(false,true,false);
    ini.SetUnicode();
    ini.LoadFile("conf.ini");
    CSimpleIniA::TNamesDepend values;
    /* const char *p = ini.GetValue("COMMON","DB","default"); */
    /* ini.SetMultiKey(); */
    bool ok = ini.GetAllValues("COMMON","NAME",values);
    if(!ok){
		MessageBox(NULL,"获取配置文件conf.ini失败...","错误",MB_ICONSTOP);
        return 1;
    }
    /* values.sort(CSimpleIniA::Entry::LoadOrder()); */
    while(1){
        HWND hwnd ;
        CSimpleIniA::TNamesDepend::const_iterator i;
        for(i=values.begin();i!= values.end();i++){
            (hwnd = FindWindow(("TXGuiFoundation"),(i->pItem)))&&SendMessage(hwnd,WM_SYSCOMMAND,SC_CLOSE,NULL);
        }
        Sleep(5000);
    }
    return 0;
}

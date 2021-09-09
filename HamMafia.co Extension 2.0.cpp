#include <Windows.h>
#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <urlmon.h>

#pragma comment(lib, "urlmon.lib")

#pragma warning(disable:4996)

  ///////////////////////////////
 // #include <ThickAnimeGirl> // 
///////////////////////////////

using namespace std;

string hamLocation;

void DownloadLux()
{
    char* user = getenv("username");
    string g = user;
    system("cls");
    string dwnld_path = "C:\\ProgramData\\" + g + "\\Lux.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/882952516277534740/Lux.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
    cout << "\n\n  Finished Downloading Lux.lua";
    Sleep(2000);
}
void DownloadEulen()
{
    char* user = getenv("username");
    string g = user;
    system("cls");
    string dwnld_path = "C:\\ProgramData\\" + g + "\\Eulen1.0.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/882952998601502730/Eulen1.0.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
    cout << "\n\n  Finished Downloading Eulen1.0.lua";
    Sleep(2000);
}
void DownloadFallout()
{
    char* user = getenv("username");
    string g = user;
    system("cls");
    string dwnld_path = "C:\\ProgramData\\" + g + "\\Fallout.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/882953021884088390/Fallout.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
    cout << "\n\n  Finished Downloading Fallout.lua";
    Sleep(2000);
}
void DownloadATG()
{
    char* user = getenv("username");
    string g = user;
    system("cls");
    string dwnld_path = "C:\\ProgramData\\" + g + "\\atg.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/882953025067569162/atg.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
    cout << "\n\n  Finished Downloading atg.lua";
    Sleep(2000);
}
void DownloadMaestro()
{
    char* user = getenv("username");
    string g = user;
    system("cls");
    string dwnld_path = "C:\\ProgramData\\" + g + "\\Maestro-Avux.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/882952987465621554/Maestro-Avux.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
    cout << "\n\n  Finished Downloading Maestro-Avux.lua";
    Sleep(2000);
}
void DownloadHugeV()
{
    char* user = getenv("username");
    string g = user;
    system("cls");
    string dwnld_path = "C:\\ProgramData\\" + g + "\\HugeV.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/882953028049723393/HugeV.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
    cout << "\n\n  Finished Downloading HugeV.lua";
    Sleep(2000);
}
void DownloadLynx()
{
    char* user = getenv("username");
    string g = user;
    system("cls");
    string dwnld_path = "C:\\ProgramData\\" + g + "\\lynx111.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/882953021070393374/lynx111.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
    cout << "\n\n  Finished Downloading lynx111.lua";
    Sleep(2000);
}
void DownloadHamxLynx()
{
    char* user = getenv("username");
    string g = user;
    system("cls");
    string dwnld_path = "C:\\ProgramData\\" + g + "\\hamxlynx.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/882953021183623198/hamxlynx.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
    cout << "\n\n  Finished Downloading hamxlynx.lua";
    Sleep(2000);
}
void DownloadFiveSenseNertigel()
{
    char* user = getenv("username");
    string g = user;
    system("cls");
    string dwnld_path = "C:\\ProgramData\\" + g + "\\FiveSenseNertigel.lua";
    string dwnld_URL = "https://cdn.discordapp.com/attachments/882952460572975134/882953028896976956/FiveSenseNertigel.lua";
    URLDownloadToFileA(NULL, dwnld_URL.c_str(), dwnld_path.c_str(), 0, NULL);
    cout << "\n\n  Finished Downloading FiveSenseNertigel.lua";
    Sleep(2000);
}

void menu()
{
    system("cls");

    cout << "\n\n  HamMafia.co LUA menu downloader 2.0\n";
    cout << "  -----------------------------------\n\n";

    cout << "  [ F1 ] --> Lux.lua\n";
    cout << "  [ F2 ] --> Eulen.lua\n";
    cout << "  [ F3 ] --> Fallout.lua\n";
    cout << "  [ F4 ] --> atg.lua\n";
    cout << "  [ F5 ] --> Maestro-Avux.lua\n";
    cout << "  [ F6 ] --> HugeV.lua\n";
    cout << "  [ F7 ] --> Lynx.lua\n";
    cout << "  [ F8 ] --> HamxLynx.lua\n";
    cout << "  [ F9 ] --> FiveSenseNertigel.lua\n";
    while (true)
    {
        if (GetAsyncKeyState(VK_F1))
        {
            system("cls");
            DownloadLux();
            menu();
        }
        if (GetAsyncKeyState(VK_F2))
        {
            system("cls");
            DownloadEulen();
            menu();
        }
        if (GetAsyncKeyState(VK_F3))
        {
            system("cls");
            DownloadFallout();
            menu();
        }
        if (GetAsyncKeyState(VK_F4))
        {
            system("cls");
            DownloadATG();
            menu();
        }
        if (GetAsyncKeyState(VK_F5))
        {
            system("cls");
            DownloadMaestro();
            menu();
        }
        if (GetAsyncKeyState(VK_F6))
        {
            system("cls");
            DownloadHugeV();
            menu();
        }
        if (GetAsyncKeyState(VK_F7))
        {
            system("cls");
            DownloadLynx();
            menu();
        }
        if (GetAsyncKeyState(VK_F8))
        {
            system("cls");
            DownloadHamxLynx();
            menu();
        }
        if (GetAsyncKeyState(VK_F9))
        {
            system("cls");
            DownloadFiveSenseNertigel();
            menu();
        }
    }
}

int main()
{
    int x = 0;

    system("cls");

    cout << "\n\n  HamMafia.co LUA menu downloader 2.0\n";
    cout << "  -----------------------------------\n\n";

    cout << "  [ 1 ] --> Page 1\n";
    cout << "  [ 2 ] --> Page 2\n";
    cout << "  [ 3 ] --> Page 3\n\n";
    cout << "  [ 4 ] --> Open Ham Mafia Website\n";
    cout << "  [ 5 ] --> Download Version 1.0 Source\n\n";
    cout << "  [ 6 ] --> Download Version 2.0 Source\n\n";
    cout << "\n\n  [*.*] Your choice --> ";
    cin >> x;

    while (true)
    {
        if (x == 1)
        {
            system("cls");
            menu();
        }
        if (x == 2)
        {
            system("cls");
            cout << "\n\n  Page 2 release on version 2.1";
            Sleep(2000);
            main();
        }
        if (x == 3)
        {
            system("cls");
            cout << "\n\n  Page 2 release on version 2.2";
            Sleep(2000);
            main();
        }
        if (x == 4)
        {
            system("cls");
            ShellExecute(0, 0, L"https://hammafia.co/", 0, 0, SW_SHOW);
            cout << "\n\n  opened hammafia website";
            Sleep(2000);
            main();
        }
        if (x == 5)
        {
            system("cls");
            ShellExecute(0, 0, L"https://github.com/zf9/HamMafia-extension", 0, 0, SW_SHOW);
            cout << "\n\n  Opened 1.0 source code";
            Sleep(2000);
            main();
        }
        if (x == 6)
        {
            system("cls");
            ShellExecute(0, 0, L"https://github.com/ScriptKiddiesTheCoderGod/HamMafia-Extension-cpp", 0, 0, SW_SHOW);
            cout << "\n\n  Opened 2.0 source code";
            Sleep(2000);
            main();
        }
    }
}
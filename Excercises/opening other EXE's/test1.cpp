#include <iostream>
#include <windows.h>

int main()
{
    std::string s;
    std::cout << "Press any key to enter a name";
    std::cin >> s;
    ShellExecute(NULL, "open", "test2.exe", NULL, NULL, SW_SHOWDEFAULT);
    
    return 0;
}
#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main()
{
    for(int i=15; i>=0; i--) {
        system("cls");
        cout << i << endl;
        Sleep(1000);
    }
    cout << "STOP";


    return 0;
}
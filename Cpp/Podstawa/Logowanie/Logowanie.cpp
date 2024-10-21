#include <iostream>

using namespace std;

string name, password;

int main()
{
    cout << "Name: ";
    cin >> name;
    cout << "Password: ";
    cin >> password;

    if ((name=="Gmero") && (password=="lodz123")) cout << "Welcome " << name;
    else cout << "Login failed";
    return 0;
}
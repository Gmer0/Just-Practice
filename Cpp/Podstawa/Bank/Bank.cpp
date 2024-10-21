#include <iostream>

using namespace std;

string PIN, password;

int main()
{
    cout << "Witaj w Naszym Banku" << endl;
    cout << "Podaj swój PIN: ";
    cin >> PIN;
    cout << "Podaj hasło: ";
    cin >> password;

    if ((PIN=="1729") && (password=="dupa")) cout << "Płatność zrealizowana";
    else cout << "Niepoprawne dane";
    return 0;
}
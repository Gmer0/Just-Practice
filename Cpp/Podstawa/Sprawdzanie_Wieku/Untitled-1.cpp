#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "Podaj swoj wiek: ";
    cin >> wiek;
    
    if (wiek >= 18) cout << "Jestes pelnoletni" << endl;
    if (wiek >= 35) cout << "Mozesz zostac prezedentem";
    if (wiek < 18) cout << "Nie jestes pelnoletni";

    return 0;
}
#include <iostream>

using namespace std;

string imie; int ilosc;

int main() {
    cout << "Wpisz imie: ";
    cin >> imie;
    cout << "Ile razy mam wyswietlic: ";
    cin >> ilosc;
    
    for(int i=1; i<=ilosc; i++) {
        cout << i << ". " << imie << endl;
    }
}
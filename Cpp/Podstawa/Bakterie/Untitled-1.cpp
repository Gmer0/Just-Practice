#include <iostream>

using namespace std;

int ilbak = 1, h = 0;

int main() {
    
    while (ilbak <= 1000000) {
        h++;
        ilbak = ilbak * 2;
        
        cout << "Godzina: " << h << endl;
        cout << "Ilosc bakterii: " << ilbak << endl;
    }

}
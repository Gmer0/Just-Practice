#include <iostream>

using namespace std;

int uczniowie, cukierki, x, y;

int main() {

  cout << "Ilu jest uczniow: ";
  cin >> uczniowie;
  cout << "Ile cukierków kupila mama: ";
  cin >> cukierki;

  x = cukierki / (uczniowie - 1);
  cout << "Cukierków dla każdego ucznia: " << x;

  y = cukierki - x * (uczniowie - 1);
  cout << endl << "Dla Jasia na wieczór: " << y;

  return 0;
}
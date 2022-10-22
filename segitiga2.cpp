#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Masukan panjang pola : ";
  cin >> n;

  for(int i = 0; i <= n; i++) {
    for(int j = n; j >= i; j--) {
      cout << "*";
    }
    cout << endl;
  }

  cin.get();
  return 0;
}
// output : 
// ******
// *****
// ****
// ***
// **
// *

#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "masukan panjang pola : ";
  cin >> n;

  for(int i = 0; i <= n; i++) {
    for(int j = 0; j < i; j++) {
      cout <<" ";
  }
    for (int k = n; k >= (2 * i - n); k--) {
      cout << "*";
    }
  cout << endl;
  }

  cin.get();
  return 0;
}

// output :
// ***********
//  *********
//   *******
//    *****
//     ***
//      *

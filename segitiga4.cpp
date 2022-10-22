#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  cout << "masukan panjang pola : ";
  cin >> n;

  for(int i = 0; i <= n; i++) {
    for(int j = n; j > i; j--) {
      cout <<" ";
  }
    for (int k = 0; k <= i; k++) {
      cout << "*";
    }
  cout << endl;
  }

  cin.get();
  return 0;
}

// output :
//      *
//     **
//    ***
//   ****
//  *****
// ******
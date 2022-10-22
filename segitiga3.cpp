#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  cout << "masukan panjang pola : ";
  cin >> n;

  cout << "\npola 3 :\n";
  for(int i = 0; i <= n; i++) {
    for(int j = 0; j < i; j++) {
      cout <<" ";
  }
    for (int k = n; k >= i; k--) {
      cout << "*";
    }
  cout << endl;
  }

  cin.get();
  return 0;
}

// output :
// ******
//  *****
//   ****
//    ***
//     **
//      *
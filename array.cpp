// ARRAY
#include <iostream>
using namespace std;
int main()
 {
  int n;
  cout << "Enter Size";
  cin >> n ;
  int A[n];
  A[0] = 2;

  for (int x : A) {
    cout << A[x] << endl;
  }

  return 0;
}
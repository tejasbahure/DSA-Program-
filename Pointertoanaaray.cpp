// POINTER TO AN AARAY
#include <iostream>
using namespace std;
int main() {
  int A[5] = {2, 4, 6, 8, 10};
int *p; //*p is a pointer
  p = A;

  for (int i = 0; i < 5; i++)
    cout << p[i] << endl;
}
//   POINTER TO A STRUCTURE
#include <iostream>
using namespace std;
struct Rectangle {
  int length;
  int breath;
};
int main() {
  struct Rectangle r = {10, 5};
  cout << r.length << endl;
  cout << r.breath << endl;

  Rectangle *p = &r;
  cout << p->length << endl;
  cout << p->breath << endl;

  return 0;
}
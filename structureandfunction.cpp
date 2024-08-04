// STRUCTURE AND FUNCTION  C++ PROGRAM
#include <iostream>
#include <stdio.h>
using namespace std;
class Rectangle {  //(instead of class Rectangle we can use struct Rectangle because class is private by default)
 public:
  int length;
  int breadth;

  void initialise(int l, int b) {
    length = l;
    breadth = b;
  };
  int area() { return length * breadth; }
  int perimeter() {
    int p;
    p = 2 * (length + breadth);
    return p;
  }
};
int main() {
  Rectangle r = {0, 0};
  int l, b;
  cout << "Enter length and breadth";
  cin >> l >> b;

  r.initialise(l, b);
  int a = r.area();
  int peri = r.perimeter();
  cout << "Area of Rectangle" << a << peri << endl;
  return 0;
}

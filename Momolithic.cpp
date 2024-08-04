// MONOLITHIC PROGRAM
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
  int length = 10, breadth = 20;
  cin >> length >> breadth;
  int area = length * breadth;
  int peri = 2 * (length + breadth);
  cout << "Area of Rectangle" << area << peri << endl;

  return 0;
}
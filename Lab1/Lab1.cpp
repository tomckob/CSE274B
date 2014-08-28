
#include <iostream>
#include "rectangle.h"
#include "rectangle.cpp"

using namespace std;

int main () {
  Rectangle rect;

  rect.set_values (3,4);

  Rectangle *pRect = new Rectangle();

  pRect->set_values(7,8);

  cout << "area 1: " << rect.area() << endl;
  cout << "pointer to rect " << pRect << endl;
  cout << "area for pointer " << pRect->area() << endl;
  return 0;
}

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int radius;

  cin >> radius;

  double area = M_PI * radius * radius;
  double perimeter = M_PI * radius * 2;

  cout << "Area = " << area << endl;
  cout << "Perimeter = " << perimeter << endl;
}
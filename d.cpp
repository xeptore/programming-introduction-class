#include <iostream>

using namespace std;

int main() {
  int x, y;
  cin >> y;

  cout << endl << "=== Before ===" << endl;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;

  x = x + y;
  y = x - y;
  x = x - y;

  cout << endl << "=== After ===" << endl;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
}

#include <iostream>

using namespace std;

int main() {
  int l, w;

  cin >> l;
  cin >> w;

  int area = l * w;
  int perimeter = 2 * (l + w);

  cout << "Area = " << area << endl;
  cout << "Perimeter = " << perimeter << endl;
}
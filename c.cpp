#include <iostream>

using namespace std;

int main() {
  int first, second, third;

  cin >> first >> second >> third;

  cout << endl << "=== Before ===" << endl;
  cout << "first = " << first << endl;
  cout << "second = " << second << endl;
  cout << "third = " << third << endl;

  int temp = first;

  first = second;
  second = third;
  third = temp;

  // first <- second <- third
  //   |                  ∧
  //   |                  |
  //   \__________________/

  cout << endl << "=== After ===" << endl;
  cout << "first = " << first << endl;
  cout << "second = " << second << endl;
  cout << "third = " << third << endl;
}

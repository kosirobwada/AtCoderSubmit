#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if (a <= 0 && b >= 0)
    cout << "Zero" << endl;
  else if (a > 0)
    cout << "Positive" << endl;
  else if (b > 0 && a % 2 == 0)
    cout << "Positive" << endl;
  else if (b > 0 && a % 2 == 1)
    cout << "Negative" << endl;
  else if (b < 0 && (b - a) % 2 == 1)
    cout << "Positive" << endl;
  else if (b < 0 && (b - a) % 2 == 0)
    cout << "Negative" << endl;
}

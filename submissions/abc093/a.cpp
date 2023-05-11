#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(3);
  int b = 0;
  for (int i = 0; i < 3; i++)
    cin >> a.at(i);
  sort(a.begin(), a.end());
  b += 2 * a.at(2) - a.at(1) - a.at(0);
  if (b % 2 == 0)
    cout << b / 2 << endl;
  else
    cout << b / 2 + 2 << endl;
}

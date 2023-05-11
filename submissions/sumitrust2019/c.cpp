#include <bits/stdc++.h>
using namespace std;

int main() {
  int X;
  cin >> X;
  int a = X / 100;
  int b = X % 100;
  if (a * 5 < b)
    cout << 0 << endl;
  else
    cout << 1 << endl;
}

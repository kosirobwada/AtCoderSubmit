#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;
  int A = a.size();
  int B = b.size();
  if (A > B)
    cout << "GREATER" << endl;
  else if (A < B)
    cout << "LESS" << endl;
  else {
    if (a > b)
      cout << "GREATER" << endl;
    else if (a < b)
      cout << "LESS" << endl;
    else
      cout << "EQUAL" << endl;
  }
}

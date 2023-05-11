#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;
  string c;
  c = a + b;
  int d = stoi(c);
  string ans = "No";
  for (int i = 1; i < 320; i++) {
    if (i * i == d) {
      ans = "Yes";
    }
  }
  cout << ans << endl;
}

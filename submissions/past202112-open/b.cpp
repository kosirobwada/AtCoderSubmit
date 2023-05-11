#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int cnt = 0;
  for (int i = 0; i < N; i++) {
    int a, b;
    cin >> a >> b;
    if (((b - a) % 10) >= 5)
      cnt++;
    if ((((b - a) / 10) % 10) >= 5)
      cnt++;
  }
  cout << cnt << endl;
}

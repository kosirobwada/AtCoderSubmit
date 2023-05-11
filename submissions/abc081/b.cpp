#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, ans;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    int count = 0;
    while (a % 2 == 0) {
      a /= 2;
      count++;
    }
    if (i == 0) {
      ans = count;
    }
    if (ans > count) {
      ans = count;
    }
  }
  cout << ans << endl;
}

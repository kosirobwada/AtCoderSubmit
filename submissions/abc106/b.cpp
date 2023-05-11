#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int ans = 0;
  for (int i = 0; i <= N; i++) {
    int count = 0;
    for (int j = 1; j <= N; j++) {
      if (i % j == 0)
        count++;
    }
    if (count == 8) {
      if (i % 2 == 1)
        ans++;
    }
  }
  cout << ans << endl;
}

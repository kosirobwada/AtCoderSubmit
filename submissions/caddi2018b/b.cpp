#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, H, W, count = 0;
  cin >> N >> H >> W;
  for (int i = 0; i < N; i++) {
    long long a, b;
    cin >> a >> b;
    if (a >= H && b >= W)
      count++;
  }
  cout << count << endl;
}

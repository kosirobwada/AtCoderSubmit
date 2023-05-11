#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int ans = 0;
  vector<int> time(N);
  for (int i = 0; i < N; i++) {
    cin >> time.at(i);
    ans += time.at(i);
  }
  int M;
  cin >> M;
  for (int i = 0; i < M; i++) {
    int x, y;
    cin >> x >> y;
    cout << ans - time.at(x - 1) + y << endl;
  }
}

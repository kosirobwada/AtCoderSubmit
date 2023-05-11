#include <bits/stdc++.h>

int main() {
  using namespace std;

  int N;
  cin >> N;

  vector<int> h(N + 2);
  for (int i = 0; i < N; ++i)
    cin >> h[i + 1];

  int answer = 0;
  for (int i = 0; i < N + 1; ++i)
    answer += abs(h[i + 1] - h[i]);

  cout << answer / 2 << endl;

  return 0;
}

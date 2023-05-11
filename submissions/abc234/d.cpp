#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, K;
  cin >> N >> K;
  vector<int> a(N);
  priority_queue<int, vector<int>, greater<int>> q;
  for (int i = 0; i < N; i++) {
    cin >> a[i];
    if (i < K)
      q.push(a[i]);
  }
  cout << q.top() << endl;
  for (int i = K; i < N; i++) {
    if (a[i] > q.top())
      q.push(a[i]), q.pop();
    cout << q.top() << endl;
  }
  return 0;
}

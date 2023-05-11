#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  deque<int> q;
  q.push_front(N);
  for (int i = N - 1; i >= 0; i--) {
    if (S[i] == 'L') {
      q.push_back(i);
    } else {
      q.push_front(i);
    }
  }
  while (q.size() > 0) {
    int x = q.front();
    q.pop_front();
    cout << x << " ";
  }
  cout << endl;
  return 0;
}

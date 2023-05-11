#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
using ll = long long;
using P = pair<int, int>;
const int INF = 1e9;
#define pb push_back

int main() {
  int K;
  cin >> K;
  queue<ll> q;
  for (int i = 1; i < 10; i++) {
    q.push(i);
  }
  for (int i = 0; i < K - 1; i++) {
    ll x = q.front();
    q.pop();
    int y = x % 10;
    if (y != 0)
      q.push(10 * x + y - 1);
    q.push(10 * x + y);
    if (y != 9)
      q.push(10 * x + y + 1);
  }
  cout << q.front() << endl;
  return 0;
}

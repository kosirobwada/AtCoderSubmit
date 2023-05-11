#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
const int INF = 1e9;
using ll = long long;
using P = pair<int, int>;
int modPow(ll a, ll n, ll p) {
  if (n == 0)
    return 1;
  if (n == 1)
    return a % p;
  if (n % 2 == 1)
    return (a * modPow(a, n - 1, p)) % p;
  ll t = modPow(a, n / 2, p);
  return (t * t) % p;
}
int main() {
  int N;
  cin >> N;
  int x;
  x = modPow(3, N, 1e9 + 7);
  queue<string> q;
  q.push("a");
  q.push("b");
  q.push("c");
  while (q.size() < x) {
    string c;
    c = q.front();
    q.pop();
    q.push(c + "a");
    q.push(c + "b");
    q.push(c + "c");
  }
  while (!q.empty()) {
    string S;
    S = q.front();
    q.pop();
    cout << S << endl;
  }
  return 0;
}

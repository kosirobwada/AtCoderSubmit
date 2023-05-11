#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
const int INF = 1e9;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N, M;
  cin >> N >> M;
  set<string> t;
  vector<string> s(N + 1);
  for (int i = 0; i < N; i++) {
    string x;
    cin >> x;
    s[i] = x;
  }
  for (int i = 0; i < M; i++) {
    string y;
    cin >> y;
    t.insert(y);
  }
  for (int i = 0; i < N; i++) {
    string z = s[i];
    // cout << z << endl;
    if (t.count(z))
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}

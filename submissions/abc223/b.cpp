#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
using ll = long long;
using P = pair<int, int>;
const int INF = 1e9;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = int(a); i < int(b); ++i)

int main() {
  string S;
  cin >> S;
  int N = S.size();
  vector<string> t(N);
  for (int i = 0; i < N; i++) {
    t[i] = S.substr(i, N - i) + S.substr(0, i);
  }
  cout << *min_element(all(t)) << endl;
  cout << *max_element(all(t)) << endl;
  return 0;
}

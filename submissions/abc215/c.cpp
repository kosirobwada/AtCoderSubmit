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
  int K;
  cin >> K;
  sort(all(S));
  for (int i = 0; i < K - 1; i++) {
    next_permutation(all(S));
  }
  cout << S << endl;
  return 0;
}

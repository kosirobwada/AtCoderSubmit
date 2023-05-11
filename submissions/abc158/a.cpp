#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
using ll = long long;
using P = pair<int, int>;
const int INF = 1e9;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = int(a); i < int(b); ++i)
template <class T> bool chmax(T &a, const T &b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> bool chmin(T &a, const T &b) {
  if (b < a) {
    a = b;
    return 1;
  }
  return 0;
}
int main() {
  string S;
  cin >> S;
  if (S[0] == 'A' && S[1] == 'A' && S[2] == 'A')
    cout << "No" << endl;
  else if (S[0] == 'B' && S[1] == 'B' && S[2] == 'B')
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
  return 0;
}

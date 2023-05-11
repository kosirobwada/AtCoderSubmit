#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
const int INF = 1e9;
using ll = long long;
using P = pair<int, int>;

int main() {
  string S;
  cin >> S;
  int a, b;
  cin >> a >> b;
  swap(S[a - 1], S[b - 1]);
  cout << S << endl;
  return 0;
}

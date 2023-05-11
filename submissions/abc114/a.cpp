#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
const int INF = 1e9;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  cin >> N;
  if (N == 3 || N == 5 || N == 7)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}

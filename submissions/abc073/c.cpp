#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  int N;
  cin >> N;
  set<int> s;
  for (int i = 0; i < N; i++) {
    int x;
    cin >> x;
    if (s.count(x))
      s.erase(x);
    else
      s.insert(x);
  }
  cout << s.size() << endl;
  return 0;
}

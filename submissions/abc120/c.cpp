#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int INF = 1e9;
const ll LINF = 1e18;
const ld pi = 3.141592653589793238;
int main() {
  int N;
  string S;
  cin >> S;
  N = S.size();
  int a, b;
  a = b = 0;
  for (int i = 0; i < N; i++) {
    if (S[i] == '0')
      a++;
    else
      b++;
  }
  cout << N - abs(a - b) << endl;
  return 0;
}

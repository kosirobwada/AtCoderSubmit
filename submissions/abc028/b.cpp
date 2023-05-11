#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  string S;
  cin >> S;
  int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, N = S.size();
  for (int i = 0; i < N; i++) {
    if (S[i] == 'A')
      a++;
    if (S[i] == 'B')
      b++;
    if (S[i] == 'C')
      c++;
    if (S[i] == 'D')
      d++;
    if (S[i] == 'E')
      e++;
    if (S[i] == 'F')
      f++;
  }
  cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << ' ' << f << endl;
}

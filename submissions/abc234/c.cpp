#include <bits/stdc++.h>
using namespace std;

int main() {
  long long K;
  cin >> K;
  string S;
  while (K) {
    S += '0' + (K % 2) * 2;
    K /= 2;
  }
  reverse(S.begin(), S.end());
  cout << S << endl;
}

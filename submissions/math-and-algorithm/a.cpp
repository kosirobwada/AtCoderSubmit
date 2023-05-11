#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll N;
  cin >> N;
  for (int i = 0; i < 60; i++) {
    if (N == (1LL << i) - 1LL) {
      cout << "Second" << endl;
      return 0;
    }
  }
  cout << "First" << endl;
  return 0;
}

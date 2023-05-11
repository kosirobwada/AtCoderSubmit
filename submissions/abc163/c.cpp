#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> d(N + 1);
  for (int i = 2; i <= N; i++) {
    int A;
    cin >> A;
    d[A] += 1;
  }
  for (int i = 1; i <= N; i++) {
    cout << d[i] << endl;
  }
}

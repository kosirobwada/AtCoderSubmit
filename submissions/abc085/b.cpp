#include <bits/stdc++.h>
using namespace std;

int main() {
  int i, N, count = 1;
  cin >> N;
  vector<int> a(N);
  for (i = 0; i < N; i++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());
  for (i = 1; i < N; i++) {
    if (a.at(i) != a.at(i - 1)) {
      count++;
    }
  }
  cout << count << endl;
}

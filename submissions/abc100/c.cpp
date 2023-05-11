#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int count = 0;
  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a.at(i);
  }
  for (int i = 0; i < N; i++) {
    while (1) {
      if (a.at(i) % 2 == 1)
        break;
      else {
        count++;
        a.at(i) = a.at(i) / 2;
      }
    }
  }
  cout << count << endl;
}

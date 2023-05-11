#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D, X;
  cin >> N;
  cin >> D >> X;
  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a.at(i);
  }
  vector<int> count(N);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < D; j++) {
      if (D >= j * a.at(i) + 1)
        count.at(i)++;
    }
  }
  int sum = 0;
  for (int i = 0; i < N; i++)
    sum += count.at(i);
  cout << sum + X << endl;
}

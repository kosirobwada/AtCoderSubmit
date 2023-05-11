#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  vector<char> a(N);
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> a.at(i);
  }
  if (a.at(N - 1) == 'o')
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}

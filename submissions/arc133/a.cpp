#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> S(N);
  for (int i = 0; i < N; i++) {
    cin >> S.at(i);
  }
  int val = -1;
  for (int i = 0; i < N - 1; i++) {
    if (S.at(i) > S.at(i + 1)) {
      val = S.at(i);
      break;
    }
  }
  if (val != -1) {
    for (int i = 0; i < N; i++) {
      if (S.at(i) != val) {
        cout << S.at(i) << " ";
      }
    }
    cout << endl;
  } else {
    val = S.at(N - 1);
    for (int i = 0; i < N; i++) {
      if (S.at(i) != val) {
        cout << S.at(i) << " ";
      }
    }
    cout << endl;
  }
}

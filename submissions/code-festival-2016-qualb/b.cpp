#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B, count_1 = 0, count_2 = 1;
  cin >> N >> A >> B;
  vector<char> S(N);
  for (int i = 0; i < N; i++) {
    cin >> S.at(i);
  }
  for (int i = 0; i < N; i++) {
    if (S.at(i) == 'c') {
      cout << "No" << endl;
    } else if (S.at(i) == 'a' && count_1 < A + B) {
      cout << "Yes" << endl;
      count_1++;
    } else if (S.at(i) == 'b' && count_1 < A + B && count_2 <= B) {
      cout << "Yes" << endl;
      count_1++;
      count_2++;
    } else
      cout << "No" << endl;
  }
}

#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
const int INF = 1e9;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  vector<int> tmp(N);
  for (int i = 0; i < N; ++i)
    cin >> S[i];
  sort(S.begin(), S.end());
  int max_cnt = -INF;
  for (int i = 0; i < N; ++i) {
    int cnt = 0;
    for (int j = i; j < N; ++j) {
      if (S[i] == S[j]) {
        cnt++;
      } else {
        break;
      }
    }
    tmp[i] = cnt;
    if (cnt > 0) {
      i = i + cnt - 1;
    }
    max_cnt = max(max_cnt, cnt);
  }
  for (int i = 0; i < N; ++i) {
    if (tmp[i] == max_cnt) {
      cout << S[i] << endl;
    }
  }
  return 0;
}

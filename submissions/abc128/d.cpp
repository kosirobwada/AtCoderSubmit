#include <bits/stdc++.h>
using namespace std;
template <class T> bool chmax(T &a, const T &b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
};

int main() {
  long long N, K;
  cin >> N >> K;
  vector<long long> v(N);
  for (int i = 0; i < N; i++) {
    cin >> v[i];
  }
  long long a = 0, b = 0;
  long long ans = 0;
  long long last = min(N, K);
  for (int i = 0; i <= last; i++) {
    long long cnt = 0;
    for (int j = 0; j <= i; j++) {
      cnt = 0;
      a = j;
      b = i - j;
      vector<long long> x;
      for (int k = 0; k < a; k++) {
        if (k < 0 || k >= N)
          continue;
        x.push_back(v[k]);
      }
      for (int k = N - b; k < N; k++) {
        if (k < 0 || k >= N)
          continue;
        x.push_back(v[k]);
      }
      int tr = K - (a + b);
      sort(x.begin(), x.end());
      for (int i = 0; i < tr; i++) {
        if (i < 0 || i >= x.size())
          continue;
        if (x[i] < 0)
          x[i] = 0;
      }
      for (auto u : x) {
        cnt += u;
      }
      /*cout << "cnt: " << cnt << " a: " << a << " b: " << b << endl;
      for(auto u: x){
          cout <<  u << ' ';
      }
      cout << endl;*/
      chmax(ans, cnt);
    }
  }
  cout << ans << endl;
  return 0;
}

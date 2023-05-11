#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
using ll = long long;
using P = pair<int, int>;
const int INF = 1e9;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = int(a); i < int(b); ++i)
template <class T> bool chmax(T &a, const T &b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> bool chmin(T &a, const T &b) {
  if (b < a) {
    a = b;
    return 1;
  }
  return 0;
}

int main() {
  string S;
  cin >> S;
  deque<char> deq;
  int N = S.size();
  for (int i = 0; i < N; i++) {
    deq.push_back(S[i]);
  }
  int Q;
  cin >> Q;
  bool flag = false;
  for (int i = 0; i < Q; i++) {
    int T;
    cin >> T;
    if (T == 1) {
      if (flag)
        flag = false;
      else
        flag = true;
    }
    if (T == 2) {
      int f;
      cin >> f;
      char c;
      cin >> c;
      if (flag) {
        if (f == 1)
          deq.push_back(c);
        if (f == 2)
          deq.push_front(c);
      } else {
        if (f == 1)
          deq.push_front(c);
        if (f == 2)
          deq.push_back(c);
      }
    }
  }
  if (flag == false) {
    for (auto v : deq) {
      cout << v;
    }
    cout << endl;
  } else {
    while (!deq.empty()) {
      char x = deq.back();
      deq.pop_back();
      cout << x;
    }
    cout << endl;
  }
  return 0;
}

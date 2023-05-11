#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
const int INF = 1e9;

int main() {
  int N;
  cin >> N;
  map<string, int> mp;
  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    mp[s]++;
  }
  int ans = 0;
  string name;
  for (auto s : mp) {
    if (s.second > ans) {
      ans = s.second;
      name = s.first;
    }
  }
  cout << name << endl;
  return 0;
}

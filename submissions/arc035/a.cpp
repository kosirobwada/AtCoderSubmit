#include <algorithm>
#include <cassert>
#include <climits>
#include <iomanip>
#include <iostream>
#include <map>
#include <math.h>
#include <numeric>
#include <set>
#include <stdio.h>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
typedef long long ll;

#define rep(i, n) for (long long i = 0; i < (n); ++i)
#define all(c) begin(c), end(c)
// using P = pair<int,int>;
// #include<bits/stdc++.h>

int main() {
  string s;
  cin >> s;
  for (int i = 0; i < s.size() / 2; i++) {
    if (s[i] == s[s.size() - i - 1] || s[i] == '*' ||
        s[s.size() - i - 1] == '*')
      continue;
    else {
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES" << endl;
}

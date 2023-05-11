#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int l = S.size();
  int first, last;
  first = S.find_first_of('A');
  last = S.find_last_of('Z');
  cout << last - first + 1 << endl;
}

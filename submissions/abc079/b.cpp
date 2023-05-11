#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long int> a(87);
  a.at(0) = 2;
  a.at(1) = 1;
  for (int i = 2; i < 87; i++) {
    a.at(i) = a.at(i - 1) + a.at(i - 2);
  }
  cout << a.at(N) << endl;
}

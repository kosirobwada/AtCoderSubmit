#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<long long> a(3);
  cin >> a.at(0) >> a.at(1) >> a.at(2);
  sort(a.begin(), a.end());
  if (a.at(0) % 2 == 1 && a.at(1) % 2 == 1 && a.at(2) % 2 == 1)
    cout << a.at(0) * a.at(1) << endl;
  else
    cout << "0" << endl;
}

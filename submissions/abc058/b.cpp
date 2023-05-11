#include <bits/stdc++.h>
using namespace std;

int main() {
  string O, E;
  cin >> O >> E;
  for (int i = 0; i < E.size(); i++) {
    cout << O.at(i);
    cout << E.at(i);
  }
  if (O.size() > E.size())
    cout << O.at(O.size() - 1);
  cout << endl;
}

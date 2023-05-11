#include <bits/stdc++.h>
using namespace std;

int main() {
  int K;
  cin >> K;
  string S;
  cin >> S;
  if (S.size() <= K)
    cout << S << endl;
  else
    for (int i = 0; i < S.size(); i++) {
      if (i < K)
        cout << S.at(i);
      else {
        cout << "..." << endl;
        break;
      }
    }
}

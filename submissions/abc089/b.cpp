#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, i, P = 0, W = 0, G = 0, Y = 0;
  cin >> N;
  string S;
  for (i = 0; i < N; i++) {
    cin >> S;
    if (S == "W")
      W = 1;
    if (S == "P")
      P = 1;
    if (S == "G")
      G = 1;
    if (S == "Y")
      Y = 1;
  }
  if (P + W + G + Y == 4)
    cout << "Four" << endl;
  else
    cout << "Three" << endl;
}

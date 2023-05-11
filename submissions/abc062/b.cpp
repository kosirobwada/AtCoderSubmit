#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W, i;
  cin >> H >> W;
  vector<string> vec(H);
  for (i = 0; i < H; i++) {
    cin >> vec.at(i);
  }
  for (i = 0; i < W + 2; i++)
    cout << "#";
  cout << endl;
  for (i = 0; i < H; i++) {
    cout << "#";
    cout << vec.at(i);
    cout << "#" << endl;
  }
  for (i = 0; i < W + 2; i++) {
    cout << "#";
  }
  cout << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> T(N);

  for (int i = 0; i < N; i++) {
    double MT, mt;
    cin >> MT >> mt;

    if (MT >= 35)
      T[0]++;
    if (MT >= 30 && MT < 35)
      T[1]++;
    if (MT >= 25 && MT < 30)
      T[2]++;
    if (mt >= 25)
      T[3]++;
    if (mt < 0 && MT >= 0)
      T[4]++;
    if (MT < 0)
      T[5]++;
  }

  cout << T[0] << " " << T[1] << " " << T[2] << " " << T[3] << " " << T[4]
       << " " << T[5] << endl;

  return 0;
}

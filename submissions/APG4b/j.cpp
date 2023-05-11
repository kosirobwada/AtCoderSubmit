#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, i;
  cin >> N;
  vector<int> vec(N);
  for (i = 0; i < N; i++) {
    cin >> vec.at(i);
  }
  int sum, ave;
  for (i = 0; i < N; i++) {
    sum += vec.at(i);
  }
  ave = sum / N;
  for (i = 0; i < N; i++) {
    if (ave > vec.at(i))
      cout << ave - vec.at(i) << endl;
    else
      cout << vec.at(i) - ave << endl;
  }
}

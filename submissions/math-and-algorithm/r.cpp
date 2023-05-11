#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  long long a = 0, b = 0, c = 0, d = 0;
  for (int i = 0; i < N; i++) {
    int A;
    cin >> A;
    if (A == 100)
      a++;
    else if (A == 200)
      b++;
    else if (A == 300)
      c++;
    else
      d++;
  }
  cout << a * d + b * c << endl;
}

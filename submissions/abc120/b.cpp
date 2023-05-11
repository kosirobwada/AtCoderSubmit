#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, K, count = 0;
  cin >> A >> B >> K;
  for (int i = 100; i >= 1; i--) {
    if (A % i == 0 && B % i == 0) {
      count++;
      if (count == K)
        cout << i << endl;
    }
  }
}

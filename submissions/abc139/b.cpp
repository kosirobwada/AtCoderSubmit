#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  int a, count = 0;
  a = 1;
  while (a < B) {
    a = a + A - 1;
    count++;
  }
  cout << count << endl;
}

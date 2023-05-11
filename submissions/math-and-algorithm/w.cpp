#include <bits/stdc++.h>
using namespace std;
int B[100009], R[100009];
int main() {
  int N;
  cin >> N;
  for (int i = 1; i <= N; i++) {
    cin >> B[i] >> R[i];
  }
  double blue = 0.0, red = 0.0;
  for (int i = 1; i <= N; i++) {
    blue += 1.0 * B[i] / N;
    red += 1.0 * R[i] / N;
  }
  printf("%.12lf\n", blue + red);
  return 0;
}

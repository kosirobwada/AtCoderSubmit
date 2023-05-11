#include <bits/stdc++.h>
using namespace std;

int A[200010], B[200010];
double suma = 0, sumb = 0;

int main() {
  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    suma += A[i];
  }
  for (int i = 0; i < N; i++) {
    cin >> B[i];
    sumb += B[i];
  }
  double ans = 0;
  ans = (1.0 * (suma / 3.0) + (sumb / 3.0) * 2.0);

  printf("%.12lf\n", ans);
  return 0;
}

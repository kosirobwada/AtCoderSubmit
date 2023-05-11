#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int n, a, b, batas1, batas2;
long double ans = 0;
LL arr[100], kombin[55][55] = {}, totalcara = 0;
bool cmp(LL a, LL b) { return (a > b); }
void tukar(LL &a, LL &b) {
  LL temp = a;
  a = b;
  b = temp;
}
LL fpb(LL a, LL b) {
  if (b == 0)
    return a;
  else
    return fpb(b, a % b);
}
void isikombin() {
  for (int i = 0; i <= 50; i++) {
    kombin[i][0] = 1;
    for (int j = 1; j <= i; j++)
      kombin[i][j] = kombin[i - 1][j - 1] + kombin[i - 1][j];
  }
}
int main() {
  scanf("%d%d%d", &n, &a, &b);
  for (int i = 1; i <= n; i++)
    scanf("%lld", &arr[i]);
  sort(arr + 1, arr + n + 1, cmp);
  for (int i = a; i <= n; i++) {
    if (arr[i] == arr[a])
      batas2 = i;
  }
  for (int i = a; i >= 1; i--) {
    if (arr[i] == arr[a])
      batas1 = i;
  }
  isikombin();
  totalcara = kombin[(batas2 - batas1 + 1)][(a - batas1 + 1)];
  for (int i = a + 1; i <= b && batas1 == 1; i++)
    totalcara += kombin[(batas2 - batas1 + 1)][(i - batas1 + 1)];
  for (int i = 1; i <= a; i++)
    ans += arr[i];
  ans /= (long double)a;
  printf("%.6Lf\n", ans);
  printf("%lld\n", totalcara);
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll ax, ay, bx, by, cx, cy;
  cin >> ax >> ay >> bx >> by >> cx >> cy;
  long long BAx = (ax - bx), BAy = (ay - by);
  long long BCx = (cx - bx), BCy = (cy - by);
  long long CAx = (ax - cx), CAy = (ay - cy);
  long long CBx = (bx - cx), CBy = (by - cy);
  int pattern = 2;
  if (BAx * BCx + BAy * BCy < 0LL)
    pattern = 1;
  if (CAx * CBx + CAy * CBy < 0LL)
    pattern = 3;
  double ans = 0.0;
  if (pattern == 1)
    ans = sqrt(BAx * BAx + BAy * BAy);
  if (pattern == 3)
    ans = sqrt(CAx * CAx + CAy * CAy);
  if (pattern == 2) {
    double S = abs(BAx * CAy - BAy * CAx);
    double BCl = sqrt(BCx * BCx + BCy * BCy);
    ans = S / BCl;
  }
  printf("%.12lf\n", ans);
  return 0;
}

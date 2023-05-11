#include <bits/stdc++.h>
using namespace std;

long long get_gcd_038(long long a, long long b) {
  if (b == 0)
    return a;
  else
    return get_gcd_038(b, a % b);
}

void large_lcm_038(void) {
  long long A, B;
  cin >> A >> B;
  long long gcd_val = get_gcd_038(A, B);
  long long th = 1;
  for (int i = 1; i <= 18; i++)
    th *= 10;
  double b_div = (double)th / B;

  if ((A / gcd_val) > (th / B)) {
    cout << "Large" << endl;
  } else {
    cout << (A / gcd_val) * B << endl;
  }
}

//
//___main
//
int main(void) {
  large_lcm_038();
  return 0;
}

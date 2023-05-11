#include <cfloat>
#include <cmath>
#include <iomanip>
#include <iostream>

// D - Prime Sum Game

using namespace std;

// (a,b)(c,d) -> sqrt( (a - c)^2 + (b - d)^2 )
int prime_array[] = {2,   3,   5,   7,   11,  13,  17,  19,  23,  29,  31,  37,
                     41,  43,  47,  53,  59,  61,  67,  71,  73,  79,  83,  89,
                     97,  101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151,
                     157, 163, 167, 173, 179, 181, 191, 193, 197, 199};

int isPrime(int ans) {
  for (int p = 0; p < 46; p++) {
    if (ans == prime_array[p]) {
      // cout << ans << endl; //debug print
      // cout << "prime" << endl;
      return 1;
    }
  }
  return 0;
}

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  int tmp;
  int ans;

  for (int t = A; t <= B; t++) {
    int flg = 1;
    for (int i = C; i <= D; i++) {
      tmp = t + i;
      if (isPrime(tmp)) {
        flg = 0;
      }
    }
    if (flg) {
      cout << "Takahashi" << endl;
      return 0;
    }
  }
  cout << "Aoki" << endl;
  return 0;
}

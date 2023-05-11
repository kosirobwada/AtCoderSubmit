#include <cstdio>
#include <iostream>
using namespace std;
int a[10];
int n;
int sum;
int main() {
  for (int i = 1; i <= 6; i++) {
    int t;
    scanf("%d", &t);
    a[t]--;
  }
  scanf("%d", &n);
  for (int i = 1; i <= 6; i++) {
    int t;
    scanf("%d", &t);
    a[t]++;
  }
  for (int i = 0; i <= 9; i++) {
    if (a[i] > 0) {
      sum += a[i];
    }
  }
  if (sum == 0)
    printf("1\n");
  else if (sum == 2)
    printf("4\n");
  else if (sum == 3)
    printf("5\n");
  else if (sum >= 4)
    printf("0\n");
  else {
    for (int i = 0; i <= 9; i++) {
      if (a[i] > 0) {
        if (i == n)
          printf("2\n");
        else
          printf("3\n");
      }
    }
  }
  return 0;
}

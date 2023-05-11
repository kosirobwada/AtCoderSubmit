#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

const int N = 1e5 + 7;

int n, m, cnt[N];

struct note {
  int y, p, id;
} a[N];
int cmp(note u, note v) { return u.y < v.y; }

int ans[N][2];

int main() {
  scanf("%d%d", &n, &m);
  for (int i = 1; i <= m; i++)
    scanf("%d%d", &a[i].p, &a[i].y), a[i].id = i;
  sort(a + 1, a + m + 1, cmp);
  for (int i = 1; i <= m; i++)
    ans[a[i].id][0] = a[i].p, ans[a[i].id][1] = ++cnt[a[i].p];
  for (int i = 1; i <= m; i++)
    printf("%06d%06d\n", ans[i][0], ans[i][1]);
  return 0;
}

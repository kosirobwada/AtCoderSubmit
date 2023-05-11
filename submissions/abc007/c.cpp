// Problem: AT896 ïùóDêÊíTçı
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/AT896
// Memory Limit: 250 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
inline long long read() {
  long long s = 0, k = 1;
  char c = getchar();
  while (!isdigit(c)) {
    k = (c == '-') ? -1 : 1;
    c = getchar();
  }
  while (isdigit(c)) {
    s = s * 10 + c - '0';
    c = getchar();
  }
  return s * k;
}
#define d read()
#define ll long long
#define Maxn 10000
#define Size 10000
#define pb push_back
#define mp make_pair
map<pair<ll, ll>, bool> vis;
ll n, m, sx, sy, ex, ey;
struct a {
  ll x, y, q;
};
char r[60][60];
void bfs() {
  queue<a> q;
  q.push((a){sx, sy, 0});
  while (!q.empty()) {
    a now = q.front();
    q.pop();
    ll nx = now.x, ny = now.y;
    if (r[nx][ny] == '#' || vis[mp(nx, ny)])
      continue;
    vis[mp(nx, ny)] = 1;
    if (nx == ex && ny == ey) {
      cout << now.q << endl;
      exit(0);
    }
    ll w = now.q;
    if (nx > 1)
      q.push({nx - 1, ny, w + 1});
    if (ny > 1)
      q.push({nx, ny - 1, w + 1});
    if (nx < n)
      q.push({nx + 1, ny, w + 1});
    if (ny < m)
      q.push({nx, ny + 1, w + 1});
  }
}
int main() {
  n = d, m = d;
  sx = d, sy = d;
  ex = d, ey = d;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> r[i][j];
    }
  }
  bfs();
}

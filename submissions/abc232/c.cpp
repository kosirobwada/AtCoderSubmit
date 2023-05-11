#include <bits/stdc++.h>
using namespace std;
using Graph = map<int, vector<int>>;
const int INF = 1e9;
using ll = long long;
using P = pair<int, int>;
int N, M;
bool G1[10][10], G2[10][10];
vector<int> a;
void input(bool G[10][10]) {
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    G[a][b] = true;
    G[b][a] = true;
  }
}

bool OK() {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (G1[i][j] != G2[a[i]][a[j]])
        return 0;
    }
  }
  return 1;
}

int main() {
  cin >> N >> M;
  input(G1);
  input(G2);
  a.resize(N);
  for (int i = 0; i < N; i++) {
    a.push_back(i);
  }
  do {
    if (OK()) {
      cout << "Yes" << endl;
      return 0;
    }
  } while (next_permutation(a.begin(), a.end()));
  cout << "No" << endl;
  return 0;
}

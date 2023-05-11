#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  int a[200010];
  int b[200010];
  vector<tuple<int, int, int>> score;

  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];

  for (int i = 0; i < n; i++)
    score.push_back({-(a[i] + b[i]), -a[i], i + 1});
  sort(score.begin(), score.end());

  for (int i = 0; i < n; i++) {
    cout << get<2>(score[i]);
    if (i < (n - 1))
      cout << " ";
    else
      cout << endl;
  }

  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int N = S.size();

  // ���������O�X���k
  vector<int> res(N, 0);
  vector<int> div({0}); // �ς��ڂ�����
  for (int i = 0; i < S.size();) {
    int j = i;
    while (j < N && S[j] == S[i])
      ++j;
    div.push_back(j);

    // R �� L �̌�����A�W�v
    if (S[i] == 'L') {
      int A = div[div.size() - 2] - div[div.size() - 3];
      int B = div[div.size() - 1] - div[div.size() - 2];
      res[i - 1] = (A + 1) / 2 + B / 2;
      res[i] = A / 2 + (B + 1) / 2;
    }

    // �X�V
    i = j;
  }
  for (int i = 0; i < res.size(); ++i)
    cout << res[i] << " ";
  cout << endl;
}

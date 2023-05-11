#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  vector<long long> B(N + 1, 0); // �ݐϘa�e�[�u��
  int mod = 1000000007;

  for (int i = 0; i < N; i++) {
    cin >> A[i];
    B[i + 1] = B[i] + A[i];
  }

  long ans = 0;

  // i �ɂ��đS�T������
  for (int i = 0; i < N; i++) {
    // �ݐϘa���g����A[i+1] + ... + A[N] �����߂�
    long long sum = (B[N] - B[i + 1]) % mod;

    ans += A[i] * sum;
    ans %= mod;
  }

  cout << ans << endl;
}

#include <iostream>
using namespace std;

const long long mod = 998244353;
long long A, B, C;

int main() {
  // ����
  cin >> A >> B >> C;

  // �v�Z
  long long D = A * (A + 1) / 2;
  D %= mod;
  long long E = B * (B + 1) / 2;
  E %= mod;
  long long F = C * (C + 1) / 2;
  F %= mod;

  // �������o��
  // ������ (D * E * F) % mod �ɂ��Ă��A�r���� 10^27 �������\��������
  // ���̂��߁Along long �^�ł��I�[�o�[�t���[���邱�Ƃɒ��ӁI
  cout << (D * E % mod) * F % mod << endl;
  return 0;
}

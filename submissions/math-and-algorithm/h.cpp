#include <iostream>
using namespace std;

long long cross(long long ax, long long ay, long long bx, long long by) {
  // �x�N�g�� (ax, ay) �� (bx, by) �̊O�ς̑傫��
  return ax * by - ay * bx;
}

int main() {
  // ����
  long long X1, Y1, X2, Y2, X3, Y3, X4, Y4;
  cin >> X1 >> Y1; // �_ A �̍��W�����
  cin >> X2 >> Y2; // �_ B �̍��W�����
  cin >> X3 >> Y3; // �_ C �̍��W�����
  cin >> X4 >> Y4; // �_ D �̍��W�����

  // cross(AB, AC) ���v�Z
  long long ans1 = cross(X2 - X1, Y2 - Y1, X3 - X1, Y3 - Y1);
  long long ans2 = cross(X2 - X1, Y2 - Y1, X4 - X1, Y4 - Y1);
  long long ans3 = cross(X4 - X3, Y4 - Y3, X1 - X3, Y1 - Y3);
  long long ans4 = cross(X4 - X3, Y4 - Y3, X2 - X3, Y2 - Y3);

  // ���ׂĈ꒼����ɕ���ł���ꍇ�i�R�[�i�[�P�[�X�j
  if (ans1 == 0 && ans2 == 0 && ans3 == 0 && ans4 == 0) {
    // A, B, C, D �𐔒l�i���m�ɂ� pair �^�j�Ƃ݂Ȃ�
    // �K�؂� swap ���邱�Ƃ� A<B, C<D ������ł���
    // ��������ƁA��Ԃ��d�Ȃ邩�̔���i�ߖ���� 2.5.6�j�ɋA���ł���
    pair<long long, long long> A = make_pair(X1, Y1);
    pair<long long, long long> B = make_pair(X2, Y2);
    pair<long long, long long> C = make_pair(X3, Y3);
    pair<long long, long long> D = make_pair(X4, Y4);
    if (A > B)
      swap(A, B);
    if (C > D)
      swap(C, D);
    if (max(A, C) <= min(B, D))
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
    return 0;
  }

  // �����łȂ��ꍇ
  // IsAB: ���� AB ���_ C, D �𕪂��邩�H
  // IsCD: ���� CD ���_ A, B �𕪂��邩�H
  bool IsAB = false, IsCD = false;
  if (ans1 >= 0 && ans2 <= 0)
    IsAB = true;
  if (ans1 <= 0 && ans2 >= 0)
    IsAB = true;
  if (ans3 >= 0 && ans4 <= 0)
    IsCD = true;
  if (ans3 <= 0 && ans4 >= 0)
    IsCD = true;

  // �����̏o��
  if (IsAB == true && IsCD == true) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}

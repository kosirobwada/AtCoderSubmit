#include <iostream>
#include <vector>

constexpr long long INF = (1LL << 60);

// ��
struct Edge {
  int from;
  int to;
  int cost;
};

// �x���}���t�H�[�h�@ (1.2 ���H�̉e�����󂯂钸�_�𒲂ׂ�)
// ���̕H�����݂���ꍇ true ��Ԃ�, ���H�̉e�����󂯂钸�_�� -INF
// �ɃZ�b�g����� distances �͒��_���Ɠ����T�C�Y, �S�v�f INF �ŏ��������Ă���
bool BellmanFord(const std::vector<Edge> &edges,
                 std::vector<long long> &distances, int startIndex) {
  distances[startIndex] = 0;

  for (size_t i = 0; i < distances.size(); ++i) {
    bool changed = false;

    // �e�ӂɂ���
    for (const auto &edge : edges) {
      // (INF + cost) �� INF �Ȃ̂ŏ������Ȃ�
      if (distances[edge.from] == INF) {
        continue;
      }

      // to �܂ł̐V��������
      const long long d = (distances[edge.from] + edge.cost);

      // d �����݂̋L�^��菬������΍X�V
      if (d < distances[edge.to]) {
        distances[edge.to] = d;

        changed = true;
      }
    }

    // �ǂ̒��_���X�V����Ȃ�������I��
    if (!changed) {
      return false;
    }
  }

  // ���_������������ɌJ��Ԃ�, ���H�̉e�����󂯂钸�_�� -INF ��`�d
  for (size_t i = 0; i < distances.size(); ++i) {
    for (const auto &edge : edges) {
      if (distances[edge.from] == INF) {
        continue;
      }

      const long long d = (distances[edge.from] + edge.cost);

      if (d < distances[edge.to]) {
        // ���H�̉e�����󂯂钸�_�� -INF ��
        distances[edge.to] = -INF;
      }
    }
  }

  return true;
}

int main() {
  int N, M;
  std::cin >> N >> M;

  std::vector<Edge> edges(M);
  for (auto &edge : edges) {
    std::cin >> edge.from >> edge.to >> edge.cost;
    --edge.from;
    --edge.to;
    edge.cost *= -1;
  }

  std::vector<long long> distances(N, INF);

  BellmanFord(edges, distances, 0);

  if (distances[N - 1] == -INF) // ���_ N �ւƎ��镉�H�����݂���ꍇ
  {
    std::cout << "inf\n";
  } else {
    std::cout << -distances[N - 1] << '\n';
  }
}

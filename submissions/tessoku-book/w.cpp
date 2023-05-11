#include <bits/stdc++.h>
using namespace std;
int T, N, M = 20;
vector<int> p, q, r, x, y, z;
int Time;
int Time_Limit = 800000;
clock_t start_Time, end_Time;
// y[i] = 0 -> B : y[i] = 1 -> A :
int Score() {
  int sum = 0;
  z.assign(M, 0);
  for (int i = 0; i < N; i++) {
    int tmp = 0;
    if (y[i]) {
      z[p[i]]++;
      z[q[i]]++;
      z[r[i]]++;
    } else {
      z[p[i]]--;
      z[q[i]]--;
      z[r[i]]--;
    }
    for (int j = 0; j < M; j++) {
      if (z[j] != 0)
        continue;
      tmp++;
    }
    sum += tmp;
  }
  return sum;
}
int RandInt() { return rand() % N; }
int main() {
  x.assign(M, 0);
  cin >> T;
  N = T;
  p.resize(N);
  q.resize(N);
  r.resize(N);
  y.resize(N);
  for (int i = 0; i < N; i++) {
    cin >> p[i] >> q[i] >> r[i];
    p[i]--;
    q[i]--;
    r[i]--;
  }
  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) {
      y[i] = 0;
      x[p[i]]--;
      x[q[i]]--;
      x[r[i]]--;
    } else {
      y[i] = 1;
      x[p[i]]++;
      x[q[i]]++;
      x[r[i]]++;
    }
  }
  int now_Score = Score();
  start_Time = clock();
  Time = 0;
  while (Time < Time_Limit) {
    int id = RandInt();
    if (y[id]) {
      y[id] = 0;
      x[p[id]]--;
      x[q[id]]--;
      x[r[id]]--;
    } else {
      y[id] = 1;
      x[p[id]]++;
      x[q[id]]++;
      x[r[id]]++;
    }
    int new_Score = Score();
    if (new_Score > now_Score) {
      now_Score = new_Score;
    } else {
      if (y[id]) {
        y[id] = 0;
        x[p[id]]--;
        x[q[id]]--;
        x[r[id]]--;
      } else {
        y[id] = 1;
        x[p[id]]++;
        x[q[id]]++;
        x[r[id]]++;
      }
    }
    end_Time = clock();
    Time = end_Time - start_Time;
  }
  for (int i = 0; i < N; i++) {
    if (y[i])
      cout << "A" << endl;
    else
      cout << "B" << endl;
  }
  return 0;
}

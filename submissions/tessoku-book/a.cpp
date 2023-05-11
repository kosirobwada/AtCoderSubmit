#include <bits/stdc++.h>
using namespace std;
int N = 100;
int Time, Time_Limit = 5400000;
clock_t start_Time, end_Time;
vector<vector<int>> a(N, vector<int>(N, 0));
vector<vector<int>> b(N, vector<int>(N, 0));
int Score() {
  int sum = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      sum += abs(a[i][j] - b[i][j]);
    }
  }
  return 200000000 - sum;
}
int RandInt() { return rand() % N; }
int main() {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> a[i][j];
    }
  }
  int Q = 1000;
  vector<int> x(Q), y(Q), h(Q);
  cout << Q << endl;
  for (int i = 0; i < Q; i++) {
    x[i] = rand() % N;
    y[i] = rand() % N;
    h[i] = rand() % N + 1;
  }
  int now_Score = Score();
  start_Time = clock();
  Time = 0;
  while (Time < Time_Limit) {
    int id = RandInt();
    int tmp_x, tmp_y, tmp_h;
    tmp_x = x[id];
    x[id] = rand() % N;
    tmp_y = y[id];
    y[id] = rand() % N;
    tmp_h = h[id];
    h[id] = rand() % N + 1;
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        b[i][j] += max(0, (h[id] - abs(x[id] - x[i]) - abs(y[id] - y[i])));
      }
    }
    int new_Score = Score();
    if (new_Score > now_Score)
      now_Score = new_Score;
    else {
      x[id] = tmp_x;
      y[id] = tmp_y;
      h[id] = tmp_h;
    }
    end_Time = clock();
    Time = end_Time - start_Time;
  }
  for (int i = 0; i < Q; i++) {
    cout << x[i] << ' ' << y[i] << ' ' << h[i] << endl;
  }
  return 0;
}

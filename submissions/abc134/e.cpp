#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }
  multiset<int> st;
  st.insert(a[0]);
  for (int i = 1; i < N; i++) {
    int mi = *st.begin();
    if (a[i] <= mi) {
      st.insert(a[i]);
      continue;
    }
    auto itr = st.lower_bound(a[i]);
    itr--;
    st.insert(a[i]);
    st.erase(itr);
  }
  cout << st.size() << endl;
  return 0;
}

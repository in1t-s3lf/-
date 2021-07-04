#include <iostream>

#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  int n = 0, k = 0;
  cin >> n >> k;
  vector < int > a(n);
  int l = 0, r = 100;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    r = a[i] > r ? a[i] : r;
  }
  r++;
  while (r - l > 1) {
    int m = (l + r) / 2;
    int cnt = 0;
    for (int i = 0; i < n; ++i)
      cnt += a[i] / m;
    if (cnt >= k)
      l = m;
    else
      r = m;
  }
  cout << l;

  return 0;
}

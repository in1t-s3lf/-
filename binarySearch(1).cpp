#include <iostream>
#include <vector>

using namespace std;

int bin(vector < int > &a, int key) {
  int l = -1, r = a.size();
  while (r - l > 1) {
    int m = (l + r) / 2;
    if (a[m] < key)
      l = m;
    else r=m;
  }
  if (r != a.size() && a[r] == key)
    return r;
  return -1;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  int n = 0, m = 0;
  cin >> n >> m;
  vector < int > a(n);
  for (int i = 0; i < n; ++i) cin >> a[i];
  for (int i = 0; i < m; ++i) {
    int key;
    cin >> key;
    if (bin(a, key) != -1)
      cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}

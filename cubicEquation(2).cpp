#include <iostream>

#include <vector>

#include <iomanip>

using namespace std;

int a = 1, b = 0, c = 0, d = 0;

double f(double x) {
  return a * x * x * x + b * x * x + c * x + d;
}
int main() {
  cin >> a >> b >> c >> d;
  double l = -1e10, r = 1e10;

  while (r - l > 0.000001) {
    double m = (l + r) / 2;
    if (f(l) * f(m) > 0)
      l = m;
    else r = m;
  }
  cout << setprecision(5) << fixed << (l + r) / 2;

  return 0;
}

#include <iostream>

#include <vector>

#include <string>

using namespace std;
vector < int > heap;

void siftUp(int v) {
  if (v == 0) return;
  int p = (v - 1) / 2;
  if (heap[v] > heap[p]) {
    swap(heap[v], heap[p]);
    siftUp(p);
  }
}
void siftDown(int v) {
  int left = 2 * v + 1, right = 2 * v + 2;
  if (left >= heap.size()) return;
  if (left == heap.size() - 1) right = left;
  int imax = heap[left] > heap[right] ? left : right;
  if (heap[v] < heap[imax]) {
    swap(heap[v], heap[imax]);
    siftDown(imax);
  }
}
int main() {
  string str;
  while (cin >> str) {
    if (str == "ADD") {
      int x = 0;
      cin >> x;
      heap.push_back(x);
      siftUp(heap.size() - 1);
    } else if (str == "EXTRACT") {
      if (!heap.empty()) {
        cout << heap[0] << '\n';
        heap[0] = heap.back();
        heap.pop_back();
        siftDown(0);
      } else {
        cout << "CANNOT\n";
      }
    } else if (str == "CLEAR") {
      heap = vector < int > ();
    }
  }
  return 0;

}

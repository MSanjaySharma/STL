#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ivec = std::vector<int>;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // PAIR: container to store two heterogeneous objects as a single unit
  // Container definition in "utility" library

  // SYNTAX:  pair (data_type1, data_type2) Pair_name

  // DECLARATION + INITIALIZATION
  // 1. make_pair

  // 2. Direct initializing using curly brackets

  // INSERT

  // ACCESS
  vector<int> V1{10, 20, 30};
  queue<int> Q5{{10, 20}};
  queue<int> Q1{{4, 32, 23, 5, 7}};
  stack<int> S5{{10, 20, 67}};
  deque<int> Q{10, 20, 67, 100, 643, 3, 5, 2};
  priority_queue<int> PQ;
  PQ = {3, 5};
  Q.pop_back();
  for (auto i : Q) {
    cout << i << "\n";
  }
  ivec v = {1, 2, 3};

  tuple<int, int, char> t;
  t = {3, 4, 'f'};
  cout << get<0>(t) << endl;
  int x, y;
  char z;
  tie(x, y, z) = t;
  cout << x << y << z << "\n";
  return 1;
}
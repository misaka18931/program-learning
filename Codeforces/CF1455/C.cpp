// CodeForces/CF1455/C.cpp
// https://codeforces.com/contest/1455/problem/C
// Created by learntocode1024 on 11/30/20.
// AC

#include <cstdio>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void solve() {
  int x, y;
  cin >> x >> y;
  cout << x - 1 <<  ' ' << y << endl;
}

int main() {
  cin.tie(NULL);
  std::ios::sync_with_stdio(false);
  int T = 1;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}

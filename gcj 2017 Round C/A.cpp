//#include <algorithm>
//#include <cmath>
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <iostream>
//#include <map>
//#include <queue>
//#include <set>
//#include <string>
//#include <vector>
//using namespace std;
//#define LL long long
//const int maxn = 30;
//int n;
//
//int rows, columns, start_r, start_c, limited;
//double p, Q;
//
//double res;
//
//char grid[maxn][maxn];
//int visited[maxn][maxn];
//
//void dfs(int x, int y, double cur, int total) {
//  if (x >= 0 && x < rows && y >= 0 && y < columns) {
//    total++;
//    visited[x][y] = 1;
//    if (grid[x][y] == '.') {
//      cur += Q;
//    } else {
//      cur += p;
//    }
//
//    if (total == limited) {
//      res = max(res, cur);
//      return;
//    } else if (total < limited) {
//      dfs(x - 1, y, cur, total);
//      dfs(x + 1, y, cur, total);
//      dfs(x, y - 1, cur, total);
//      dfs(x, y + 1, cur, total);
//    }
//  }
//}
//
//int main() {
//  freopen("A-small-attempt0", "r", stdin);
//  freopen("out", "w", stdout);
//  int T, t;
//  cin >> T;
//  t = 1;
//  LL ans;
//  while (T--) {
//    cin >> rows >> columns >> start_r >> start_c >> limited;
//    cin >> p >> Q;
//    for (int i = 0; i < rows; i++) {
//      for (int j = 0; j < columns; j++) {
//        cin >> grid[i][j];
//      }
//    }
//
//    res = 0;
//    dfs(start_r + 1, start_c, 0, 0);
//    dfs(start_r - 1, start_c, 0, 0);
//
//    dfs(start_r, start_c - 1, 0, 0);
//
//    dfs(start_r, start_c + 1, 0, 0);
//
//    printf("Case #%d: %.7lf\n", t++, res);
//  }
//  return 0;
//}

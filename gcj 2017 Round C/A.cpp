// https://code.google.com/codejam/contest/6274486/dashboard
//回溯法+概率知识
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;
#define LL long long
const int maxn = 30;
int n;

int rows, columns, start_r, start_c, limited;
double p, Q;

double res;

char grid[maxn][maxn];
int visited[maxn][maxn];
int direction[][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool checked(int x, int y) {
  if (x >= 0 && x < rows && y >= 0 && y < columns) {
    return true;
  }
  return false;
}
// 在进入dfs函数之前位置已合法，进入后计算，再根据方向判断出下一个位置nx,ny,
// 并核对（nx,ny）合法后再visited(nx,ny)++; dfs(nx,ny,total+1)
// 注意使用回溯法时写成total+1,最后记得visited(nx,ny)--
void dfs(int x, int y, double cur, int total, bool first) {
  if (!first) {
    int tmp = visited[x][y] - 1;
    if (grid[x][y] == '.') {
      cur += Q * pow((1 - Q), tmp);
    } else {
      cur += p * pow((1 - p), tmp);
    }
  } else {
    first = false;
  }

  if (total == limited) {
    res = max(res, cur);
    return;
  } else if (total < limited) {
    for (int i = 0; i < 4; i++) {
      int next_x = x + direction[i][0];
      int next_y = y + direction[i][1];
      if (checked(next_x, next_y)) {
        visited[next_x][next_y]++;
        dfs(next_x, next_y, cur, total + 1, false);
        visited[next_x][next_y]--;
      }
    }
  }
}

int main() {
  freopen("/Users/yuxiao/XcodeProject/gcj 2017 Round C/gcj 2017 Round C/in",
          "r", stdin);
  freopen("/Users/yuxiao/XcodeProject/gcj 2017 Round C/gcj 2017 Round C/out",
          "w", stdout);
  int T, t;
  cin >> T;
  t = 1;
  LL ans;
  while (T--) {
    cin >> rows >> columns >> start_r >> start_c >> limited;
    cin >> p >> Q;
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < columns; j++) {
        cin >> grid[i][j];
      }
    }

    res = 0;
    dfs(start_r, start_c, res, 0, true);
    printf("Case #%d: %.8lf\n", t++, res);
  }
  return 0;
}

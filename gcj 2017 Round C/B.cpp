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
const int maxn = 3005;

int rows, colums, k_lines;
int grid[maxn][maxn];
int dp[maxn][maxn];
int x_record[maxn], y_record[maxn];

void cal(int x, int y, int cur_i, int cur_j) {
  int val = 0;
  if (grid[cur_i][cur_j] == 0) {
    val = 1;
  }

  if (x >= 0 && x < rows && y >= 0 && y < colums) {
    if (dp[x][y]) {
      int width = dp[x][y] + 1;
      int ok = 1;
      int min_i = width;
      //      for (int i = 0; i < width; i++) {
      //        if (grid[cur_i - i][cur_j] == 1) {
      //          ok = 0;
      //          min_i = min(i, min_i);
      //        }
      //        if (grid[cur_i][cur_j - i] == 1) {
      //          ok = 0;
      //          min_i = min(i, min_i);
      //        }
      //      }
      for (int i = 0; i < k_lines; i++) {
        if (x_record[i] == cur_i && y_record[i] <= cur_j) {
          ok = 0;
          min_i = min(min_i, cur_j - y_record[i]);
        }

        if (y_record[i] == cur_j && x_record[i] <= cur_i) {
          ok = 0;
          min_i = min(min_i, cur_i - x_record[i]);
        }
      }
      if (ok) {
        dp[cur_i][cur_j] = width;
        return;
      } else {
        dp[cur_i][cur_j] = min_i;
      }
    } else {
      dp[cur_i][cur_j] = val;
    }

  } else {
    dp[cur_i][cur_j] = val;
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
    ans = 0;
    cin >> rows >> colums >> k_lines;
    memset(grid, 0, sizeof(grid));
    int a, b;
    for (int i = 0; i < k_lines; i++) {
      cin >> a >> b;
      grid[a][b] = 1;
      x_record[i] = a;
      y_record[i] = b;
    }

    memset(dp, 0, sizeof(dp));

    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < colums; j++) {
        if (grid[i][j] == 0) {

          cal(i - 1, j - 1, i, j);
          ans += dp[i][j];
        }
      }
    }

    printf("Case #%d: %lld\n", t++, ans);
  }
  return 0;
}

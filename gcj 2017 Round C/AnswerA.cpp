////#pragma comment(linker,"/STACK:102400000,102400000")
//#include <algorithm>
//#include <ctype.h>
//#include <iostream>
//#include <list>
//#include <map>
//#include <math.h>
//#include <queue>
//#include <set>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <string>
//#include <time.h>
//#include <vector>
////#include<ext/rope>
//#define PB push_back
//#define MP make_pair
//#define PF push_front
//#define lson k << 1
//#define rson k << 1 | 1
// using namespace std;
// typedef long long ll;
// typedef double db;
// typedef long double ldb;
//
// const int N = 25;
//
// char mp[N][N];
// int mk[N][N];
// int ch[][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
// db res;
// int r, c;
// db p, q;
//
// bool check(int x, int y) { return x >= 0 && y >= 0 && x < r && y < c; }
//
// void dfs(int rs, int cs, int s, db n) {
//  if (s == 0) {
//    res = max(res, n);
//    return;
//  }
//  for (int i = 0; i < 4; i++) {
//    int x = rs + ch[i][0], y = cs + ch[i][1];
//    if (check(x, y)) {
//      db t = mp[x][y] == 'A' ? p : q;
//      db tmp = pow(1.0 - t, mk[x][y]);
//      mk[x][y]++;
//      dfs(x, y, s - 1, n + tmp * t);
//      mk[x][y]--;
//    }
//  }
//}
//#ifdef PKWV
// int main() {
//
//  freopen("A-small-attempt0.in", "r", stdin);
//  freopen("A-small.out", "w", stdout);
//
//  int T;
//  scanf("%d", &T);
//  for (int cas = 1; cas <= T; cas++) {
//    int rs, cs, s;
//    scanf("%d%d%d%d%d", &r, &c, &rs, &cs, &s);
//    scanf("%lf%lf", &p, &q);
//    //        printf("%d  %d==\n",r,c);
//    for (int i = 0; i < r; i++) {
//      for (int j = 0; j < c; j++) {
//        char t[10];
//        scanf("%s", t);
//        mp[i][j] = t[0];
//      }
//    }
//    memset(mk, 0, sizeof(mk));
//    res = 0.0;
//    dfs(rs, cs, s, 0);
//    printf("Case #%d: %.8f\n", cas, res);
//  }
//  return 0;
//}
//#endif // PKWV

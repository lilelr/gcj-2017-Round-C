//#include <algorithm>
//#include <cmath>
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <iostream>
//#include <map>
//#include <queue>
//#include <set>
//#include <stack>
//#include <string>
//#include <vector>
//using namespace std;
//#define LL long long
//const int maxn = 1002;
//int n;
//string str;
//int total;
//map<string, set<string>> mmap;
//map<string, int> dgreemap;
//set<string> my_keys;
//stack<string> m_stack;
//
//int main() {
//  freopen("/Users/yuxiao/XcodeProject/gcj 2017 Round C/gcj 2017 Round C/in",
//          "r", stdin);
//  freopen("/Users/yuxiao/XcodeProject/gcj 2017 Round C/gcj 2017 Round C/out",
//          "w", stdout);
//
//  int T, t;
//  cin >> T;
//  t = 1;
//  string ans;
//  while (T--) {
//    cin >> n;
//    total = 0;
//    for (int i = 0; i < n; i++) {
//      cin >> str;
//      string y = str.substr(0, str.find('='));
//      my_keys.insert(y);
//      int left = str.find('(');
//      int right = str.find(')');
//      string x_str = "";
//      if (left != right - 1) {
//        x_str = str.substr(left + 1, right - left - 1);
//      }
//      //      cout << x_str << endl;
//
//      set<string> x_items;
//      if (!x_str.empty()) {
//        x_str += ',';
//        while (!x_str.empty()) {
//          int s_index = x_str.find(',');
//          x_items.insert(x_str.substr(0, s_index));
//          x_str.erase(0, s_index + 1);
//        }
//
//        for (set<string>::iterator it = x_items.begin(); it != x_items.end();
//             it++) {
//          //          cout << *it << " ";
//          if (!mmap[*it].count(y)) {
//            mmap[*it].insert(y);
//            dgreemap[y]++;
//          }
//        }
//        //        cout << endl;
//      } else {
//        dgreemap[y] = 0;
//      }
//
//      //      mmap[y] = x_items;
//      //      dgreemap[y] = x_items.size();
//      //      if (dgreemap[y] == 0) {
//      //        m_stack.push(y);
//      //      }
//    }
//
//    for (set<string>::iterator it = my_keys.begin(); it != my_keys.end();
//         it++) {
//      cout << *it << " 度为：" << dgreemap[*it] << endl;
//      if (dgreemap[*it] == 0) {
//        m_stack.push(*it);
//      }
//    }
//
//    total = 0;
//    while (!m_stack.empty()) {
//      string popval = m_stack.top();
//      m_stack.pop();
//      total++;
//      set<string> temp = mmap[popval];
//      for (set<string>::iterator it = temp.begin(); it != temp.end(); it++) {
//        dgreemap[*it]--;
//        if (dgreemap[*it] == 0) {
//          m_stack.push(*it);
//        }
//      }
//    }
//
//    if (total == n) {
//      ans = "GOOD";
//    } else {
//      ans = "BAD";
//    }
//    cout << "Case #" << t++ << ": " << ans << endl;
//  }
//  return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//#include<string>
//#include<cstring>
//#include<algorithm>
//#include<queue>
//#include<stack>
//#include<cmath>
//#include<vector>
//#include<fstream>
//#include<map>
//#define ll long long
//using namespace std;
//typedef unsigned ll ull;
//const int maxn = 1e3 + 10;
//const ull h1 = 97, h2 = 131;
//int n, m, T, p, q;
//ull pow1[maxn], pow2[maxn];
//ull h[maxn][maxn];
//char s[maxn][maxn], s1[maxn][maxn];
//ull a[maxn * maxn];
//int main() {
//    int cas = 1; 
//    pow1[0] = pow2[0] = 1; 
//    for (int i = 1; i < maxn; i++) {
//        pow1[i] = pow1[i - 1] * h1;
//        pow2[i] = pow2[i - 1] * h2;
//    }
//    while (~scanf("%d%d%d%d%d", &n, &m, &T, &p, &q) && n) {
//        ull temp = 0; 
//        int cnt = 0;
//        memset(s, 0, sizeof(s));
//        for (int i = 1; i <= n; i++) {
//            scanf("%s", s[i] + 1);
//        }
//        for (int i = 1; i <= n; i++) {
//            temp = 0; 
//            for (int j = 1; j < q; j++) {
//                temp = temp * h2 + s[i][j];
//            }
//            for (int j = q; j <= m; j++) {
//                temp = h[i][j] = temp * h2 - s[i][j - q] * pow2[q] + s[i][j];
//            }
//        }
//        for (int j = q; j <= m; j++) {
//            temp = 0;
//            for (int i = 1; i < p; i++) {
//                temp = temp * h1 + h[i][j];
//            }
//            for (int i = p; i <= n; i++) {
//                temp = a[cnt++] = temp * h1 - h[i - p][j] * pow1[p] + h[i][j];
//            }
//        }
//        sort(a, a + cnt); 
//        int ans = 0;
//        while (T--) {
//            for (int i = 1; i <= p; i++) {
//                scanf("%s", s1[i] + 1);
//            }
//            temp = 0;
//            for (int i = 1; i <= p; i++) {
//                ull t = 0;
//                for (int j = 1; j <= q; j++) {
//                    t = t * h2 + s1[i][j];
//                }
//                temp = temp * h1 + t;
//            }
//            int pos = lower_bound(a, a + cnt, temp) - a;
//            if (pos < cnt && a[pos] == temp) {
//                ans++;
//            }
//        }
//        if (n < p || m < q) ans = 0;
//        printf("Case %d: %d\n", cas++, ans);
//    }
//    return 0;
//}
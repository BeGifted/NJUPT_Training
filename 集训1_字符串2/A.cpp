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
//const int maxn = 1111111;
//const int mod = 1e9 + 7;
//
//int n, m, y[maxn], vis[maxn], Next[maxn], len, flag[maxn];
//char p[maxn];
//vector<int> v;
//void kmp_pre(char x[], int m, int Next[]) {
//    int i, j;
//    j = Next[0] = -1;
//    i = 0;
//    while (i < m) {
//        while (-1 != j && x[i] != x[j])j = Next[j];
//        Next[++i] = ++j;
//    }
//}
//ll fastpow(ll base, ll n, ll mod) {
//    ll ans = 1;
//    while (n) {
//        if (n & 1) ans *= base % mod, ans %= mod;
//        base *= base, base %= mod;
//        n >>= 1;
//    }
//    return ans % mod;
//}
//int main() {
//    scanf("%d%d%s", &n, &m, p);
//    len = strlen(p);
//    kmp_pre(p, len, Next);
//    for (int i = len; i; i = Next[i]) {
//        vis[i] = 1;
//    }
//    int num = 0;
//    for (int i = 1; i <= m; i++) {
//        scanf("%d", &y[i]);
//        flag[y[i]]++;
//        flag[y[i] + len]--;
//    }
//    for (int i = 2; i <= m; i++) {
//        if (y[i] - y[i - 1] < len) {
//            if (!vis[y[i - 1] + len - y[i]]) {
//                puts("0");
//                return 0;
//            }
//        }
//    }
//    int ans = 0;
//    for (int i = 1; i <= n; i++) {
//        num += flag[i];
//        if (!num) {
//            ans++;
//        }
//    }
//    printf("%lld\n", fastpow(26, ans, mod));
//    return 0;
//}
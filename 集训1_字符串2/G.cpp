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
//const int maxn = 2e5 + 10;
//int a[maxn], b[maxn], c[maxn], d[maxn], n, m;
//void kmp_pre(int x[], int m, int Next[]) {
//    int i, j;
//    j = Next[0] = -1;
//    i = 0;
//    while (i < m) {
//        while (-1 != j && x[i] != x[j])j = Next[j];
//        Next[++i] = ++j;
//    }
//}
//int Next[maxn];
//int KMP_Count(int x[], int m, int y[], int n) {//x 是模式串， y 是主串
//    int i, j;
//    int ans = 0;
//    //preKMP(x,m,Next);
//    kmp_pre(x, m, Next);
//    i = j = 0;
//    while (i < n) {
//        while (-1 != j && y[i] != x[j])j = Next[j];
//        i++; j++;
//        if (j >= m) {
//            ans++;
//            j = Next[j];
//        }
//    }
//    return ans;
//}
//int main() {
//	scanf("%d%d", &n, &m);
//    int mina = 2e9, maxa = -1;
//    int minb = 2e9, maxb = -1;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//        if (i) {
//            c[i - 1] = a[i] - a[i - 1];
//        }
//	}
//	for (int i = 0; i < m; i++) {
//		scanf("%d", &b[i]);
//        if (i) {
//            d[i - 1] = b[i] - b[i - 1];
//        }
//	}
//    if (n < m) {
//        puts("0");
//        return 0;
//    }
//    if (m == 1) {
//        printf("%d\n", n);
//        return 0;
//    }
//    int ans = KMP_Count(d, m - 1, c, n - 1);
//    printf("%d\n", ans);
//	return 0;
//}
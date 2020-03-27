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
//const int maxn = 1e6 + 10;
//
//char a[maxn], b[maxn];
//ll t;
//void kmp_pre(char x[], int m, int Next[]) {
//    int i, j;
//    j = Next[0] = -1;
//    i = 0;
//    while (i < m) {
//        while (-1 != j && x[i] != x[j])j = Next[j];
//        Next[++i] = ++j;
//    }
//}
//int Next[10010];
//int KMP_Count(char x[], int m, char y[], int n) {//x 是模式串， y 是主串
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
//	cin >> t;
//	while (t--) {
//		scanf("%s%s", a, b);
//        printf("%d\n", KMP_Count(a, strlen(a), b, strlen(b)));
//	}
//	return 0;
//}
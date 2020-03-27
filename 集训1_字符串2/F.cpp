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
//const int maxn = 5e5 + 10;
//char a[maxn], b[maxn];
//int n1, n0, n11, n01, nxt[maxn];
//void kmp_pre(char x[], int m, int Next[]) {
//	int i, j;
//	j = Next[0] = -1;
//	i = 0;
//	while (i < m) {
//		while (-1 != j && x[i] != x[j])j = Next[j];
//		Next[++i] = ++j;
//	}
//}
//int main() {
//	scanf("%s%s", a, b);
//	int lena = strlen(a), lenb = strlen(b);
//	for (int i = 0; i < lena; i++) {
//		if (a[i] == '1') {
//			n1++;
//		}
//		else {
//			n0++;
//		}
//	}
//	for (int i = 0; i < lenb; i++) {
//		if (b[i] == '1') {
//			n11++;
//		}
//		else {
//			n01++;
//		}
//	}
//	if (n11 > n1 || n01 > n0 || lena < lenb) {
//		printf("%s", a);
//		return 0;
//	}
//	int k = 0;
//	kmp_pre(b, lenb, nxt);
//	for(int i = 0; i < lena; i++){
//		if (k == lenb) {
//			k = nxt[lenb];
//		}
//		if (k < lenb) {
//			if (b[k] == '1') {
//				if (n1 == 0) {
//					break;
//				}
//				printf("1");
//				k++;
//				n1--;
//				if (n1 == 0) {
//					break;
//				}
//			}else {
//				if (n0 == 0) {
//					break;
//				}
//				printf("0");
//				k++;
//				n0--;
//				if (n0 == 0) {
//					break;
//				}
//			}
//		}
//	}
//	for (int i = 1; i <= n1; i++) {
//		printf("1");
//	}
//	for (int i = 1; i <= n0; i++) {
//		printf("0");
//	}
//	return 0;
//}
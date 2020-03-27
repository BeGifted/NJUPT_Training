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
//
//int t;
//string o, n;
//struct node {
//	string s, ss;
//}a[2222], b[2222];
//map<string, int> m;
//int p[2222], flag[2222], cnt;
//int Find(int x) {
//	flag[x] = 1;
//	return p[x] == x ? x : p[x] = Find(p[x]);
//}
//int main() {
//	scanf("%d", &t);
//	for (int i = 1; i <= 2 * t; i++) {
//		p[i] = i;
//	}
//	for (int i = 1; i <= 2 * t; i += 2) {
//		cin >> o >> n;
//		if (m[o]) {
//			p[m[o]] = i + 1;
//			flag[i] = 1;
//		}
//		else {
//			p[i] = i + 1;
//		}
//		a[i].s = o;
//		a[i + 1].s = n;
//		m[o] = i;
//		m[n] = i + 1;
//	}
//	for (int i = 1; i <= 2 * t; i += 2) {
//		if (!flag[i]) {
//			b[++cnt].s = a[Find(i)].s;
//			b[cnt].ss = a[i].s;
//		}
//	}
//	cout << cnt << endl;
//	for (int i = 1; i <= cnt; i++) {
//		cout << b[i].ss << " " << b[i].s << endl;
//	}
//	return 0;
//}
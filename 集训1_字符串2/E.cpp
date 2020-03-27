#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
#include<stack>
#include<cmath>
#include<vector>
#include<fstream>
#include<map>
#define ll long long
using namespace std;
const int MAXN = 100005;
char S[MAXN], T[1005];
char str[MAXN];
int Right[MAXN];
int nxt[MAXN];

void getNext(char* P, int* f) {
    int m = strlen(P);
    f[0] = f[1] = 0;
    for (int i = 1; i < m; ++i) {
        int j = f[i];
        while (j && P[i] != P[j]) j = f[j];
        f[i + 1] = P[i] == P[j] ? 1 + j : 0;
    }
}
bool find(char* S, char* T, int* f, int flag) {
    getNext(T, f);
    int n = strlen(S);
    int m = strlen(T);
    int j = 0;
    for (int i = 0; i < n; ++i) {
        while (j && S[i] != T[j]) j = f[j];
        if (S[i] == T[j]) ++j;
        if (flag == 1 && j && Right[j] == -1) {
            Right[j] = i;
        }
        else if (flag == 2) {
            if (j && Right[m - j] != -1 && Right[m - j] < n - i - 1) {
                return true;
            }
        }
    }
    return false;
}
int main() {
    int m;
    scanf("%s", S);
    scanf("%d", &m);
    int cnt = 0;
    while (m--) {
        scanf("%s", T);
        memset(Right, -1, sizeof(Right));
        find(S, T, nxt, 1);
        reverse(S, S + strlen(S));
        reverse(T, T + strlen(T));
        if (find(S, T, nxt, 2))
            ++cnt;
        reverse(S, S + strlen(S));
    }
    printf("%d\n", cnt);
    return 0;
}
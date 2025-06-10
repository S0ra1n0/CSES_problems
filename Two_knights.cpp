#include<bits/stdc++.h>
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define Sanic_speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define Ret return 0;
#define ret return;
#define all(x) x.begin(), x.end()
#define el "\n";
#define elif else if
#define ll long long
#define fi first
#define se second
#define pb push_back
#define pops pop_back
#define cYES cout << "YES" << "\n";
#define cNO cout << "NO" << "\n";
#define cYes cout << "Yes" << "\n";
#define cNo cout << "No" << "\n";
#define cel cout << "\n";
#define frs(i, a, b) for(int i = a; i < b; ++i)
#define fre(i, a, b) for(int i = a; i <= b; ++i)
#define wh(t) while (t--)
#define SORAI int main()
using namespace std;
typedef unsigned long long ull;
 
void solve() {
    int n, i = 1;
    cin >> n;
    while (i <= n) {
        ull ans = 0;
        if (i == 2) {ans = 6;}
        elif (i == 3) {ans = 28;}
        elif (i == 4) {ans = 96;}
        else {
            int r = 1, c = 1;
            ull total = i * i - 1, rest = 0;
            rest += ((i - 1)*2 * (i - 2));
            rest += ((i - 2)*2 * (i - 1));
            ans = (1 + total) * total / 2 - rest;
        }
        cout << ans << el
        ++i;
    }
}
 
SORAI {
    Sanic_speed
    int t = 1;// cin >> t;
    wh(t) {solve();}
}
/**
     /\__/\
    ( • 3• )
    / >♥️<\
**/

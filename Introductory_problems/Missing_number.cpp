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
    // Loop method
    /*
    int n, step = 1; cin >> n;
    --n;
    int a[n];
    frs(i, 0, n) {cin >> a[i];}
    sort(a, a+n);
    frs(i, 0, n) {
        if (a[i] != step) {break;}
        ++step;
    }
    cout << step;
    */
    
    // Sum method
    int n; cin >> n;
    int need = (n + 1) * n / 2;
    int a[n-1];
    int cur = 0;
    frs(i, 0, (n-1)) {cin >> a[i]; cur += a[i];}
    cout << need - cur;
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

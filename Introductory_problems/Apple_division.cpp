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

ll BRUCEFORCE(int i, int a[], ll sum1, ll sum2, int n) {
    if (i == n) {return abs(sum1 - sum2);}
    ll add1 = BRUCEFORCE(i + 1, a, sum1 + a[i], sum2, n);
    ll add2 = BRUCEFORCE(i + 1, a, sum1, sum2 + a[i], n);
    return min(add1, add2);
}

void solve() {
    int n;
    cin >> n;
    int a[n];
    frs(i, 0, n) {cin >> a[i];}
    ll ans = BRUCEFORCE(0, a, 0, 0, n);
    cout << ans;
}

SORAI {
    Sanic_speed
    int t = 1; //cin >> t;
    wh(t) {solve();}
}

/**
     /\__/\
    ( • 3• )
    / >♥️<\
**/

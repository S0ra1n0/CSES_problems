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
#define pf push_front
#define popb pop_back
#define popf pop_front
#define mp make_pair
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
    int n, m, x, y, check = 0;
    cin >> n >> m;
    vector<vector<int>> friendship(n + 1);
    frs(i, 0, m) {
        cin >> x >> y;
        friendship[x].pb(y);
        friendship[y].pb(x);
    }
    vector<int> ans(n + 1, 0);
    deque<pair<int, int>> alter;
    fre(i, 1, n) {
        if (ans[i] == 0) {
            alter.pb(mp(i, 1));
            ans[i] = 1;
            while (!alter.empty()) {
                int a = alter.front().fi;
                int b = alter.front().se;
                alter.popf();
                for (auto j : friendship[a]) {
                    if (ans[j] == 0) {
                        alter.pb(mp(j, (3 - b)));
                        ans[j] = 3 - b;
                    } elif (ans[j] == b) {
                        cout << "IMPOSSIBLE";
                        ret
                    }
                }
            }
        }
    }
    fre(i, 1, n) {cout << ans[i] << " ";}
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

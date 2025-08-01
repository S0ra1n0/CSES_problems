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
#define mp make_pair
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
    int n, m, ans = 1;
    cin >> n >> m;
    vector<int> connection(n + 1, 0);
    vector<vector<int>> linked(n + 1);
    wh(m) {
        int a, b;
        cin >> a >> b;
        linked[a].pb(b);
        linked[b].pb(a);
    }
    queue<int> q;
    q.push(1);
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (auto i : linked[cur]) {
            if (connection[i] == 0) {
                connection[i] = cur;
                q.push(i);
                if (i == n) {break;}
            }
        }
        if (connection[n] != 0) {while (!q.empty()) {q.pop();}}
    }
    if (connection[n] == 0) {
        cout << "IMPOSSIBLE";
        ret
    }
    vector<int> lists;
    while (n != 1) {
        lists.pb(n);
        n = connection[n];
        ++ans;
    }
    cout << ans << el
    cout << "1 ";
    for (int i = lists.size() - 1; i >= 0; --i) {
        cout << lists[i] << " ";
    }
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

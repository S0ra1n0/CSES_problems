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
#define mp make_pair
#define popf pop_front
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
    int n, k;
    cin >> n >> k;
    vector<int> build;
    vector<vector<int>> linked(n + 1);
    vector<bool> visited(n + 1, 0);
    wh(k) {
        int a, b;
        cin >> a >> b;
        linked[a].pb(b);
        linked[b].pb(a);
    }
    queue<int> q;
    fre(i, 1, n) {
        if (!visited[i]) {
            build.pb(i);
            q.push(i);
            visited[i] = 1;
            while (!q.empty()) {
                int cur = q.front();
                q.pop();
                for (auto j : linked[cur]) {
                    if (!visited[j]) {
                        visited[j] = 1;
                        q.push(j);
                    }
                }
            }
        }
    }
    cout << build.size() - 1 << el
    frs(i, 1, build.size()) {
        cout << build[0] << " " << build[i] << el
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

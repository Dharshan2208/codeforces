#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;
    
    int n, m;
    cin >> n >> m;

    const int INF = 1e9 + 5;
    vector<vector<int>> dis(n+1, vector<int>(n+1, INF));

    for(int i = 1; i <= n; i++) {
        dis[i][i] = 0;
    }

    for(int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
            dis[u][v] = min(dis[u][v], w);
            dis[v][u] = min(dis[v][u], w);
    }

    for(int i = 1; i <= n; i++) {
        for(int k = 1; k <= n; k++) {
            for(int j = 1; j <= n; j++) {
                if(dis[i][k] < INF && dis[k][j] < INF) {
                    dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
                }
            }
        }
    }

    for(int i = 2; i <= n; i++) {
        if(dis[1][i] >= INF)
            cout << -1 << "\n";
        else
            cout << dis[1][i] << "\n";
    }

    return 0;
}
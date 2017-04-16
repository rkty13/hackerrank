// Problem statement: https://www.hackerrank.com/challenges/bfsshortreach

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Visit {
    Visit(int node, int distance) : node(node), distance(distance) {}
    int node;
    int distance;
};

int main() {
    int q; cin >> q;
    for (int i = 0; i < q; ++i) {
        int n, m, s; cin >> n >> m;
        vector< vector<int> > adj;
        vector<int> dist(n, n);
        for (int j = 0; j < n; ++j) {
            vector<int> tmp(n, 0);
            adj.push_back(tmp);
        }
        int u, v;
        for (int j = 0; j < m; ++j) {
            cin >> u >> v;
            adj[u - 1][v - 1] = 1;
            adj[v - 1][u - 1] = 1;
        }

        cin >> s;

        queue<Visit*> toVisit;
        toVisit.push(new Visit(s - 1, 0));
        while (!toVisit.empty()) {
            Visit* cur = toVisit.front(); toVisit.pop();
            if (dist[cur->node] == n) {
                for (size_t pos = 0; pos < adj[cur->node].size(); ++pos) {
                    if (adj[cur->node][pos] == 1) {
                        toVisit.push(new Visit(pos, cur->distance + 1));
                    }
                }
            }
            if (cur->distance < dist[cur->node]) {
                dist[cur->node] = cur->distance;
            }
        }
        for (size_t j = 0; j < dist.size(); ++j) {
            if (j + 1 == s) continue;
            else if (dist[j] != n) cout << dist[j] * 6 << " ";
            else cout << -1 << " ";
        }
        cout << endl;   
    } 
    return 0;
}

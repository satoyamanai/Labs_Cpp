#include <iostream>
#include <queue>
#include <vector>
#include <climits>
using namespace std;

// 定义图的顶点数
#define V 5

// BFS 寻找增广路径，并记录路径
bool bfs(const vector<vector<int>>& G_f, int s, int t, vector<int>& parent) {
    vector<bool> visited(V, false);
    queue<int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v = 0; v < V; v++) {
            if (!visited[v] && G_f[u][v] > 0) {
                parent[v] = u;
                if (v == t) return true; // 找到汇点
                visited[v] = true;
                q.push(v);
            }
        }
    }
    return false; // 未找到路径
}

// Edmonds-Karp 算法主函数
int edmondsKarp(const vector<vector<int>>& G, int s, int t) {
    vector<vector<int>> G_f = G; // 剩余图
    vector<int> parent(V);  // 存储BFS路径
    int max_flow = 0;
    
    while (bfs(G_f, s, t, parent)) {
        // 计算路径上的最小剩余容量
        int path_flow = INT_MAX;
        for (int v = t; v != s; v = parent[v]) {
            int u = parent[v];
            path_flow = min(path_flow, G_f[u][v]);
        }
        // 更新剩余图和流量
        for (int v = t; v != s; v = parent[v]) {
            int u = parent[v];
            G_f[u][v] -= path_flow; // 减少正向边容量
            G_f[v][u] += path_flow; // 增加反向边容量
        }
        max_flow += path_flow;
        // 可视化当前流量情况
        cout << "Current flow after augmenting path: " << path_flow << endl;
        cout << "Updated residual graph:" << endl;
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                cout << G_f[i][j] << " ";
            }
            cout << endl;
        }
        cout << "Total max flow so far: " << max_flow << endl << endl;
    }
    return max_flow;
}
int main() {
    // 示例图（邻接矩阵）
    vector<vector<int>> G = {
        {0, 16, 13, 0, 0},
        {0, 0, 10, 12, 0},
        {0, 4, 0, 14, 0},
        {0, 0, 9, 0, 20},
        {0, 0, 0, 0, 0}
    };
    int s = 0; // 源点
    int t = 4; // 汇点
    cout << "Max Flow: " << edmondsKarp(G, s, t) << endl;
    return 0;
}
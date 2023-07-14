#include <bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>> &adj, vector<int> a,int x, int &c) {
    

    for (auto i = adj[x].begin(); i != adj[x].end(); i++) {
        dfs(adj, a, *i, c);
        cout << "***********" << c << " " << x << endl;
        cout << "----" << c << " " << x << endl; 
    }

    cout << c << " " << x << endl; 
}

int main() {
    int n, m; cin >> n >> m; 
    vector<int> a(n + 1, -1); 
    vector<vector<int>> adj(n + 1, vector<int>());     

    for (int i = 1; i < n + 1; i++) cin >> a[i]; 

    for (int i = 0; i < n - 1; i++) {
        int x, y; cin >> x >> y; 
        adj[x].push_back(y); 
    }

    int c, res; res = 0; c = 0;   
        dfs(adj, used, a, 1, c); 

}

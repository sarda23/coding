#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> score;
vector<vector<int>> adj;
int maxN = 1e4;

void solve() {
	int p, n;
	cin >> p >> n;

	adj.clear();
	adj.resize(maxN + 1);
	score.resize(maxN + 1, {0, -1});

	vector<int> a(2 * n + 1);
	for (int i = 1; i <= 2 * n; ++i)
		cin >> a[i];

	for (int i = 1; i <= n; ++i) {
		adj[a[i]].push_back(a[i + n]);
		adj[a[i + n]].push_back(a[i]);
		score[a[i]].first++;
		score[a[i]].second = a[i];
		score[a[i + n]].first++;
		score[a[i + n]].second = a[i + n];
	}

	sort(score.begin(), score.end(), greater<pair<int, int>>());

	vector<bool> visited(maxN + 1, false);

	int ans = 0;
	for (pair<int, int> scr : score) {
		int u = scr.second;
		if (u == -1)
			continue;
		if (!visited[u]) {
			ans++;
			visited[u] = true;
			for (int v : adj[u]) {
				if (!visited[v] && adj[v].size() < scr.first)
					visited[v] = true;
			}
		}
	}
	cout << ans << "\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	int T = 1;
	// cin >> T;
	while (T--) {
		solve();
	}
	return 0;
} 
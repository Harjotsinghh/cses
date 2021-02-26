#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define mk make_pair
#define vll vector<long long >
#define loop(i,a,b) for(int i=a;i<=b;i++)
#define loopr(i,a,b) for(int i=b;i>=a;i--)
#define vii vector<vector<int>>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define fi first
#define se second
#define io #ifndef ONLINE_JUDGE freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);#endif

//backtracking with optimizations

bool grid[7][7];
string s;
pair<int, int> xx[4] = {{ -1, 0}, {1, 0}, {0, 1}, {0, -1}};
unordered_map<char, int>ind;
int steps;

int dfs(int i , int j, int si) {

	if (i == 6 && j == 0)
	{
		if (si == 48)
			return 1;
		else
			return 0;
	}
	if (grid[i][j]) return 0;

	//optimizations
	if (j > 0 && j < 6 && !grid[i][j - 1] && !grid[i][j + 1] && i == 0 && grid[i + 1][j])
		return 0;
	if (j > 0 && j < 6 && !grid[i][j - 1] && !grid[i][j + 1] && i == 6 && grid[i - 1][j])
		return 0;
	if (i > 0 && i < 6 && !grid[i - 1][j] && !grid[i + 1][j ] && j == 0 && grid[i][j + 1])
		return 0;
	if (i > 0 && i < 6 && !grid[i - 1][j] && !grid[i + 1][j ] && j == 6 && grid[i][j - 1])
		return 0;
	if (i > 0 && i < 6 && j > 0 && j < 6 && grid[i][j - 1] && !grid[i - 1][j] && !grid[i + 1][j] && grid[i][j + 1])
		return 0;
	if (i > 0 && i < 6 && j > 0 && j < 6 && grid[i - 1][j] && grid[i + 1][j] && !grid[i][j - 1] && !grid[i][j + 1])
		return 0;




	int ans = 0;
	grid[i][j] = true;
	if (s[si] == '?') {
		for (auto it : xx) {
			int x = i + it.first, y = j + it.second;
			if (x < 0 || y < 0 || x >= 7 || y >= 7 || grid[x][y])
				continue;
			steps++;
			ans += dfs(x, y, si + 1);
			steps--;

		}

	}
	else {
		int x = i + xx[ind[s[si]]].first , y = j + xx[ind[s[si]]].second;
		if (x < 0 || y < 0 || x >= 7 || y >= 7 || grid[x][y])
			;
		else
		{
			steps++;
			ans += dfs(x, y, si + 1);
			steps--;
		}

	}
	grid[i][j] = false;


	return ans;
}
int main()
{
	fastio
	ind['?'] = -1;
	ind['U'] = 0;
	ind['D'] = 1;
	ind['L'] = 3;
	ind['R'] = 2;
	cin >> s;
	steps = 0;
	memset(grid , false, sizeof(grid));
	cout << dfs(0, 0, 0)  << '\n';

	return 0;
}




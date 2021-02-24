#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define mk make_pair
#define vll vector<long long >
#define loop(i,a,b) for(int i=a;i<=b;i++)
#define loopr(i,a,b) for(int i=b;i>=a;i--)
#define vii vector<vector<int>>
#define ll long long
void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main()
{
	io();
	int t = 0;
	cin >> t;
	while (t--) {
		ll n, m;
		cin >> n >> m;
		ll ma = max(n, m);
		ll sum = ( (ma - 1) * (2 + (ma - 2) * 2)) / 2;
		if (n > m) {
			if (n & 1)
				cout << sum + m  << endl;
			else
				cout << sum + 2 * n - m << endl;
		}
		else
		{
			if (m & 1)
				cout << sum + 2 * m - n << endl;
			else
				cout << sum + n << endl;
		}

	}

	return 0;
}

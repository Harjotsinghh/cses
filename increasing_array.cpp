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
	int n;
	cin >> n;
	ll arr[n];
	ll ans = 0;
	loop(i, 1, n )
	{
		cin >> arr[i - 1];
		if (i == 1)
			continue;

		if (arr[i - 1] < arr[i - 2])
			ans += arr[i - 2] - arr[i - 1], arr[i - 1] = arr[i - 2];
	}
	cout << ans << endl;

	return 0;
}

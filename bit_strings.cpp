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

const int mod = 1e9 + 7;

ll _power(ll a, ll b) {
	ll ans = 1;
	if (a == 0)
		return 0;
	if (b == 0)
		return 1;

	if (b & 1)
	{
		ans = (_power(a , b - 1) % mod + mod ) % mod ;
		ans = (ans % mod  * a % mod  ) % mod;

	}
	else {
		ans = _power(a, b / 2) % mod;
		ans = (ans % mod * ans % mod  ) % mod;
	}

	return (ans + mod) % mod ;
}
int main()
{
	io();
	ll n;
	cin >> n;
	cout << _power(2, n) << endl;

	return 0;
}

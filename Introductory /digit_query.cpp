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
ll find(ll mid) {
	ll n = 0, m = mid;
	while (m)
	{
		m /= 10;
		n += 1;
	}
	ll ccc = n;
	if (n == 1)
		return mid;

	ll final = powl(10ll, n);
	n -= 1;
	ll count = 0;
	while (n > 0) {
		count += (9ll * powl(10, n - 1)) * n;
		n--;
	}
	return count;
}
int main()
{
	int t = 0;
	cin >> t;
	while (t--) {
		ll k;
		cin >> k;
		ll cc = 0; ll count = 1;
		ll l = 1, h = 1e10;
		ll ans;
		while (l < h) {
			ll mid =  l + ((h - l) / 2);
			ll count = find(mid);
			// cout << count << endl;
			// ans = mid;
			if (k < count)
				h = mid - 1;
			else
				l = mid + 1;
		}

		cout << l << endl;



	}

	return 0;
}




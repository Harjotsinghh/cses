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
ll sum(int n) {
	ll s =  (ll) n * n;
	s -= 1;
	return (ll)(s * (s + 1)) / 2;
}
int main()
{
	io();
	int n;
	cin >> n;
	int cc = 6;
	loop(i, 1, n) {
		ll s = sum(i);
		if (i == 3)
			s -= 8;
		else if (i == 4)
			s -= 24, cc = 12;
		else if (i > 4)
			s -= (i - 1) * cc, cc += 4;
		cout << s << endl;

	}

	return 0;
}




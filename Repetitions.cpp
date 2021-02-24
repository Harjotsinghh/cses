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
	string s; cin >> s;
	int cc = 0, ans = 0;
	loop(i, 0, s.length() - 1)
	if (cc == 0)
		cc += 1;
	else if (s[i] == s[i - 1])
		cc++;
	else
		ans = max(cc, ans), cc = 1;

	cout << max(cc, ans) << endl;

	return 0;
}


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

	int sum = (n * (n + 1)) / 2;
	if (sum & 1)
		cout << "NO" << endl;
	else {


		vector<int> a, b;
		if (n & 1)
			b.pb(n), n--;

		int l = 1, h = n;
		while (l < h) {
			if (h % 2 == 0)
				a.pb(h), a.pb(l), l++, h--;
			else
				b.pb(h), b.pb(l), l++, h--;
		}

		cout << "YES" << endl << a.size() << endl;
		for (auto it : a)
			cout << it << " ";
		cout << endl;
		cout << b.size() << endl;
		for (auto it : b)
			cout << it << " ";

		cout << endl;


	}

	return 0;
}
















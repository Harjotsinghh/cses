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

	if (n == 1)
		cout << 1 << endl;
	else {
		if (n < 4)
			cout << "NO SOLUTION" << endl;
		else {
			int i = 2;
			while (i <= n)
				cout << i << " ", i += 2;
			i = 1;
			while (i <= n)
				cout << i << " ", i += 2;
			cout << endl;

		}

	}

	return 0;
}

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
vector<pair<int, int>>moves;
void find(int n, int source, int target, int auxilary) {
	if (n <= 0)
		return;
	find(n - 1, source, auxilary, target);
	moves.pb({source, target});
	find(n - 1, auxilary, target, source);
}
int main()
{
	int n;
	cin >> n;
	moves.clear();

	find(n, 1, 3, 2);
	cout << (ll)moves.size() << endl;
	for (auto it : moves)
		cout << it.first << " " << it.second << endl;


	return 0;
}


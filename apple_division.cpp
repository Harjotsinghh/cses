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

int diff;
void find(ll *arr, int i, int n, ll sum, ll csum)
{
	if (i == n) {
		ll sec = abs(sum - csum);

		if (abs(sec - csum) < diff) {

			diff = abs(sec - csum);
		}
		return;
	}

	find(arr, i + 1, n, sum, csum + arr[i]);
	find(arr, i + 1, n, sum, csum);
}

int main()
{
	int n;
	cin >> n;

	ll arr[n];
	ll sum = 0;
	loop(i, 1, n)
	cin >> arr[i - 1], sum += arr[i - 1];
	diff = INT_MAX;
	find(arr, 0, n, sum, 0);
	cout << diff << endl;


	return 0;
}

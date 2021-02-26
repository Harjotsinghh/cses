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
#define io #ifndef ONLINE_JUDGE freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout); #endif

char arr[8][8];
int count;
bool canplace(int i , int j) {
	if (arr[i][j] == '*' || arr[i][j] == '#')
		return false;
	for (int k = 0; k < 8; k++)
		if (arr[i][k] == '#')
			return false;


	for (int k = 0; k < 8; k++)
		if (arr[k][j] == '#')
			return false;
	int k = i, l = j;
	while (k >= 0 && l >= 0)
		if (arr[k][l] == '#')
			return false;
		else
			k--, l--;

	k = i, l = j;
	while (k < 8 && l < 8)
		if (arr[k][l] == '#')
			return false;
		else
			k++, l++;

	k = i, l = j;
	while (l < 8 && k >= 0)
		if (arr[k][l] == '#')
			return false;
		else
			l++, k--;

	k = i, l = j;
	while (k < 8 && l >= 0)
		if (arr[k][l] == '#')
			return false;
		else
			k++, l--;

	return true;


}
void print() {
	loop(i, 0, 7)
	{
		loop(j, 0, 7)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;

	}
	cout << endl;

}


int  find(int i, int j, int tot) {

	if (tot == 0)
	{
		//uncomment to print all possible boards
		//print();
		return 1;
	}
	if (i >= 8 )
		return 0;
	if (j >= 8)
	{
		return find(i + 1, 0, tot);
	}

	int count = 0;
	if (canplace(i, j))
	{
		arr[i][j] = '#';
		count += find(i , j + 1, tot - 1);
		arr[i][j] = '.';
	}
	count += find(i, j + 1, tot);
	return count;

}
int main()
{

	loop(i, 0, 7)
	loop(j, 0, 7)
	cin >> arr[i][j];

	cout << find(0, 0, 8)  << endl;


	return 0;
}



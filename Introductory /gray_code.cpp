
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

int main() {

	int n;
	cin >> n;
	vector<string> arr;
	arr.pb("0");
	arr.pb("1");
	loop(i, 1, n - 1 ) {

		vector<string> temp;
		loop(i, 0, arr.size() - 1)
		temp.pb('0' + arr[i]);
		loopr(i, 0, arr.size() - 1)
		temp.pb('1' + arr[i]);
		arr = temp;


	}



	for (auto it : arr)
		cout << it << endl;



	return 0;

}






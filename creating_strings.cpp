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
set<string> st;


void find(string s , int i , string temp) {
	if (i == s.length())
	{
		st.insert(temp);
		return ;
	}
	for (int j = i ; j < s.length(); j++) {
		swap(s[i], s[j]);
		find(s, i + 1, temp + s[i]);
		swap(s[i], s[j]);

	}
	return;
}
int main()
{
	string s;
	cin >> s;

	st.clear();

	find(s, 0, "");
	cout << st.size() << endl;
	for (auto it : st)
		cout << it << endl;
	return 0;
}

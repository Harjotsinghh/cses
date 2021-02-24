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
	string s;
	cin >> s;
	int freq[256];
	memset(freq, 0, sizeof(freq));

	for (auto it : s) {
		freq[(int)it]++;
	}
	int o = 0, e = 0;
	loop(i, 0, 255)
	if (freq[i] > 0)
	{

		if (freq[i] % 2 == 0)
			e++;
		else
			o++;
	}

	if (o > 1)
		cout << "NO SOLUTION" << endl;
	else
	{
		string a = "", b = "", c = "";
		loop(i, 0, 255) {
			if (freq[i]) {

				char ch = (char)i;

				if (freq[i] % 2 == 0) {
					a.append(freq[i] / 2, ch);
					c.append( freq[i] / 2, ch);
				}
				else
					b.append(  freq[i], ch);

			}
		}
		reverse(c.begin(), c.end());
		cout << a << b << c << endl;
	}


	return 0;
}

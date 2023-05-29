#include<bits/stdc++.h>
/* 
ID: your id 
LANG: C++17
PROB: Problem 1. Fence Painting
*/
//Muku28
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void printl(ll x){cout<<x<<"\n";}
void prints(string x){cout<<x<<"\n";}
void show(int a[], int arraysize){for (int i = 0; i < arraysize; ++i){
cout << a[i] << ",";}}void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<int> vi;typedef vector<string> vs;typedef pair<int, int> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(v) v.begin(),v.end()
#define nl cout<<"\n";
void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

//Muku28
int main()
{
	int n = 10;
	int aa[] = {2, 3, 1, 2, 5, 6 , 6, 7, 2, 8};
	map<int, vector<int>> store, pre;
	for (int ii = 0; ii < n; ++ii)
	{
		store[aa[ii]].push_back(ii);
		pre[aa[ii]].push_back(1);

		int sz =pre[aa[ii]].size();
		if (sz != 1)
			pre[aa[ii]][sz - 1] += pre[aa[ii]][sz - 2];
	}
	for (auto ii : store)
	{
		cout << ii.first << " = ";
		for (int jj = 0; jj < ii.second.size(); ++jj)
		{
			cout << ii.second[jj] << " ";
		}
		cout << "\n";
	}

	if (store.find(10) != store.end())
		cout << "YES\n";
	int left = lower_bound(store[10].begin(),
	store[10].end(), 5) - store[10].begin();

	int right = upper_bound(store[10].begin(),
	store[10].end(), 5) - store[10].begin();

	cout << right - left << "\n";
}
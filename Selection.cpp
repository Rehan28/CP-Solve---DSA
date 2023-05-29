#include<bits/stdc++.h>
//Muku28
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void printl(ll x){cout<<x<<"\n";}
void show(int a[], int arraysize){for (int i = 0; i < arraysize; ++i){
cout << a[i] << ",";}}void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<int> vi;typedef vector<string> vs;typedef pair<int, int> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define nl cout<<"\n";
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selection(int a[], int n)
{
	int i, j, min_idx;
	for (i = 0; i < n-1; i++)
	{
	
	
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (a[j] < a[min_idx])
			min_idx = j;

		if(min_idx!=i)
			swap(&a[min_idx], &a[i]);
	}
	for (int i=0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

int main()
{
	//Rehan
    // Id:: 1902061
    int n;
    cin>>n;
	int a[n];
    cin(a,n);
	selection(a, n);
	return 0;
}


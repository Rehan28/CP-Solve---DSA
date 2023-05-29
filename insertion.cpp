#include<bits/stdc++.h>
//Muku28
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void printl(ll x){cout<<x<<"\n";}
void show(int a[], int arraysize){for (int i = 0; i < arraysize; ++i){
cout << a[i] << ",";}}void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<int> vi;typedef vector<string> vs;typedef pair<int, int> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=1;i<=n;i++){cin>>a[i];}
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define nl cout<<"\n";

void insertion(int a[],int n)
{
	int temp;
	int ptr;
	a[0] = -10000000;
	for(int i=2;i<n;i++)
	{
		 temp = a[i];
	     ptr = i-1;
		 while(temp<a[ptr])
		 {
			a[ptr+1] = a[ptr];
			ptr--;
		 }
		 a[ptr+1]=temp;
	}

	for (int i = 1; i <=n; i++)
		cout << a[i] << " ";
	nl;
}
int main()
{
    //Rehan
    // Id:: 1902061
    int n;
    cin>>n;
	int a[n];
   for(int i=1;i<=n;i++)
   {
	cin>>a[i];
   }
	insertion(a, n);
	return 0;
}

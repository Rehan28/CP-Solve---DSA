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

void radix(int a[],int n,int hi)
{
   int total[1000][10] = {0};
   int arr[100000];
   int m = 10;
	for(int j=0;j<hi;j++)
	{
		for(int i=0;i<n;i++)
        {
			int x = a[i]%m;
			total[i][x] = a[i];
	    }
		int y = 0;

		for(int i=0;i<10;i++)
        {
	     for(int k=0;k<1000;k++)
	    {
		 if(total[k][i]!=0)
		 {
			a[y] = total[k][i];
			cout<<5<<"\n";
			y++;
		  }
	     }
   		}

		
		for(int i=0;i<1000;i++)
        {
	   for(int k=0;k<10;k++)
	    {
		 total[i][k] = 0;
	    }
   		}
		m =m*10;
   }

   for(int i=0;i<n;i++)
   {
	cout<<a[i]<<" ";
   }
}
int main()
{
	 //Rehan
    // Id:: 1902061
    int n;
    cin>>n;
	int a[n];
    cin(a,n);
	radix(a, n,2);
	return 0;
}
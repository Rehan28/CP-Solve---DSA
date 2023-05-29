#include<bits/stdc++.h>
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
//Muku28
int main()
{
    //Muku28();
    int n;
    cin>>n;
    int a[n];

    cin(a,n);
    cout<<"Input a Number :: \n";
    int number;
    cin>>number;
    int mid;
    int beg = 0;
    int end = n-1;

    int result = -1;
    while((end-beg)>1)
    {
        mid =beg+(end-beg)/2;
        if(a[mid]<number)
        {
            beg = mid+1;
            
        }
        else if(a[mid]>number)
        {
            end = mid-1;
        }
        
    }
    if((a[end]==number) || (a[beg]==number))cout << "Ok";
    else 
    cout << "Nai";
    return 0;
   if(result==-1)
   {
    cout<<"Number is not present !!";
   }
   else
   {
    cout<<"Number is present at "<<result+1<<"Index\n";
   }
  return 0;
 }
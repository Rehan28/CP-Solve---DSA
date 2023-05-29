#include<bits/stdc++.h>
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void printl(ll x){cout<<x<<"\n";}
void prints(string x){cout<<x<<"\n";}
void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<ll> vi;typedef vector<string> vs;typedef pair<ll, ll> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) x.begin(), x.end()
#define f first
#define s second
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
//Muku28
int N = 100;
int q[100];
int front=0;
int rear=0;
void intsert(int n)
{
    if((front==1 and rear==N) or front==rear+1)
    {
        cout<<"overflow";
        nl;
    }
    else
    {
        if(front==0)
        {
            front=1;
            rear = 1;
        }
        else if(rear==N)
        {
            rear = 1;
        }
        else
        {
            rear++;
        }
        q[rear] = n;
    }
}

void Delete()
{
    if(front==0)
    {
        cout<<"Underflow";
        nl;
    }
    else
    {
        if(front==rear)
        {
            front = 0;
            rear = 0;
        }
        else if(front==N)
        {
            front = 1;
        }
        else
        {
            front++;
        }
       
    }
}
int main()
{
    Muku28();
    Delete();
  return 0;
 }
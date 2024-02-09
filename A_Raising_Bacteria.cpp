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
ll mod = 1e9 + 7;
bool comp(string a, string b) {
if (a.size() != b.size()) return a.size() < b.size();
return a < b;
}
int getBit(int n,int i)
{
    // i th position 0/1 dakhty use hoy
    return (n & (1 << i));
}
int setBit(int n,int i)
{
    // i th position a 1 set korar jonno use hoy
    return (n | (1 << i));
}
int clearBit(int n,int i)
{
    // i th position a 0 korar jonno
    // 101 ar 0 th position a clear bit korly result hobe 4 
    return (n & ~(1 << i));
}
int updateBit(int n,int i,int value)
{
    // i th posithon a 1 ba 0 value bosabo
    // tar jonno agy position ta clear kore set korbo value dia
     n = clearBit(n, i);
     return (n | (value << i));
}
bool isPowerOfTwo(unsigned int n)
{
     // a numer n and n-1 take because of
     // a number 4 100 first we take rigt most one then flip all bit then it become
     // 011 now we make & operation then it become 0 ;
     return n and (n & (n - 1));
     // return 0 hole power of two
}
int numberOfOne(int n)
{
    //protibar akta 1 kore kattycy then power of 2 ty asar por break hoia jaitycy
    // n/2 diao kora jay
    //-->"Brian Kernighan's algorithm" bola hoy
     int c = 0;
     while (n)
     {
         n = n & n - 1;
         c++;
    }
    return c;
}
int subSet(int a[], int n)
{
    for (int i = 0; i < (1 << n);i++)
    {
        // i = 1 dia suru korlye hoy karon 0 ar sathy and many 0
         for (int j = 0; j < n;j++)
         {
            if(i & (1<<j))
            {
                cout << a[j];
            }
           
         } nl;
    }
    //cout << (1 << n); 
    // ata bujay 2 power n; many n bar left shift n = 3 hole 1000;
}
int unique(int a[],int n)
{
    // all number are double but one number is single Then it works;
    // next one ager one ta cancel out kore any
    int xorsum = 0;
    for (int i = 0; i < n;i++)
    {
         xorsum ^= a[i];
    }
    return xorsum;
}
//Muku28
void Rehan()
{
    ll n = -100000;
    cout << n * (n + 1) * 2;
    nl;
    // cout<<numberOfOne(n)<<"\n";
}
// Muku love chocolate.So, he want to buy 3 chocolate with maximum happiness.
// The store has n chocolate and each chocolate has a value a[i].

// The happiness value is the product of chocolate.

// Find maximum happiness value muku can find in the store.
// Input:
// First line contains a single integer n (3<= n <= 2 * 10^4)  the number of chocolate in the store.
// Second line of each test case contains n integers a1,a2,a3…(-10^4≤a[i]≤10^4) ai is the value of ith chocolate.
// Output :
// Print the maximum happiness value.
// Example :
// Input :
// 4
// 1 2 3 4
// Output :
// 24
//--------------28--------------//
int main()
{
    Muku28();
    int t = 1;
    //cin>>t;
    while(t--)
    {
        Rehan();
    }
		return 0;
 }
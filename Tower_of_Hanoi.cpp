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
    Muku28();
     int t;
    cin>>t;
    stack<int> s1,s2,s3;
    for(int i=t;i>0;i--)
    {
        s1.push(i);
    }
    int n = 10;
    cout<<pow(2,t)-1<<"\n";
    if(t%2==0)
    {
          while(1)
    {
        int x = s1.size();
        int y = s2.size();
        int z = s3.size();
        int top1 = 0;
        int top2 = 0;
        int top3 = 0;
        if(z==t)
        {
            break;
        }
        if(x!=0)
        {
            top1 = s1.top();
        }
        if(y!=0)
        {
            top2 = s2.top();
        }
        if(z!=0)
        {
            top3 = s3.top();
        }
        //cout<<z<<"\n";
        if((y==0 or top1<top2) and x!=0)
        {
            s2.push(top1);
            s1.pop();
            cout<<1<<" "<<2<<"\n";
            //continue;
        }
        else if((x==0 or top2<top1) and y!=0)
        {
            s1.push(top2);
            s2.pop();
            cout<<2<<" "<<1<<"\n";
            //continue;
        }

         x = s1.size();
         y = s2.size();
         z = s3.size();
         top1 = 0;
         top2 = 0;
         top3 = 0;
        if(z==t)
        {
            break;
        }
        if(x!=0)
        {
            top1 = s1.top();
        }
        if(y!=0)
        {
            top2 = s2.top();
        }
        if(z!=0)
        {
            top3 = s3.top();
        }
        //cout<<z<<"\n";

        if((z==0 or top1<top3) and x!=0)
        {
            s3.push(top1);
            s1.pop();
            cout<<1<<" "<<3<<"\n";
            //continue;
        }
        else if((x==0 or top3<top1) and z!=0)
        {
            s1.push(top3);
            s3.pop();
            cout<<3<<" "<<1<<"\n";
            //continue;
        }

         x = s1.size();
         y = s2.size();
         z = s3.size();
         top1 = 0;
         top2 = 0;
         top3 = 0;
        if(z==t)
        {
            break;
        }
        if(x!=0)
        {
            top1 = s1.top();
        }
        if(y!=0)
        {
            top2 = s2.top();
        }
        if(z!=0)
        {
            top3 = s3.top();
        }
 
        
        if((y==0 or top3<top2) and z!=0)
        {
            s2.push(top3);
            s3.pop();
            cout<<3<<" "<<2<<"\n";
            //continue;
        }
        else if((z==0 or top2<top3) and y!=0)
        {
            s3.push(top2);
            s2.pop();
            cout<<2<<" "<<3<<"\n";
            //continue;
        }
        //cout<<z<<"\n";
        
    }
    }
    else
    {
        // odd
          while(1)
    {
        int x = s1.size();
        int y = s2.size();
        int z = s3.size();
        int top1 = 0;
        int top2 = 0;
        int top3 = 0;
        if(z==t)
        {
            break;
        }
        if(x!=0)
        {
            top1 = s1.top();
        }
        if(y!=0)
        {
            top2 = s2.top();
        }
        if(z!=0)
        {
            top3 = s3.top();
        }
        //cout<<z<<"\n";
        if((z==0 or top1<top3) and x!=0)
        {
            s3.push(top1);
            s1.pop();
            cout<<1<<" "<<3<<"\n";
            //continue;
        }
        else if((x==0 or top3<top1) and z!=0)
        {
            s1.push(top3);
            s3.pop();
            cout<<3<<" "<<1<<"\n";
            //continue;
        }

         x = s1.size();
         y = s2.size();
         z = s3.size();
         top1 = 0;
         top2 = 0;
         top3 = 0;
        if(z==t)
        {
            break;
        }
        if(x!=0)
        {
            top1 = s1.top();
        }
        if(y!=0)
        {
            top2 = s2.top();
        }
        if(z!=0)
        {
            top3 = s3.top();
        }
        //cout<<z<<"\n";

        
        if((y==0 or top1<top2) and x!=0)
        {
            s2.push(top1);
            s1.pop();
            cout<<1<<" "<<2<<"\n";
            //continue;
        }
        else if((x==0 or top2<top1) and y!=0)
        {
            s1.push(top2);
            s2.pop();
            cout<<2<<" "<<1<<"\n";
            //continue;
        }

         x = s1.size();
         y = s2.size();
         z = s3.size();
         top1 = 0;
         top2 = 0;
         top3 = 0;
        if(z==t)
        {
            break;
        }
        if(x!=0)
        {
            top1 = s1.top();
        }
        if(y!=0)
        {
            top2 = s2.top();
        }
        if(z!=0)
        {
            top3 = s3.top();
        }
 
        
        if((y==0 or top3<top2) and z!=0)
        {
            s2.push(top3);
            s3.pop();
            cout<<3<<" "<<2<<"\n";
            //continue;
        }
        else if((z==0 or top2<top3) and y!=0)
        {
            s3.push(top2);
            s2.pop();
            cout<<2<<" "<<3<<"\n";
            //continue;
        }
        //cout<<z<<"\n";
        
    }
    }
   
   
  return 0;
 }
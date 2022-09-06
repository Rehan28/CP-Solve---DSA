#include<bits/stdc++.h>

using namespace std;using LL = long long;typedef long long ll;//muku28
void muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void prints(string x){cout<<x<<"\n";}
void show(int a[], int arraysize){for (int i = 0; i < arraysize; ++i){
cout << a[i] << ",";}}void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<int> vi;typedef vector<string> vs;typedef pair<int, int> pii;
#define rep(i, a, b) for(int i = a; i < (b); ++i)
void printv(vector<int> &v)
{
  cout<<"vector size : "<<v.size()<<endl;
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
//muku28
int main()
{
    muku28();
     int t;
    cin>>t;
   while(t--)
    {
        int n,h,m;
        cin>>n>>h>>m;
       

        vector< pair<int,int> > p;

        //int h2[n];
        for(int i=0;i<n;i++)
        {
           int h1,m1;
           cin>>h1>>m1;
           p.push_back(make_pair(h1,m1));
        } 
        sort(p.begin(),p.end());
        int c = 0;//goto exit;
        //dbg(p[0].first);
        for(int i=0;i<n;i++)
        {
            if(p[i].first>h || (p[i].first==h && p[i].second>=m) )
            {
                //cout<<(p[i].first-h)<<" "<<(p[i].second-m)<<"\n";
                /*if(p[i].first==0)
                {
                    p[i].first =24;
                }*/
                int x = (p[i].first-h);
                int y = 0;
                if(p[i].second<m)
                {
                   x--;
                   y = 60-m + p[0].second;
                }
                else{
                   y = (p[i].second-m);
                }
                cout<<x<<" "<<y<<"\n";
                c++;
                break;
            }
        }
        if(c==0)
        {
            int x =24 - h + p[0].first;
            int y =0;
            if(m>p[0].second)
            {
                x--;
                y = 60 - m +p[0].second;
            }
            else{
                y = (p[0].second-m);
            }
            cout<<x<<" "<<y<<"\n";
        }
        
        exit: ;
    }
  return 0;
 }
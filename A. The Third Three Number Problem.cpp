
#include<bits/stdc++.h>

using namespace std;using LL = long long;//muku28
void muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void prints(string x){cout<<x<<"\n";}
int main()
{
    muku28();
    int t;
    cin>>t;
   while(t--)
    {


        long long int n;
        cin>>n;
        int x = n/2;
        if(n%2==0){
        if((n/2)%2==0)
        {
            x = x+1;

             cout<<x<<" "<<x<<" "<<1<<"\n";
        }
        else
        {  // printi((x^1)+(x^1)+(x^1));
            cout<<(x-1)<<" "<<(x-1)<<" "<<1<<"\n";
        }}
        else
        {
            //int r = -1;
            prints("-1");
        }
        //

    }
  return 0;
 }

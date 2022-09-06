
#include<bits/stdc++.h>

//muku28
using namespace std;using LL = long long;
void muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void prints(string x){cout<<x<<"\n";}
//muku28
int main()
{
    muku28();
    int t;
    cin>>t;
   while(t--)
    {
        string s;
        cin>>s;
        int x = s[0]-96;//
        int y = s[1]-96;
        //printi(y);
        int a = ((x-1)*25)+y;//start from b
        if(x<y and x==0)
        {
            printi(a-x+(x-1));
            //karon 1st cycle a 25 but we count 26
        }
        else
        {
            printi(a);
        }


    }
  return 0;
 }

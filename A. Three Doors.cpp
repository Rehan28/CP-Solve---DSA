#include<bits/stdc++.h>

using namespace std;using LL = long long;//muku28
void muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void prints(string x){cout<<x<<"\n";}
void show(int a[], int arraysize){for (int i = 0; i < arraysize; ++i){
cout << a[i] << ",";}}
//muku28
int main()
{
    muku28();
    int t;
    cin>>t;
   while(t--)
    {
        int x;
        cin>>x;
        int a[4];
        for(int i=1;i<4;i++)
        {
            cin>>a[i];
        }
        int c = x;
        int count = 0;
        for(int i=0;i<3;i++){
            if(i<2 and a[c]==0)
            {
                break;
            }
            else
            {
                c = a[c];
                count++;
            }
        }
        if(count==3)
        {
            prints("YES");
        }
        else
        {
            prints("NO");
        }

    }
  return 0;
 }
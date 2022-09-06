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
    char s[t];
   
    int c = 0;
    int x = 0;
    int y = 0;
    for(int i=0;i<t;i++){
        cin>>s[i];

        //
         if(s[i]=='R')
        {
            c++;
            
        }
        else if(c%4==0)
        {
            x++;
        }
        else if((c-2)%4==0)
        {
            x--;
        }

        else if((c-1)%4 == 0)
        {
            y--;
        }
        else
        {
            y++;
        }
        }
        cout<<x<<" "<<y<<"\n";
    
  return 0;
 }
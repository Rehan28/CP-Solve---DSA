#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      char a[10][10];
      int count = 0;
      int x[8];
      int y[8];
      for(int i=0;i<8;i++)
      {  x[i] = 0;

          for(int j=0;j<8;j++)
          {
              cin>>a[i][j];
              if(a[i][j]=='#')
              {
                  x[i]++;
                  y[i] = j;
              }
          }

      }
      for(int i=1;i<7;i++)
      {
          if(x[i-1]==2&&x[i+1]==2&&x[i]==1)
          {
              cout<<(i+1)<<" "<<(y[i]+1)<<endl;
          }
      }
      /*int y= 0;
      for(int i=0;i<8;i++)
      {
          if(a[count][i]=='#')
          {
            y = i;
          }
      }*/
      //cout<<count<<" "<<y<<endl;
  }
}


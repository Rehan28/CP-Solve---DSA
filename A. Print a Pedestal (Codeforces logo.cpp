
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum = 0;
        int i,j,k;
        i = (n/2)+1;
          j = i-1;
            k= j-1;
        while(1)
        {

            sum = i+j+k;

            if(sum>n)
            {
                if((sum-n)>2)
                {
                    i--;
                     j = i-1;
            k= j-1;
                }
                else if((sum-n)==2){
                    j--;
                    k= j-1;
                }
                else{
                    k--;
                }
            }
            else
            {
              break;
            }
        }
        cout<<j<<" "<<i<<" "<<k<<endl;

    }


}

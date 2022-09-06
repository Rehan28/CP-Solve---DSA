
#include<bits/stdc++.h>

using namespace std;
//muku28

int GCD(int a,int b)
{

    int result = min(a,b);
    while(result>0)
    {
        if(a%result==0&&b%result==0)
        {
            break;
        }
        result--;
    }
    return result;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x[100000];
        int y[100000];
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<n+1;j++)
            {
                x[j] = GCD(i,j);
            }
            y[i] = *max_element(x+1,x+n+1);
        }
        int result = *max_element(y+1,y+n);
        cout<<result<<endl;
    }

}

#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{
    int n;
    cin>>n;
    int a[n];
    int s = 0;
    int d = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int right = n-1;

    int left = 0;
    for(int i=1;i<n+1;i++)
    {

         if(i%2!=0)
        {
            //int t = (a[left]>a[right])? a[left]:a[right];
            if(a[right]<=a[left])
            {
                s = s+a[left];
                 left++;
            }
            else
            {
                 s = s+a[right];
                right--;
            }

        }
        else{
            //int t = (a[left]>a[right])? a[left]:a[right];
            if(a[right] <= a[left])
            {
                d = d+a[left];
                 left++;
            }
            else
            {
                 d = d+a[right];
                right--;
            }


        }
    }
    cout<<s<<" "<<d<<endl;
}

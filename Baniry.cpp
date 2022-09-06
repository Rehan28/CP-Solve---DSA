#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[22];
    int n,mid,left,right;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"Find : \n";
    cin>>x;

    sort(a,a+n);

    left=0;
    right=n-1;
    mid=(left+right)/2;

    for(;left<=right;){
            mid=(left+right)/2;

        if(x==a[mid]){cout<<"yes\n";break;}

        else if(x>a[mid]){left=mid+1;}

        else if(x<a[mid]){right=mid-1;}

    }




return 0;
}

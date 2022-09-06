#include<bits/stdc++.h>

using namespace std;

int sortRowWise(int m[][],int M,int N)
{
  // One by one sort
  // individual rows.
  for (int i = 0; i < M; i++)
    sort(m[i], m[i] + N);

  // Printing the sorted matrix
  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < N; j++)
      cout << (m[i][j]) << " ";
    cout << endl;
  }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int input[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>input[i][j];
            }
        }
        sortRowWise(input,n,m);

    }
}

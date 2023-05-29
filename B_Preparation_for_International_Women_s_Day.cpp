
#include <bits/stdc++.h>
using namespace std;

//#define V 200
#define INF INT_MAX


int minimumCostSimplePath(int u, int destination,bool visited[], vector<vector<int>> graph)
{

	
	if (u == destination)
		return 0;
	visited[u] = 1;
    int V = graph.size();
	int ans = INF;
    
	for (int i = 0; i < V; i++) {
		if (graph[u][i] != INF && !visited[i]) {

			
			int curr = minimumCostSimplePath(i,
						destination, visited, graph);		
			if (curr < INF) {

				ans = min(ans, graph[u][i] + curr);
			}
		}
	}
	visited[u] = 0;
    if(ans==INF)
    {
        return -1;
    }
	return ans;
}

// driver code
int main()
{

	
   int t;
   cin>>t;
   for(int i=1;i<=t;i++)
   {
     int n,m,s,T;
    cin>>n>>m>>s>>T;
	vector<vector<int>> graph(50000);
   int V = graph.size();
   cout<<V<<"\n";
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			graph[i][j] = INF;
		}
	}

	// marking all nodes as unvisited
	bool visited[V] = { 0 };

	for(int i=0;i<m;i++)
        {
            int x,y,z;
            cin>>x>>y>>z;
           graph[x][y] = z;
           graph[y][x] = z;
        }
      
	
	//int ss = 2, t = 0;
	visited[s] = 1;
    int ans = minimumCostSimplePath(s, T,visited, graph);
    if(ans==-1)
    {
        cout<<"Case #"<<i<<": unreachable\n";
    }
    else
    {
    cout<<"Case #"<<i<<": ";
	cout << ans;
    cout<<"\n";
    }
   

   }
	return 0;
}

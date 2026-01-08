//####   Topological sort
kono akta kajer scheduling korara jonno directed graph a use kora hoy.kon kajta kontar age asbe seta.
int indegree[N];
void toposort(){
    int n = 4;
    for (int i = 1; i <= n;i++){//m porjonto hoy
        int u, v;
        cin >> u >> v;//u theke v te jabe
        g[u].push_back(v);
        indegree[v]++;
    } vector<int> z;
    for (int i = 1; i <= n;i++){
        if(indegree[i]==0){
            z.push_back(i);
            vis[i] = true;
        }
    }vector<int> ans;
    while (ans.size()<n){
        if(z.size()==0){
            cout << "IMPOSSIBLE\n";
            return;
        }
        int u = z.back(); // atar jonno O(V+E);
        z.pop_back();
        ans.push_back(u);
        vis[u] = true;
        for(auto x : g[u]){
            indegree[x]--;
            // porer indegree zero hobe asob ar modde dia e 
            // karon arai komche
            if(!vis[x] and indegree[x]==0){
                z.push_back(x);
            }}} 
}
void find_cycle(){
    int n, m;
    cin >> n >> m;
    while(m--){
        int u, v;
        cin >> u >> v;
        gr[u].push_back(v);
    }cycle = false;
    for (int i = 1; i <= n;i++){
        if(col[i]==0){//that means not visited
            cycle_dfs(i);}
    }if(cycle){yes;}
}

//dp
0/1 knapsack 
/*There are N items, numbered 1,2,…,N. For each i (1≤i≤N), Item i has a weight of w[i]
and a value of v[i] 
Find the maximum possible sum of the values of items that Taro takes home.
*/
const int N1 = 105;//100 element thakbe bolche
int val[N1], w[N1],W;
int dp[N1][100005];
int n;
int knapsack(int i,int weight){//time complexity is O(i*weight) karon ato gula state hoite pare
    if(i==n+1){
        return 0;}
    if(dp[i][weight]!=-1){
        return dp[i][weight];}
    int ans = knapsack(i + 1, weight);// ai state ta na nile
    if(weight+w[i]<=W){
        //nibe tar age check korbo W ar kom ache kina
        ans = max(ans, knapsack(i + 1, weight + w[i]) + val[i]);} return dp[i][weight] = ans;
}
//DP on Matrix
 n*m matrix find minimum cost path 1,1 to n,m
const int N = 1e2 + 9;
int a[N][N];
int n,m;
int dp[N][N];
int min_cost(int i,int j){//complexity n*m karon max n*m a jailye hobe
    if(i==n and j==m){
        return a[i][j];
    }
    if(i>n or j>m){
        return mod;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    return dp[i][j] = a[i][j] + min(min_cost(i + 1, j), min_cost(i, j + 1));
}
// Path print
void path(int i,int j){
    cout << '(' << i << ',' << j << ')' << "->";
    if(i==n and j==m){
        return;
    }
    int right = min_cost(i, j + 1);// ata joto bar e call kori ata o(1) a kore dicche
    // karon dp agye save kore rakhche
    int down = min_cost(i + 1, j);
    if(right<=down){
        path(i, j + 1);
    }
    else{
        path(i + 1, j);
    }
}
//Longest Increasing Subsequence(LIS)
const int N = 1e3 + 9;
int dp[N];
void solve(int test) {//LIS = longest increasing Subsequence
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    for (int i = 0; i < n;i++){
        for (int j = 0; j < i;j++){
            if(a[j]<a[i]){  
                dp[i] = max(dp[j], dp[i]);
            }
        }
        dp[i]++;
    }
    //O(n*n)
    int length = 0;
    for (int i = 0; i < n;i++){
        length = max(length, dp[i]);
    }
    cout << length << "\n";
}

const int N = 1e5 + 9;

int parent[N];
int size[N];

void make_set(int v){
    parent[v] = v;
    size[v] = 1;
}

int find_set(int v){
    if(parent[v]==v)
        return v;
    return parent[v] = find_set(parent[v]);
//This simple modification of the operation already achieves the time 
//complexity O(\log n) per call on average (here without proof)
}

void union_set(int a,int b){
    a = find_set(a);
    b = find_set(b);
    if(a!=b){
        //Rank by size
        if(size[a]<size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}

//compare find_set(a) == find_set(b) not parent[a]...   
/* amortized time complexity is O(alpha(n)), where alpha(n) is the 
inverse Ackermann function, which grows very slowly. In fact it grows so 
slowly, that it doesn't exceed 4 for all reasonable n 
(approximately n < 10^{600}).*/
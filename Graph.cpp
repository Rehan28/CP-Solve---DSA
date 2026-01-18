/*
একমুখি(Unidirectional)
দ্বিমুখী(Bidirectional)

ডিগ্রী:
   ডিরেক্টেড গ্রাফে একটা নোডে কয়টা এজ প্রবেশ করেছে তাকে ইনডিগ্রী
   আর কোন নোড থেকে কয়টা এজ বের হয়েছে তাকে আউটডিগ্রী বলে।
   sum of indegree = sum of outdegree
graph onek type ar hote prare
E = v^2 hoite pare but input a 3*v dite pare input ar upor depend kore
time complexity = O(v+E) or v^2 ;
v+E better

patha : simple ar complex hoite pare.
*/

//# Degree Sum Formula
 /*
  --> undirected ar jonno
    sum of degree = (2*Egde);
    karon akta egde a sob somoy 2 ta degree baray
 */
//#Handshaking Lemma
/*
In graph theory, a vertex (or node) has an odd degree if it's connected to an odd number of edges 
sob somoy even songkhok odd degree node thakbe.
kano?
j kono 2 ta node a :
2 ta jodi even degree ar hoy then connecte korle amar 2 tai odd degree ar hoia jabe
2 ta jodi odd  . .                .             .     2 tai even degree ...........
akta even ar akta odd ............................. akta odd onnota even hobe
toh hoy 2 bare na hoy 2 kome na hoy nutral thake.
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define mod 1000000007

//adjacency matrix
int matrix[10][10];
void mt(){
    for (int i = 0; i < 3;i++){
        int x,y;
        cin >> x >> y;
        matrix[x][y] = 1;
        matrix[y][x] = 1;
    }
    cout << matrix[1][4] << "\n";
    //kono akta matrix ar O(1)
    // Space complexity onek basi hobe O(n^2)
    /*যদি কোনো প্রবলেমে তোমার u,v নোডের এর মধ্যে কোনো এজ আছে নাকি চেক করতে বলে
     তখন লিস্ট ব্যবহার করলে তোমাকে লুপ চালিয়ে চেক করতে হবে, কিন্তু ম্যাট্রিক্সে জাস্ট matrix[u][v]
     ইনডেক্স চেক করেই বলে দিতে পারবে তাদের মধ্যে কানেকশন আছে নাকি।*/
}
//List
vector<int> li[10];
void list_i(){
    for (int i = 0; i < 3;i++){
        int x, y;
        cin >> x >> y;
        li[x].push_back(y);
        li[y].push_back(x);
    }
    for (int i = 0; i < li[1].size();i++){
        cout << li[1][i] << " ";
    }
    //ata better 
} 
// If all nodes are connected with each other, then the graph is connected.
// Find korbo search algo dia dakh jay

//#DFS
const int N = 1e5 + 9;
int con_comp[N];
vector<int> g[N];
bool vis[N];
void dfs(int u) // O(E+V);
{
    vis[u] = 1;
    //cout << u << "\n";
    //con_comp[u] = x;
    for(auto v : g[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}


//#connected or disconnected 
void connected_or(){
    dfs(1);
    for (int i = 1; i <= 5;i++){
        if(!vis[i]){
            cout << "Disconnected Graph \n";
            return;
        }
    }
    cout << "Connected Graph \n";
}

//# ata onekta amon j koyta alada disconnected graph ache seta ber kora lagbe 
// onekta koyta dip ache seta ber kora lagbe

void how_many_disconnected_graph(){
    int ans = 0;
    for (int i = 1; i < 5;i++){
        if(!vis[i]){
            ans++;
            dfs(i);
        }
    }
    cout << ans << "\n";
}

// ## Connected componnent using DFS
//  kono 2 ta node connected kina seta ber kora lagbe
//  a,n, and query = 1e5 ber kora lagbe O(1);

void connected_comp(){
    int num = 1;
    for (int i = 1; i < 5;i++){
        if(!vis[i]){
            dfs(i);
            num++;
        }
    }
    cout << con_comp[1] << "\n";
    cout << con_comp[3] << "\n";
    if(con_comp[1]==con_comp[3]){
        yes;
    }
}

//### BFS

/* age sob node then porer gula*/
void bfs(int x){
    queue<int> q;
    q.push(x);
    vis[x] = true;
    while (q.size()){
        int u = q.front();
        q.pop();
        for(auto v : g[u]){
            if(!vis[v]){
                q.push(v);
                vis[v] = true;
            }
        }
    }
    
}

// Shortest Path using BFS(jokhon sob gular weight same)
int dis[N];
int path[N];
int num_path[N];
//BFS a weigheted graph kaj kore na
void shortest_path(int x){//and printing path
    //Number of path
    queue<int> q;
    q.push(x);
    vis[x] = true;
    while(q.size()){
        int u = q.front();//u parent
        q.pop();
        for(auto v : g[u]){
            if(!vis[v]){
                path[v] = u;
                num_path[v] = num_path[u] + 1;//Number of shortest path
                //modulo lagte pare

                // mone porche na maybe number of path
                dis[v] = dis[u] + 1;//parent ar 1 basi
                vis[v] = true;
                q.push(v);
            }
        }
    }
    //print distance
    for (int i = 1; i <= 4;i++){
        cout << dis[i] << " ";
    }
    cout << "\n";
    //print path 1 to 4
    int y = 4;
    cout << "Path\n";
    while(y!=1){
        cout << y << " ";
        y = path[y];
    }
    cout << 1;
}

//#multi source bfs 
/*
barer kono akta point dia sobulay connect jabo then bfs colbe
bairer kono point lagena just start a queue te nilye hoy

*/

//##Bicoloring and Bipartite Graphs
/*sob edge jodi 2 ta alada set ba color a connected hoy then bipartite*/
//This is the same as coloring the graph in two colors such that every adjacent node has different colors.
int color[N];
bool ok;
void bicolor(int u){//Multiple loop dorkar nai
// strongli connected hoite hobe
    vis[u] = true;
    for(auto v:g[u]){
        if(!vis[v]){
            color[v] = color[u] ^ 1;//parent a jeta ache tar ulta xor dia hoy
            bicolor(v);
        }
        else if(color[v]==color[u]){
            ok = false;
        }
    }
}

//#multi-source DFS or BFS
/*
amon akta problem kono akta node dia kacher lal node koto dure ber kora lagbe
taile amra bairer akta node nia otar sathe lal gula add kore ota theke bfs clailye hobe.
kono node o dorkar nai just lal gula queue te dukaia nilye hoy.
*/


//####   Topological sort
/*
    kono akta kajer scheduling korara jonno directed graph a use kora hoy.
    kon kajta kontar age asbe seta.
*/
int indegree[N];
void toposort(){
    int n = 4;
    for (int i = 1; i <= n;i++){//m porjonto hoy
        int u, v;
        cin >> u >> v;//u theke v te jabe
        g[u].push_back(v);
        indegree[v]++;
    }
    vector<int> z;
    for (int i = 1; i <= n;i++){
        if(indegree[i]==0){
            z.push_back(i);
            vis[i] = true;
        }
    }
    vector<int> ans;
    while (ans.size()<n){
        if(z.size()==0){
            cout << "IMPOSSIBLE\n";
            return;
        }
        int u = z.back(); // atar jonno O(V+E);
        z.pop_back();
        // for (int i = 1; i <= n;i++){//ata n
        // // atar jonno O(n^2)
        //     if(!vis[i] and indegree[i]==0){
        //         u = i;
        //         vis[i] = true;
        //         break;
        //     }
        // }
        // if(u==0){
        //     cout << "IMPOSSIBLE\n";
        //     return;
        // }
        ans.push_back(u);
        vis[u] = true;
        for(auto x : g[u]){
            indegree[x]--;
            // porer indegree zero hobe asob ar modde dia e 
            // karon arai komche
            if(!vis[x] and indegree[x]==0){
                z.push_back(x);
            }
        }
    }
    for(auto x : ans){
        cout << x << " ";
    }
    
}

//#Find cycle Using DFS

//round ghorar somoy just dakhbo node ta active kina
// direccted ans undireccted 2 type graph a e kaj kore

vector<int> gr[N];
bool cycle;
int col[N];
int per[N]

void cycle_dfs(int u){
    col[u] = 1; // node active korlam
    for(auto v : gr[u]){
        if(col[v]==0){
            per[v] = u;//track the path of cycle
            cycle_dfs(v);
        }
        else if(col[v]==1){//kono akta active node abar back korche
            cycle = true;
        }
    }
    col[u] = 2;
}

void find_cycle(){
    int n, m;
    cin >> n >> m;
    while(m--){
        int u, v;
        cin >> u >> v;
        gr[u].push_back(v);
    }
    cycle = false;
    for (int i = 1; i <= n;i++){
        if(col[i]==0){//that means not visited
            cycle_dfs(i);
        }
    }
    if(cycle){
        yes;
    }
    else{
        no;
    }
}

//#Find odd length cycle
/*if this graph is bicoloring then its odd length cycle is exixt
    BEcasuse even length or other graph has bicoloring propertice
*/

//# Tree
/*
connected acyclic graph
-- always n-1 ta edge thakbe
** tree ar depth parent theke paite pari
** tree diameter
*/

int main() {
    Muku28();
    int test = 1;
    //cin>>test;
    //mt();
    //list_i();
    // for (int i = 0; i < 4;i++){
    //     int u, v;
    //     cin >> u >> v;
    //     g[u].push_back(v);
    //     g[v].push_back(u);
    // }
    //dfs(1);
    //connected_or();
    //how_many_disconnected_graph();
    //connected_comp();
    //bfs(1); //dfs ar moto ager sob e ber kora jay
    //shortest_path(1);]

    /*##Bicolor
    ok = true;
    for (int i = 1; i <= 5;i++){
        if(!vis[i]){
            bicolor(i);
        }
    }
    if(ok){
        yes;
    }
    else{
        no;
    }*/
    //toposort();
    find_cycle();

    return 0;
}

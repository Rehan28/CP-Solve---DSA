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

void solve(int test) {
    int n;
    cin>>n;
    vector<pair<pair<int, int>, int>> customer(n);
    for (int i = 0; i < n;i++){
            cin >> customer[i].first.first >> customer[i].first.second;
            customer[i].second = i;
    }
    sort(customer.begin(), customer.end());
    /*In this customer vector, each element is a pair where the first element is
     another pair of integers and the second element is an integer
     By default, the sort function compares these pairs lexicographically, 
    meaning it first compares the first elements of the pairs.
    If they are equal, it then compares the second elements of the pairs.*/
    // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> room;
    // vector<int> roomassi(n, -1);
    // int roomId = 1;
    // for (int i = 0; i < n;i++){
    //     if(i==0){
    //         room.push(make_pair(customer[i].first.second, roomId));
    //         roomassi[customer[i].second] = roomId;
    //         roomId++;
    //     }
    //     else{
    //         int x = room.top().first;
    //         int y = customer[i].first.first;
    //         if(x<y){
    //             roomassi[customer[i].second] = room.top().second;
    //             pair<int, int> p = room.top();
    //             room.pop();
    //             room.push(make_pair(customer[i].first.second, p.second));
    //         }
    //         else{
    //             room.push(make_pair(customer[i].first.second, roomId));
    //             roomassi[customer[i].second] = roomId;
    //             roomId++;
    //         }
    //     }
    // }
    // cout << roomId - 1 << "\n";
    // //last a akta baraichi
    // for (int i = 0; i < n;i++){
    //     cout << roomassi[i] << " ";
    // }
    int roomid = 0;
    vector<int> roomnum(n, -1);//kon room deoa hoiche
    multiset<pair<int, int>> room;
    for (int i = 0; i < n;i++){
        if(i==0){
            roomid++;
            room.insert(make_pair(customer[i].first.second, roomid));
            roomnum[customer[i].second] = roomid;
        }
        else{
            pair<int, int> stval = *room.begin();
            if(stval.first<customer[i].first.first){
                int agerRoom = stval.second;
               roomnum[customer[i].second] = agerRoom;
               room.erase(room.begin()); 
               room.insert(make_pair(customer[i].first.second, agerRoom));
            }
            else{
                roomid++;
                room.insert(make_pair(customer[i].first.second, roomid));
                roomnum[customer[i].second] = roomid;
            }
        }
    }
    cout << roomid << "\n";
    for (int i= 0; i < n;i++){
        cout << roomnum[i] << " ";
    }
    cout << "\n";
}
int main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}

#include <bits/stdc++.h>

 using namespace std;
void printvec(vector<int> & v){
    cout<<"size : "<<""<<v.size()<<"\n";
    for (int i = 0; i < v.size(); ++i) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int> v;
    int n;
    cin>> n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        printvec(v);
    }
    v.pop_back();//last a dia soraiy
    printvec(v);

}


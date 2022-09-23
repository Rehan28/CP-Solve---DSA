// Vertor Iterator
    Muku28();
    vector<int> v;
    cinv(v,4);
    vector<int> :: iterator it;
    for(it = v.begin();it!=v.end();it++){
        cout<<*it<<"\n";
    }
    // Iterator Pair
    vector<pair<int,int>> vp = {{1,2},{2,3},{5,6}};
    vector<pair<int,int>> :: iterator ite;
    
    for(ite = vp.begin();ite!=vp.end();ite++)
    {
        cout<<ite->first<<" "<<ite->second<<"\n";
        //-> for pair 
    }
//input 1 2 3 4
// output
/*1
2
3
4
1 2
2 3
5 6*/

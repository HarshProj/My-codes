#include<iostream>
#include<map>
using namespace std;

int main(){

    map<int,string> n;

    n[1]="babbar";
    n[2]="Love";
    n[13]="Kumar";
    n.insert(5,"Bheem");

    cout<<"Before erase"<<endl;
    for(auto i:n){
        cout<<i.first<< " "<<i.second<<endl;
    }
    cout<<"Finding 13"<<n.count(-13)<<endl;

    n.erase(13);
    cout<<"After erase"<<endl;
    for(auto i:n){
        cout<<i.first<< " "<<i.second<<endl;
    }

    auto it=n.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
    return 0;
}
//Key is unique and one key will points to only one value
//In the case of orderd map it is in sorted way 
//In ordered map time complexity of search is O(logn)
//In case of unordered map it is O(n)
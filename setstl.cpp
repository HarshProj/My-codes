#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    //it will take input in only one time

    for(auto i:s){
        cout<<i<<endl;
    }

    set<int>::iterator it =s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<"5 is present or not-->"<<s.count(5)<<endl;

    set<int>::iterator itr=s.find(5);
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
    // cout<<"Value";
    return 0;
}
//In set we get elements in sorted order
//Unordered set is faster than the ordered set and when we fetch elements from unordered set it not comes in sorted waz 
//Note time complexity of insert ,find,erase,count all have time complexity of O(n) that of size end begin  has O(1)
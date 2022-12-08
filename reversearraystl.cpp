#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> &v){
    int s=0;
    int e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;

    }
    return v;
}

void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}
int main(){

    vector<int> vec1;
    vec1.push_back(11);
    vec1.push_back(7);
    vec1.push_back(3);
    vec1.push_back(12);
    vec1.push_back(4);

    vector<int> ans= reverse(vec1);
    cout<<"Printing reverse array"<<endl;
    print(ans);
    return 0;
}
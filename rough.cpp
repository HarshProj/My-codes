#include <bits/stdc++.h>
using namespace std;
bool isvowel(char a){
    if(a=='a' || a=='y'||a=='u'||a=='s'||a=='h'||a=='A' || a=='Y'||a=='U'||a=='S'||a=='H'){
        return 1;
    }
    return 0;
}
int main(){
	string st;
    
    cin>>st;
    
    for(int i=0;st[i]!='\0';i++){
        cout<<st[i]; 
        if(isvowel(st[i])){
            cout<<st[i];
        }
        else{
            cout<<'+'+ st[i];
        }
    }
    // cout<<endl;
    return 0;
    
}

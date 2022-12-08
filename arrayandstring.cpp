#include<iostream>
using namespace std;
char tollowercase(char ch){
    if(ch>='a'&& ch<=z){
        return ch;
    }
    else{
        char temp= ch-'A'+'a';//Concept 'A'-'B'=1 a+1=b
        return temp;
    }
}
bool checkPalindrome(string s)
{   
    // Write your code here.
    int st=0,n=0;
    for(int i=0;s[i]!='\0';i++){
        n++;
    }
    int e=n-1;
    while(st<=e){
        if(s[st]!=s[e]){
            return 0;
        }
        else{
            st++;
            e--;
        }
    }
    return 1;
}

int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

void reversearr(char name[]){
    int s=0;
    int e=getlength(name)-1;
    while(s<e){
        swap(name[s++],name[e--]);
        
    }

}
int main(){
    
    char a='z';
    //Strings one dimensional character array

    char name[20];
    
    cin>>name;//cin stops execution when we give it space,tab or new line(enter) character
    // name[2]='\0';//now cout prints only charecter at 0 and 1 index
    cout<<name<<endl;
    // cout<<name;agar name harsh cauhan likha hai to dono barr harsh hi print hoga
    cout<<"Length of your string "<<getlength(name)<<endl;

//Reversing that string
    reversearr(name);
    cout<<name;


    return 0;
}
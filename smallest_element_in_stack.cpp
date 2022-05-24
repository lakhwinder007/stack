#include<bits/stdc++.h>
using namespace std;
//o(n) space algorithm
stack<int>s;
stack<int>ss;
void push(int x){
    if(s.size()==0){s.push(x);
    ss.push(x);}
    else{
     if(x>=ss.top())s.push(x);
     else if(x<ss.top()){
         s.push(x);
         ss.push(x);
     }
    }
}
int  pop(){
    int a=s.top();
    if(s.size()==0)return -1;
    else{
      s.pop();
      if(ss.top()==a)ss.pop();
        
   return a; }
    
}
// int top(){
//     if(s.size()==0)return -1;
//     else{
//         return s.top();
//     }
// }
int getmin(){
    if(s.size()==0)return -1;
    else{
        return ss.top();
    }
}
int main(){
push(5);
push(8);
push(3);
push(1);
pop();
pop();
cout<<"smallest element is  "<<getmin();
    return 0;
}
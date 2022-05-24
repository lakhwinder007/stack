#include<bits/stdc++.h>
using namespace std;
stack<int>s;
int me;
void push(int x){
    if(s.size()==0){
        s.push(x);
        me=x;
    }
    else{
        if(x>=me)s.push(x);
        else{
            s.push(2*x-me);
            me=x;
        }
    }
}
int  pop(){
    int a=s.top();
    if(s.size()==0){
        return -1;
    }
    else{
        if(s.top()>me)s.pop();
        else {
            s.pop();
            me=2*me-a;
        }
        return a;
    }
}
int getmin(){
    if(s.size()==0)return -1;
    else{return me;
          }
}
int top(){
    if(s.size()==0)return -1;
    else{ if(s.top()>=me)return s.top();
          else{
              return me;
          }
          }
}
int main(){
     push(8);
    push(9);
    pop();
     push(3);
     //now the element actually pushed in stacked  is 2*x-me==2*3-8==-2///

     cout<<getmin()<<endl;
     cout<<"top "<<top();
     //cout<<s.top();
    return 0;
}
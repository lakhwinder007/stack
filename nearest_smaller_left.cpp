#include<bits/stdc++.h>
using namespace std;
// program to  print indices of nearest smaller element to left 
 stack<int>s;
    vector<int>v;
 void nsl(int arr[],int n){
   
    for(int i=0;i<n;i++){
        if(s.size()==0)v.push_back(-1);
        else if(s.size()>0 && arr[s.top()]<arr[i]){
            v.push_back(s.top());
        }
        else if(s.size()>0 && arr[s.top()]>=arr[i]){
            while(s.size()>0 && arr[s.top()]>=arr[i])s.pop();
            if(s.size()==0)v.push_back(-1);
            else v.push_back(s.top());
        }
        s.push(i);
       
    }
    
}
int main(){
    int arr[]={8,5,11,64,2,3};
    nsl(arr,6);
     for(int i=0;i<6;i++){
            cout<<v[i]<<" ";
        }
    return 0;
}
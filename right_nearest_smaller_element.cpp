#include<bits/stdc++.h>
using namespace std;
void nsr(int arr[],int n){
    vector<int>v;
    stack<int>s;

    for(int i=n-1;i>=0;i--){
        if(s.size()==0)v.push_back(-1);
        else if(s.size()>0 && s.top()<arr[i])v.push_back(s.top());
        else if(s.size()>0 && s.top()>=arr[i]){
            while(s.size()>0&&s.top()>=arr[i]){
                s.pop();
            }
           if(s.size()==0)v.push_back(-1);
           else v.push_back(s.top());
        }
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int arr[]={8,9,2,13,45,6};
    int n=6;
    nsr(arr,n);
    return 0;
}

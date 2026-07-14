#include<iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<numeric>
using namespace std;
bool fnc(vector<vector<int>>&a,int x){
    int n=a.size(),m=a[0].size();
    int low=0,high=n*m-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int row=mid/m,col=mid%m;
        if(a[row][col]==x) return true;
        else if(a[mid][col]<x) low=mid+1;
        else high=mid-1;
    }
    return false;
}
int main(){
    int t,n,m,x;
    cin>>t;
    for(int y=0;y<t;y++){
        cin>>n>>m;
        vector<vector<int>> a(n,vector<int>(m));
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j];
        cin>>x;
        bool l=fnc(a,x);
        cout<<l<<endl;
    }
    return 0;
}
#include <iostream>
#include <queue>
using namespace std;

int main() {

priority_queue<int>maxi;
  
  maxi.push(1);
  maxi.push(3);
  maxi.push(0);0
  maxi.push(2);

  int n=maxi.size();

  for(int i=0;i<n;i++){
    cout<<maxi.top()<<" ";
    maxi.pop();
  }cout<<endl;

  cout<<"Now For Mini Implitation "<<endl;
  priority_queue <int,vector<int>,greater<int> >mini;
  mini.push(1);
  mini.push(3);
  mini.push(0);
  mini.push(2);
  int m=mini.size();
  for(int i=0;i<m;i++){
    cout<<mini.top()<<" ";
    mini.pop();
  }cout<<endl;

  cout<<"Empty Or Not -> "<<maxi.empty();
}

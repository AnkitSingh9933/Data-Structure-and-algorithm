#include <iostream>
#include <deque>
using namespace std;

int main() {
  deque<int>d;
  
  d.push_front(2);//put value 2 in front
  d.push_back(1);//push value 1 in end or back;

  for(auto i:d){
    cout<<i<<" ";
  }
  cout<<endl;

  // cout<<"Before pop_front() ";
  //  for(auto i:d){
  //   cout<<i<<" ";
  // }
  // cout<<endl;

  // d.pop_front();

  //  cout<<"After pop_front() ";
  //  for(auto i:d){
  //   cout<<i<<" ";
  // }
  // cout<<endl;

  cout<<"Print first index element -> "<<d.at(0)<<endl;
  cout<<"Front -> "<< d.front()<<endl;
  cout<<"Back -> "<< d.back()<<endl;
  cout<<"Empty Or Not -> "<< d.empty()<<endl;
  cout<<"Before Erase size -> "<< d.size()<<endl;
  
  d.erase(d.begin(),d.begin()+1);
  
  cout<<"After Erase size -> "<< d.size()<<endl;
  cout<<"After Clear The Value Remains -> ";
  for(auto i:d){
    cout<<i<<" ";
   }
   cout<<endl;
   
  }

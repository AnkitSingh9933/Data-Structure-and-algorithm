#include <iostream>
#include <list>
using namespace std;

int main() {

  list<int>l;
  cout<<"Initilize Neo with 100 5 times -> "<<endl;
  list<int>neo(5,100);
   for(auto i:neo){
    cout<<i<<" "<<endl;
  }
  cout<<"New Vector Created -> "<<endl;

  l.push_back(3);
  l.push_back(1);
  l.push_front(2);
  l.push_front(4);
  cout<<"Before Erase "<<endl;

  for(auto i:l){
    cout<<i<<" ";
  }cout<<endl;

  l.pop_front();
  
   cout<<"After Erase "<<endl;

  for(auto i:l){
    cout<<i<<" ";
  }
  cout<<endl;

  cout<<"Size Of List -> "<<l.size();
  
}

#include <iostream>
#include <set>
using namespace std;

int main() {
  set<int>s;
  s.insert(5);
  s.insert(4);
  s.insert(5);
  s.insert(4);
  s.insert(3);
  s.insert(2);
  s.insert(10);


  for(auto i:s){
    cout<< i<<" ";
  }
  cout<<endl;
  auto it=s.begin();
  it++;
  s.erase(it);
  cout<<"after Erase : "<<endl;
   for(auto i:s){
    cout<< i<<" ";
  }cout<<endl;
  cout<<"5 Present Or Not : "<<s.count(5)<<endl;
  auto itr=s.find(5);
  cout<<"iterator of 5 is : "<<(*itr)<<endl;
  for(auto it=itr;it!=s.end();++it){
    cout<<*it<<endl;
  }  
}

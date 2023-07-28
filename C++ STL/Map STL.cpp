#include <iostream>
#include <map>
using namespace std;

int main() {
  map<int,string>m;
  m[1]="Ankit";
  m[2]="kaisa";
  m[3]="Hain";
  m.insert({4,"Bro"});
  cout<<"Before Erase : "<<endl;
  for(auto i : m){
    cout<<i.first << i.second<<" ";
  }cout<<endl;
  cout<<"Avilable or not 4 -> "<<m.count(4)<<endl;
  m.erase(3);
  cout<<"After Erase : "<<endl;
  for(auto i : m){
    cout<<i.first << i.second<<" ";
  }cout<<endl;

 auto it=m.find(2);
  for(auto i=it;i!=m.end();i++){
    cout<<(*i).first<<" ";
  }
  

}

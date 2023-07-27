#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int>v;
  cout<<"Size of v -> "<< v.size()<<endl;
  cout<<"Capacity of v -> "<< v.capacity();
  cout<<endl;
  
  v.push_back(1);
  cout<<"Size of v1 -> "<< v.size()<<endl;
  cout<<"Capacity of v1 -> "<< v.capacity();
  cout<<endl;

  v.push_back(2);
  cout<<"Size of v2 -> "<< v.size()<<endl;
  cout<<"Capacity of v2 -> "<< v.capacity();
  cout<<endl;

   v.push_back(3);
  cout<<"Size of v3 -> "<< v.size()<<endl;
  cout<<"Capacity of v3 -> "<< v.capacity();
  cout<<endl;
  
  //For Finding Index Value;
  cout<<"For Finding Index Value "<<endl;
  cout<<"Value Of Index 2 -> "<<v.at(2);
  cout<<endl;
  
 //For Find Front And Back;
  cout<<"For Finding Front & Back "<<endl;
  cout<<"Front-> "<<v.front()<<endl;
  cout<<"Back -> "<<v.back();
  cout<<endl;
  
  //pop_back() Function;
  cout<<"Before pop_back()-> ";
  for(auto i: v){
    cout<<i<<" ";
  } cout<<endl;

  v.pop_back();//pop_back()=Back Element Removed;

   cout<<"After pop_back()-> ";
  for(auto i: v){
    cout<<i<<" ";
  } cout<<endl;

  //Clear The Size Of Vector;
  cout<<"Before Clear Size-> "<<v.size()<<endl;
  
  v.clear(); //Capacity Remain Same Only Size Clear;
  
  cout<<"After Clear Size-> "<<v.size()<<endl;

   cout<<"New vector"<<endl;

  vector<int>a(4,1);
  vector<int>last(a);
  for(auto i: last){
    cout<<i<<" ";
  } cout<<endl;
}

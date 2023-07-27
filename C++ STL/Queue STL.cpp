#include <iostream>
#include <queue>
using namespace std;

int main() {

  queue<string>q;
  q.push("Ankit");
  q.push("Singh");
  q.push("Varsha");

  cout<<q.front()<<endl;
  cout<<"After Pop "<<endl;
  q.pop();
  cout<<q.front();
  cout<<"Size "<<q.size()<<endl;
  
}

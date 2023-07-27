#include <iostream>
#include <stack>
using namespace std;

int main() {

  stack<string>s;
  s.push("Ankit");
  s.push("Singh");
  cout<<"Befor pop : "<<endl;
  cout<<"Top Element -> "<<s.top()<<endl;
  cout<<"after pop : "<<endl;
  s.pop();
  cout<<"Top Element -> "<<s.top()<<endl;
  cout<<"Empty Or Not -> "<< s.empty();

  
}

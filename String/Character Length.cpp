#include<iostream>
using namespace std;

int getlength(char name[]){
    int count=0;
    int i=0;
   while(name[i]!='\0'){
    count++;
     i++;
   }
   return count;
  
}

int main(){

    char name[10];
    cout<<"Enter The Name : ";
    cin>>name;
    
    cout<<"Name is : "<<name<<endl;

   int ans=getlength(name);
   cout<<ans;
   
}

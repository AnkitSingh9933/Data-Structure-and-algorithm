#include<iostream>
using namespace std;

// 1 . To Find Code Length;
int getlength(char ankit[]){
    int count=0;
    int i=0;
   while(ankit[i]!='\0'){
    count++;
     i++;
   }
   return count;
  
}

// 2 . To Reverse String;
void reverse(char arr[], int n){
int left = 0;
int right = n - 1;

while(left <= right){
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
    left++;
    right--;
}

}


// 4 . Upper To Lower Case;
    char ToLowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A'+ 'a';
        return temp;
    }
}
// 3 . check The Element Is Palindrom Or Not;
bool palindrom(char a[], int n) {
    int s = 0;
    int e = n-1;

   while(s <= e){

    if(ToLowercase(a[s]) != ToLowercase(a[e])){
        return 0;
    }
    else{
        s++;
        e--;
    }
   }
   return 1;
}





int main(){

    char name[10];
    cout<<"Enter The Name : ";
    cin>>name;
    
    cout<<"Name is : "<<name<<endl;

   int len=getlength(name);// 1 . To Find Code Length;
   cout<<"Character Length Is : "<<len<<endl;

   reverse(name,len);// 2 . Reverse String;
   cout<<"Your Reverse Name Is : "<<name<<endl;
   
   cout<<"Upper To Lower Case : "<<ToLowercase('A')<<endl;
   cout<<"Upper To Lower Case : "<<ToLowercase('B')<<endl;

   cout<<"Palindrom Or Not -> "<<palindrom(name,len)<<endl; //3 . Pelindrom Or Note;

   return 0;

}

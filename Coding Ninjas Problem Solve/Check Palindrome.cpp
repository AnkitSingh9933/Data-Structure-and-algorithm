#include <bits/stdc++.h>

char Tolowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
} 

bool Check(char ch){
    if((ch >= 'a' && ch<= 'z')||(ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
        return true;
    }
    else{
        return false;
    }
}
bool checkPalindrome(string s)
{
    int start = 0;
    int n = s.size();
    int end = n - 1;
    
    while(start <= end){
        
        if(Check(s[start]) == false){
            
            start++; 
        }
        
        else if(Check(s[end]) == false){
            
            end--;
        }
        
        else if(Tolowercase(s[start]) == Tolowercase (s[end])){
            
            start++;
            end--;
        }
        else{
            
            return false;
        }
    
    }
    return true;
}

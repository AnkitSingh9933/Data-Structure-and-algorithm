class Solution {

    char Tolowercase(char ch){

        if((ch >= 'a' && ch <= 'z' )|| (ch >= '0' && ch <= '9')){
            return ch; 

        }
        else{

            char temp = ch - 'A' + 'a';
            return temp;

        }
    }

    bool is_alphnum(char ch){
        
        if((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z')||(ch >= '0' && ch <= '9')){

            return true;
        }
        else{
            return false;
        }
    }
    
public:
    bool isPalindrome(string s) {
        int start = 0;
        int n = s.size();
        int end = n - 1;
    //      if (n <= 1){
    //      return true;
    // }

        while(start <= end){

            if(!is_alphnum(s[start])){
                start++;
            }
            else if(!is_alphnum(s[end])){
                end--;
            }
            else if(Tolowercase(s[start]) == Tolowercase(s[end])){
                start++;
                end--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};

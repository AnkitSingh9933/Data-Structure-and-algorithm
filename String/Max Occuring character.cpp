//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
//     char tolowercase(char ch){

//     if(ch >= 'a' && ch <= 'z'){
//         return ch;
//     }
//     else{
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
         int arr[26] = {0};
    int n = str.size();

    for(int i=0; i<n; i++){

        char ch = str[i];

                if(isalpha(ch)){

                char lowercase = tolower(ch);
                int index = lowercase - 'a';
                arr[index]++;

            }
        }

        int maxi = 0;
        char maxocchar = 0;

        for(int i=0; i<26; i++){

            if(arr[i] > maxi){
                maxi = arr[i];
                maxocchar = i + 'a';
            }
        }
        return maxocchar;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends

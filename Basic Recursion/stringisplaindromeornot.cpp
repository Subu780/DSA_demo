#include <bits/stdc++.h>
using namespace std;

bool checkpalindrome(int index,string str)
{
   string s = str;
   if(index>=str.length()/2)
   return true;
   if(s[index] != str[str.length()-1-index])
   return false;
   return checkpalindrome(index+1,str);

}

int main()
{
    cout << "Enter a String to check if it is Palindrome or not"<< endl;
    string inps;
    string reverse ="";
    cin >> inps;
    int len = inps.length();
    if(checkpalindrome(0,inps))
    cout << "String is palindrome"<< endl;
    else
    cout << "String is not palindrome" << endl;
    
}
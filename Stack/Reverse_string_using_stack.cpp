#include <bits/stdc++.h> 
using namespace std; 
#define nl "\n"  
#define ll long long   
#define ull unsigned long long  
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);     
const ull mod = 1e9+7;

void reverse(string &str)
{
    // Create and empty stack
    stack <int> s;

    // Push each character to the stack
    for(char ch : str)
    {
        s.push(ch);
    }

    // Pop each character from the stack
    // And arrange back them to string
    for(int i=0; i<str.length(); i++)
    {
        str[i] = s.top();
        s.pop();
    }
}

int main(){
 fast;
 string str;
 cin >> str;

 reverse(str);
 cout << str;
 
 return 0;

}  
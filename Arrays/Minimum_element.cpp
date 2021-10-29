#include <bits/stdc++.h> 
using namespace std; 
#define nl "\n"  
#define ll long long   
#define ull unsigned long long  
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);     
const ull mod = 1e9+7; 

int main(){
 fast;
 int n;
 cin >> n;
 int arr[n];
 for(int i=0; i<n; i++)
 {
     cin >> arr[i];
 }
 int min = arr[0];
 for(int i=0; i<n; i++)
 {
     if(arr[i] < min)
     {
         min = arr[i];
     }
 }
 cout << "Minimum Element = " << min << nl;
 return 0;

}  
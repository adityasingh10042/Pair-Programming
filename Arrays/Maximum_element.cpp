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
 int max = arr[0];
 for(int i=1; i<n; i++)
 {
     if(arr[i] > max)
     {
         max = arr[i];
     }
 }
 cout << "Maximum element in array is = " << max << nl;
 return 0;

}
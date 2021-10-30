#include <bits/stdc++.h> 
#include<algorithm>
using namespace std; 
#define nl "\n"  
#define ll long long   
#define ull unsigned long long  
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);     
const ull mod = 1e9+7; 

int main()
{
 fast;
 int n;
 cin >> n;
 int arr[n];
 for(int i=0; i<n; i++)
 {
     cin >> arr[i];
 }
 reverse(arr, arr+n);
 cout << "Array after reverse is = ";
 for(int i=0; i<n; i++)
 {
     cout << arr[i] << " ";
 }
 return 0;

}  
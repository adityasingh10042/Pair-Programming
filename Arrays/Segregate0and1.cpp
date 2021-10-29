#include <bits/stdc++.h> 
using namespace std; 
#define nl "\n"  
#define ll long long   
#define ull unsigned long long  
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);     
const ull mod = 1e9+7; 

int code(int arr[], int n)
{
    int count =0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            count++;
        }
    }
    for(int i=0; i<count; i++)  //This loop works as to shift all 0's elements to first
    {
        arr[i] = 0;
    }
    
    for(int i=count; i<n; i++) //This loop works as to shift all 1's elements to last
    {
        arr[i] = 1;
    }
}

int main(){
 fast;
 int n;
 cin >> n;
 int arr[n];
 for(int i=0; i<n; i++) //Input array
 {
     cin >> arr[i];
 }
 code(arr,n);
 for(int i=0; i<n; i++)
 {
     cout << arr[i] << " ";
 }
 return 0;

}  
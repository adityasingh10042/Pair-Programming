#include <bits/stdc++.h> 
using namespace std; 
#define nl "\n"  
#define ll long long   
#define ull unsigned long long  
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);     
const ull mod = 1e9+7; 

int code(int arr[], int n)
{
    int j = -1;
    for(int i=0; i<n; i++)
    {
        if(arr[i] < 0)
        {
            j++;
            swap(arr[i],arr[j]);
        }
    }
}

int array_input(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
}

int array_output(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
 fast;
 int n;
 cin >> n;
 int arr[n];
 array_input(arr,n);
 code(arr,n);
 array_output(arr,n);
 return 0;

}  
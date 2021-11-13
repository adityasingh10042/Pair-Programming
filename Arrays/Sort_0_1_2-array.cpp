#include <bits/stdc++.h> 
using namespace std; 
#define nl "\n"  
#define ll long long   
#define ull unsigned long long  
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);     
const ull mod = 1e9+7; 

int code(int arr[], int n)
{
    int count, count2 = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            count++;
        }
        else if(arr[i]==2)
        {
            count2++;
        }
    }

    for(int i=0; i<count; i++) //Sort 0's elements
    {
        arr[i]=0;
    }

    for(int i=count; i<n; i++)  //Sort 1's elements
    {
        arr[i]=1;
    }
    
    for(int i=count; i<count2; i++)
    {
        arr[i]=2;
    }
}

int input_array(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
}

int output_array(int arr[], int n)
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
 input_array(arr,n);
 code(arr,n);
 output_array(arr,n);
 return 0;

}  
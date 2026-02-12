#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    for( int j=0;j<n/2;j++){
    swap( arr[n-1-j],arr[j]);
    }

    for(int i=0;i<n;i++){
     cout<<arr[i];
    }
}
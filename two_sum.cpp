#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    int target;
    int arr[100];
    cout<<("enter the no of elelments in aaray");
    cin>>n;
    cout<<("enter the no you want to search");
    cin>>target;
    cout<<("enter the  elelments of aaray");
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }


        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(arr[i] + arr[j] == target){
                  cout << "Indices are: " << i << " and " << j << endl;
                }
            }
        }
        return {};
    };
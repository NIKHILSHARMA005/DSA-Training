#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    int x;
    int y=0;
    int arr[100];
    cout<<("enter the no of elelments in aaray");
    cin>>n;
    cout<<("enter the no you want to search");
    cin>>x;
    cout<<("enter the  elelments of aaray");
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if (arr[i]==x)
         y==1;
         break;
        }
   if(y=1)
    cout<<("element found");
   else
    cout<<("not found");
}

    


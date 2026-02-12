#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans;

    int maxi = arr[n-1];
    ans.push_back(maxi);

    for(int i = n-2; i >= 0; i--) {
        if(arr[i] >= maxi) {
            maxi = arr[i];
            ans.push_back(arr[i]);
        }
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> result = leaders(arr);

    cout<<"Leaders are: ";
    for(int x : result){
        cout<<x<<" ";
    }

    return 0;
}

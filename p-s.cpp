#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cin>>n; 
        int p=1;
        int s=0;
        while(n!=0){
       int lastdigit=n%10;
       p=p*lastdigit;
       s=s+lastdigit;
       n=n/10;
       }
    
  
       cout<<(p-s);
      
};
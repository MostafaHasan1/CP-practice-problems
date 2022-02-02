#include <iostream>
using namespace std;

int main(){
   /* int x, sum=0;
    cin>>x;
    while(x%2==0){
        sum=sum+x;
        cin>>x;
    }
    cout<<sum<<endl;
    */

   int x, sum=0;
   cin>>x;
   for(sum=0; x%2==0;){ //sum value is changeable
       sum=sum+x;
       cin>>x;
   }
   cout<<sum;
}

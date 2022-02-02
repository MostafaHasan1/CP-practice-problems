#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin>>x;
    if (x%2==0){
        y=x-(x-1);
        cout<<y;
    }else if (x%2!=0){
        y=x+(x+1);
        cout<<y;
    }else{
        cout<<"Invalidvb";
    }
}
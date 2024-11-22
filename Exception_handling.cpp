// You are using GCC
#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int a=x-y;
    try{
        if(a!=0){
            cout<<"Resultof (x/a) = "<<x/a;
        }
        else{
            throw(a);
        }
    }
    catch(int b){
        cout<<"Exception caught : a = "<<a;
    }
    cout<<endl;
    return 0;
}
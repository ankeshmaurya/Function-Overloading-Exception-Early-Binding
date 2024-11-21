// You are using GCC
#include<iostream>
using namespace std;
class Overloading{
    public:
        int area(int side){
            return side*side;
        }
        int area(int len, int breath){
            return len*breath;
        }
        float area(float rad){
            return 3.14*rad*rad;
        }
};
int main(){
    Overloading obj1;
    int sq,rec;
    float cir;
    cout<<"Area of Square: ";
    sq=obj1.area(5);
    cout<<sq<<endl;
    cout<<"Area of Rectangle: ";
    rec=obj1.area(10,12);
    cout<<rec<<endl;
    cout<<"Area of Circle: ";
    cir=obj1.area(4);
    cout<<cir<<endl;
}
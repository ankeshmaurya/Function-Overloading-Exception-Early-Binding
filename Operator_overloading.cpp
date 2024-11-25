// You are using GCC
#include<iostream>
using namespace std;
class Complex{
    float x,y;
    public:
        Complex(){
            x=0;
            y=0;
        }
        Complex(float real,float img){
            x=real;
            y=img;
        }
        Complex operator+(Complex obj){
            Complex temp;
            temp.x=x+obj.x;
            temp.y=y+obj.y;
            return temp;
        }
        void show_data(){
            cout<<x<<" "<<y<<endl;
        }
};
int main(){
    Complex o1(2.7,3.4),o2(4.1,5.1),o3;
    o3=o1+o2;
    o3.show_data();
}
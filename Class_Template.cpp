// You are using GCC
// #include <iostream>
// using namespace std;
// template<class N>
// class temp{
//     N x,y;
//     public:
//         temp(N a, N b){
//             x=a;
//             y=b;
//         }
//         N max1(){
//             return (x>y?x:y);
//         }
// };
// int main(){
//     temp<int>obj(10,20);
//     cout<<obj.max1()<<endl;
//     temp<float>obj1(10.5,20.8);
//     cout<<obj1.max1()<<endl;
//     temp<char>obj2('A','a');
//     cout<<obj2.max1();
// }






// You are using GCC
#include <iostream>
using namespace std;
template<class T>
class temp{
    T *a;
    int size;
    public:
        temp(){
            cin>>size;
            a=new T[size];
            for(int i=0;i<size;i++){
                cin>>a[i];
            }
        }
        T sum1(){
            T sum=0;
            for(int i=0;i<size;i++){
                sum=sum+a[i];
            }
            return sum;
            
        }
};
int main(){
    temp<int>obj;
    cout<<obj.sum1()<<endl;
   
} // temp<float>obj1;
    // cout<<obj1.sum1()<<endl;
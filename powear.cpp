#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int number,powear,result=1;//you find the big number in using another data type like long long int
    cout<<"Enter two number base and powear and find ans :-  ";
    cin>>number>>powear;
    result=pow(number,powear);
    cout<<"Ans is: "<<result;
    return 0;
}

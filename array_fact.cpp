#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int fact = 1;
    for(int i =0; i<5; i++){
        fact *= arr[i];
    }cout<<"The factorial is : "<< fact <<endl;
}

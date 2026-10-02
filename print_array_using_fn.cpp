#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int index = 0; index < size; index++){
        cout<<arr[index]<<" ";
    }
}
int main(){
    int arr[4] = {10,20,30,40};
    printArray(arr,4);
}

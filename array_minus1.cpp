#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i =0;i < size; i++){
        arr[i] = -1;
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[10];
    printArray(arr,10);
}

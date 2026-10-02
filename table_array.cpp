#include<iostream>
using namespace std;
void printTable(int arr[],int n){
    for(int i = 0;i<10;i++){
        arr[i] = n * (i+1);
        cout<<arr[i]<<endl;   
    }
}
int main(){
    int n;
    int arr[10];
    cout<<"Enter a number: ";
    cin>>n;
    printTable(arr,n);
    
    return 0;
}


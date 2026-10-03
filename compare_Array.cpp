#include<iostream>
using namespace std;
int getLength(char arr[]){
    int count = 0;
    int index = 0;
    while(arr[index] != '\0'){
        count++;
        index++;
    }return count;
}
bool compareArray(char a[],char b[]){
    int aIndex = 0;
    int bIndex = 0;
    int aLength = getLength(a);
    while(aIndex <= aLength){
        if(a[aIndex] != b[bIndex]){
            return false;
        }else{
            aIndex++;
            bIndex++;
        }
    }return true;
}
int main(){
    char arr[] = "Ankit";
    char brr[] = "Ankit";
    cout<<compareArray(arr,brr)<<endl;
}

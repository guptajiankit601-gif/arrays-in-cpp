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
void concatArray(char a[],char b[]){
    int aIndex = getLength(a);
    int bIndex = 0;
    while(b[bIndex] != '\0'){
        a[aIndex] = b[bIndex];
        aIndex++;
        bIndex++;
    }a[aIndex] = '\0';
}
int main(){
    char a[100] = "Ankit";
    char b[100] = " Gupta";
    concatArray(a,b);
    cout<<"Printing a :"<< a << endl;
}

#include<iostream>
using namespace std;
void copyArr(char actualArr[],char copyArr[]){
    int aIndex = 0;
    int bIndex = 0;
    while(actualArr[aIndex] != '\0'){
        copyArr[bIndex] = actualArr[aIndex];
        aIndex++;
        bIndex++;
    }copyArr[bIndex] = '\0';
}
int main(){
    char actual[100] = "Ankit";
    char ans[100];
    copyArr(actual,ans);
    cout<<"Printing ans array : "<<ans<<endl;
}

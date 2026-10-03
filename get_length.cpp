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
int main(){
    char ch[10] = "Ankit";
    cout<<getLength(ch);
}

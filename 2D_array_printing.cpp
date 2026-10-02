#include<iostream>
using namespace std;
int main(){
    int arr[3][4] = {{10,20,30,40,},
                    {21,22,23,24},
                    {31,32,33,34}};
    int row = 3;
    int col = 4;
    for(int row_index = 0; row_index<= row-1 ;row_index++){
        for(int col_index = 0; col_index<= col-1 ;col_index++){
            cout<<arr[row_index][col_index]<<" ";
        }cout<<endl;

    }
}

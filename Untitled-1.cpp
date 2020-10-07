#include<iostream>
using namespace std;

void cout_arr (int*& arr, int& size){
    for(int q = 0; q < size; ++q){
        cout << arr[q] << " ";
    }
    cout << endl;
} 

int main() {
    cout<<"Hello\tWorld!!!\n";

    int size = 10;
    int* arr = new int[size];
}
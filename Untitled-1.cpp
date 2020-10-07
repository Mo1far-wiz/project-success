#include<iostream>
using namespace std;

void fill_arr(int*& arr, int size ) {
    for(int i = 0;i<size;i++){
        arr[i] = rand()%50;
    }
}

int main() {
    cout<<"Hello\tWorld!!!\n";
}
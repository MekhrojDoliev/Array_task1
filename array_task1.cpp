#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int max_item; 
int counter = 0;
int arr1[] = {1, 4, 3, 2, 5, 6, 7, 8};
int arrSize = sizeof(arr1)/sizeof(arr1[0]);

int *arr2 = new int(arrSize-2);
for (int i=0; i<8; i++){
    if(arrSize>i+2){
    max_item=max({arr1[i], arr1[i+1], arr1[i+2]});
    
    arr2[counter] = max_item;
    counter++;
    }
}
    
for (int i=0;i<arrSize-2;i++){
    cout << arr2[i] << " ";   
    }
    return 0;
    }

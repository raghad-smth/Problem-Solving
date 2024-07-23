#include <iostream>
#include <vector>
using  namespace std;

template <class T >
// Function to look for the minimum element in the array starting form a given index
T findMin (vector <T> data, int n,int start){
    T min = data[start];
    for(int i=start; i<n; i++){
        if (data[i] < min){
            min = data[i];
        }
    }
    return min;
}

template <class T >
// Function to look for the index of an element in a given data
int indexOf(vector <T> data, int n, T val){
    int indx;
    for(int i=0; i<n; i++){
        if (data[i] == val){
             indx = i;
        }
    }
    return indx;
}


template <class T >
void SelectionSort(vector <T> &data, int n){
     for(int i=0; i<n; i++) {
         // Finding the minimum element in the un sorted array
         T min = findMin(data, n, i);
         // Getting the minimum's index to swap it
         int index = indexOf(data, n, min);
         swap(data[index],data[i]);
     }


}








// int main() {

//     return 0;
// }

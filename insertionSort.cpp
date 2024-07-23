#include <iostream>

using namespace std;

template <class T>
void  InsertionSort(vector <T> &data, int n ){

    // start the sort from the second element in the array
    for (int i=1; i<n ;i++ ){
        // compare each element with all the other elements
        for(int j=i-1; j>=0; j--) {
         // inserting the selected element in it's right place (all the elements that are less on it's left and
         // all the elements that are greater to it's right )
            if (data[i] < data[j]) {
                swap(data[i], data[j]);
                i--;
            }
        }
    }

}



// int main() {

//     return 0;
// }

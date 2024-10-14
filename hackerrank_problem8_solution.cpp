// An array is a series of elements of the same type placed in contiguous memory locations that can be individually referenced by adding an index to a unique identifier.
// Print the N integers of the array in the reverse order, space-separated on a single line.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=n-1; i>=0; i--){
        cout << arr[i] << " ";
    }
}
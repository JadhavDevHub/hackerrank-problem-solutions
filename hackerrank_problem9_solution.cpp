// Consider an -element array, , where each index  in the array contains a reference to an array of  integers (where the value of  varies from array to array). See the Explanation section below for a diagram.
// Given , you must answer  queries. Each query is in the format i j, where  denotes an index in array  and  denotes an index in the array located at . For each query, find and print the value of element  in the array at location  on a new line.


#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    
    vector<vector<int>>arr(n);
    
    
     for(int i=0; i<n; i++){
        int k;
        cin >> k;
        arr[i].resize(k);
        
        for(int j=0; j<k; j++){
            cin >> arr[i][j];
        } 
     } 
     
     for(int i=0; i<q; i++){
         int a,b;
         cin>>a>>b;
         cout << arr[a][b] << endl;
     }
}


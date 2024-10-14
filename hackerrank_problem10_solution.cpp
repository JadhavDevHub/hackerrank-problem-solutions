// C++ provides a nice alternative data type to manipulate strings, and the data type is conveniently called string. Some of its widely used features are the following:

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
     string A, B;
     cin >> A >> B;
     
     cout << A.size() << " " << B.size() << endl;
     
     cout << A + B << endl;
     
     char temp = A[0];
     A[0] = B[0];
     B[0] = temp;
     
     cout << A << " " << B << endl;
    return 0;
}
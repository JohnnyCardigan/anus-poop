#include <iostream>
using namespace std;

main() {
    // declare myarray as a double pointer
    double *myarray;
    int arrayLength;
    std::cin >> arrayLength;
    std::cout << arrayLength << std::endl;
    // allocate 10 blocks holding doubles
    myarray = (double*)malloc( sizeof(double)*arrayLength );
    
    // Set the i-th entry of myarray to i
    for(int i = 0; i < arrayLength; i++){
        myarray[i] = 2*i;
    }
    
    // print myarray
    for(int i = 0; i < arrayLength; i++){
        std::cout << *(myarray + i) << std::endl;
        std::cout << myarray[i] << std::endl;
    }
}

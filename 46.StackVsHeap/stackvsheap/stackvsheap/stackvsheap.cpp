#include <iostream>

int main()
{
    //Using Stack
    int value = 5;
    int arr[5];
    

    //using Heap
    int* hvalue = new int;
    *hvalue = 5;
    int* harr = new int[5];



    delete hvalue;
    delete harr;


    std::cin.get();
}


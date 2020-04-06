#include<iostream>
using namespace std;

int main(){

    int number=10;

    do{
        cout << "Now it will execute";
    }while(number>10);
    /* Here, the block of do-while will execute at least once, then condition is checked.
    SO, here the cout statement will execute once & then when execution comes in while's'
    condition then the execution of do-while will be stopped*/

    return 0;
}


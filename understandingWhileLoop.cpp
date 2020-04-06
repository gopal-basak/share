#include<iostream>
using namespace std;

int main(){

    int number=10;

    while(number>10){
        cout << "It will not be executed";
    }
    /* Here, we have assigned value of number is 10, now in while's condition we have given if
    number is less than 10 then it will be executed. But as before entry in the loop condition
    checked(entry-controlled loop), so block of while will not execute*/

    return 0;
}

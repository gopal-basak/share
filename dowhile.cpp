#include<iostream>
using namespace std;

int main(){

    int i=1;
    do{
        i++;
        cout << i << " ";
        /* this code is similar like previous one(while). same condition, just
        difference is in do-while structure & here i have used i++ before printing
        vlaues. So, before printing value, value of i will be incremented by 1 &
        then printing of value. SO, here output will be from 2(1+1) to 10(9+1)*/

    }while(i<10);

    return 0;
}


#include<stdio.h>
#include<string.h>

int main(){

    char name[20];
    char search_element;
    char change_element;
    int count=0;
    int find=0;
    printf("Enter a string: ");
    gets(name);

    printf("Enter which element you want to search: ");
    scanf(" %c",&search_element);
    printf("Enter new element: ");
    scanf(" %c",&change_element);

    while(name[count]!='\0'){ // interate untill reach end of the string

        if(name[count]==search_element){ // if seraching element is found in string then enters in 'if'

            name[count]=change_element; //changing searched element with new elelment
            find++;
        }
        count++;
    }

    if(find==0)
        printf("Searching element is not present in the string");
    else
        printf("New string: %s",name);
}

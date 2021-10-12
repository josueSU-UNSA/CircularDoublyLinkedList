#include<iostream>
#include <conio.h>
#include "CircularDoublyLinkedList.h"
using namespace std;
int main(){
    CircularDoublyLinkedList<int>testList;
    CircularDoublyLinkedList<int>testList2;
    for(int i=1;i<11;i++)
        testList.pushBack(i);
    for(int i=1;i<11;i++)
        testList2.pushFront(i);
    cout<<"Lista 1 "<<endl;
    testList.print();
    cout<<"Borrando al primer elemento"<<endl;
    testList.popFront();
    testList.print();
    cout<<"Borrando al ultimo elemento"<<endl;
    testList.popBack();
    testList.print();
    cout<<"Lista 2 "<<endl;
    testList2.print();
    cout<<"Borrando al primer elemento"<<endl;
    testList2.popFront();
    testList2.print();
    cout<<"Borrando al ultimo elemento"<<endl;
    testList2.popBack();
    testList2.print();
    getch();
    return 0;
}
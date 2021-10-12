#include<iostream>
using namespace std;
template<typename T>
class Node{
    public:
        T value;
        Node<T>*m_pSig;
        Node<T>*m_pPrev;
    public:
        Node(T value){
            this->value=value;
            this->m_pSig=0;
            this->m_pPrev=0;
        }
};
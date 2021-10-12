#include<iostream>
#include "Node.h"
using namespace std;
template<typename T>
class CircularDoublyLinkedList{
    private:
        Node<T>*m_pHead;
        Node<T>*m_pLast;
        int longitud;
    public:
        CircularDoublyLinkedList(){
            this->m_pHead=0;
            this->m_pLast=0;
            this->longitud=0;
        }
        void pushBack(T value){
            if(!this->m_pHead){
                this->m_pHead=new Node<T>(value);
                this->m_pHead->m_pSig=this->m_pHead;
                this->m_pHead->m_pPrev=this->m_pHead;
                this->m_pLast=this->m_pHead;
                this->longitud++;
                return;
            }
            this->m_pLast->m_pSig=new Node<T>(value);
            this->m_pLast->m_pSig->m_pPrev=this->m_pLast;
            this->m_pLast=this->m_pLast->m_pSig;
            this->m_pLast->m_pSig=this->m_pHead;
            this->m_pHead->m_pPrev=this->m_pLast;
            this->longitud++;
        }
        void popBack(){
            if(!this->m_pHead)return;
            if(this->m_pHead->m_pSig==this->m_pHead){
                delete this->m_pHead;
                this->m_pHead=0;
                this->m_pLast=this->m_pHead;
                this->longitud--;
                return;
            }
            this->m_pLast=this->m_pLast->m_pPrev;
            delete this->m_pLast->m_pSig;
            this->m_pLast->m_pSig=this->m_pHead;
            this->m_pHead->m_pPrev=this->m_pLast;
            this->longitud--;
        }
        void pushFront(T value){
            if(!this->m_pHead){
                this->m_pHead=new Node<T>(value);
                this->m_pHead->m_pSig=this->m_pHead;
                this->m_pHead->m_pPrev=this->m_pHead;
                this->m_pLast=this->m_pHead;
                this->longitud++;
                return;
            }
            this->m_pHead->m_pPrev=new Node<T>(value);
            this->m_pHead->m_pPrev->m_pSig=this->m_pHead;
            this->m_pHead=this->m_pHead->m_pPrev;
            this->m_pHead->m_pPrev=this->m_pLast;
            this->m_pLast->m_pSig=this->m_pHead;
            this->longitud++;
        }
        void popFront(){
            if(!this->m_pHead)return;
            if(this->m_pHead->m_pSig==this->m_pHead){
                delete this->m_pHead;
                this->m_pHead=0;
                this->m_pLast=this->m_pHead;
                this->longitud--;
                return;
            }
            this->m_pHead=this->m_pHead->m_pSig;
            delete this->m_pHead->m_pPrev;
            this->m_pHead->m_pPrev=this->m_pLast;
            this->m_pLast->m_pSig=this->m_pHead;
            this->longitud--;
        }
        void print(){
            if(!this->m_pHead)return;
            Node<T>*pAux=this->m_pHead;
            do
            {
                cout<<pAux->value<<" -> ";
                pAux=pAux->m_pSig;
            } while (pAux!=this->m_pHead);
            cout<<endl;
        }

};
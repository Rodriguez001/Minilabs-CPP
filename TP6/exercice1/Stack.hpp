#pragma once
#include <iostream>
using namespace std;
 
template <typename T>
class Stack
{
    
    typedef struct pile
    {
        T Item;                 
        struct pile *Next; 
    } Pile;

    Pile *Tete;
 
public:         
    Stack();
    Stack(const Stack<T> &pile);               
    Stack<T> &operator=(const Stack<T> &pile);
    void push(T);
    void pop();
    unsigned int size() const ;
    T peek();
    bool empty() const;
    void flush();
    ~Stack();
};
 
 
template <typename T>
Stack<T>::Stack() {
    Tete = NULL;
    
}
 
template <typename T>
Stack<T>::Stack(const Stack<T> &pile)
{
    Tete = NULL;
    Pile *tmp1 = pile.Tete, *tmp2 = NULL;
    while (tmp1!=NULL)
    {
        if (tmp2==NULL)
        {
            Tete= new Pile;
            tmp2 = Tete;
        }
        else
        {
            tmp2->Next = new Pile;
            tmp2 = tmp2->Next;
        }
        tmp2->Item = tmp1->Item;
        tmp1 = tmp1->Next;
    }
    if (tmp2!=NULL) tmp2->Next = NULL;
    return;
}
 
template <typename T>
Stack<T>::~Stack(void)
{
    flush();
}
 
template <typename T>
Stack<T> &Stack<T>::operator=(const Stack<T> &pile)
{
    flush();
    Pile *tmp1 = pile.Tete, *tmp2 = NULL;
 
    while (tmp1!=NULL)
    {
        if (tmp2==NULL)
        {
            Tete = new Pile;
            tmp2 = Tete;
        }
        else
        {
            tmp2->Next = new Pile;
            tmp2 = tmp2->Next;
        }
        tmp2->Item = tmp1->Item;
        tmp1 = tmp1->Next;
    }
    if (tmp2!=NULL) tmp2->Next = NULL;
    return *this;
}
 
template <typename T>
void Stack<T>::push(T Item)
{
    Pile *tmp = new Pile;
    tmp->Item = Item;
    tmp->Next = Tete;
    Tete = tmp;
    return;
}
 
template <typename T>
void Stack<T>::pop()
{
    Pile *ptmp = Tete;
 
    if (Tete!=NULL)
    {
        Tete = Tete->Next;
        delete ptmp;
    }
    //return tmp;
}
template <typename T>
T Stack<T>::peek(void)
{
    if (Tete!=NULL)
    {
       return Tete->Item;
    }  
    throw out_of_range("pile vide");
}
 
template <typename T>
bool Stack<T>::empty(void) const
{
    return (Tete==NULL);
}
 
template <typename T>
void Stack<T>::flush(void)
{
    while (Tete!=NULL) pop();
    
}

template <typename T>
unsigned int Stack<T>::size() const
{   unsigned int i = 0;
     Pile *ptmp = Tete;
    while (ptmp!=NULL) {
        i++;
        ptmp = ptmp->Next;
    }
    return i;
}
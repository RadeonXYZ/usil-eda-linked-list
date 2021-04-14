#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

// #include
// #include <vector>
// using namespace std;

template <typename T>
//by jose terrones
class Node
{
  private:
    //Declarar punteros
    T Data
    Node *next;
    Node *prev;
  public:
}

template <typename T>
class LinkedList
{
  private:
  // TM tamaño maximo, TA tamaño actual
    T TA; 
    T TM;
  // members here
  public:
    T front(); // Retorna el elemento al comienzo
    T back(); // Retorna el elemento al final
    void push_front(T); // Agrega un elemento al comienzo 
    void push_back(T); // Agrega un elemento al final
    void pop_front(); // Remueve el elemento al comienzo
    void pop_back(); // Remueve el elemento al final
    T operator[](int); // Retorna el elemento en la posición indicada
    bool empty(); // Retorna si la lista está vacía o no
    int size(); // Retorna el tamaño de la lista 
    void clear(); // Elimina todos los elementos de la lista
    void sort(); // Ordena la lista
    void reverse(); // Revierte la lista
};

// Comments #2
template <typename T>
void LinkedList<T>::front(T &elem)
{

}
template <typename T>
void LinkedList<T>::push_front(T);

// 
template <typename T>
//by jose terrones
bool LinkedList<T>::empty()
  {
    //Si el TA es cero da verdadero
    return (TA == 0);
  }
template <typename T>
T LinkedList<T>::size()
  {
    //retorna valor maximo
    return TM;
  }

// Comments #3
template <typename T>
T LinkedList<T>::back()
{

}

#endif

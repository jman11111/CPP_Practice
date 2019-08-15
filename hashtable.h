#include "hashnode.cpp"
#include <iostream>
#include <cstddef>

//template for generic type
template <typename K, typename V>

class hashtable
{
    //hash element array
    hashnode<K, V> **arr;
    int capacity;
    //current size
    int size;
    //dummy node
    hashnode<K, V> *dummy;

public:
    hashtable()
    {
        //Initial capacity of hash array
        capacity = 20;
        size = 0;
        arr = new hashnode<K, V> *[capacity];

        //Initialise all elements of array as NULL
        for (int i = 0; i < capacity; i++)
            arr[i] = NULL;

        //dummy node with value and key -1
        dummy = new hashnode<K, V>(-1, "null");
    }
    int hashCode(K key);
    void insertNode(K key, V value);
    V deleteNode(int key);
    V get(int key);
    int sizeofMap();
    bool isEmpty();
    void display();
};
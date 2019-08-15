#include "hashtable.h"

template <typename K, typename V>

int hashtable<K, V>::hashCode(K key)
{
    return key % capacity;
}

template <typename K, typename V>
//Function to add key value pair
void hashtable<K, V>::insertNode(K key, V value)
{
    hashnode<K, V> *temp = new hashnode<K, V>(key, value);

    // Apply hash function to find index for given key
    int hashIndex = hashCode(key);

    //find next free space
    while (arr[hashIndex] != NULL && arr[hashIndex]->key != key && arr[hashIndex]->key != -1)
    {
        hashIndex++;
        hashIndex %= capacity;
    }

    //if new node to be inserted increase the current size
    if (arr[hashIndex] == NULL || arr[hashIndex]->key == -1)
        size++;
    arr[hashIndex] = temp;
}

template <typename K, typename V>
//Function to delete a key value pair
V hashtable<K, V>::deleteNode(int key)
{
    // Apply hash function to find index for given key
    int hashIndex = hashCode(key);

    //finding the node with given key
    while (arr[hashIndex] != NULL)
    {
        //if node found
        if (arr[hashIndex]->key == key)
        {
            hashnode<K, V> *temp = arr[hashIndex];

            //Insert dummy node here for further use
            arr[hashIndex] = this.dummy;

            // Reduce size
            size--;
            return temp->value;
        }
        hashIndex++;
        hashIndex %= capacity;
    }

    //If not found return null
    return NULL;
}

template <typename K, typename V>
//Function to search the value for a given key
V hashtable<K, V>::get(int key)
{
    // Apply hash function to find index for given key
    int hashIndex = hashCode(key);
    int counter = 0;
    //finding the node with given key
    while (arr[hashIndex] != NULL)
    {
        int counter = 0;
        if (counter++ > capacity) //to avoid infinite loop
            return NULL;
        //if node found return its value
        if (arr[hashIndex]->key == key)
            return arr[hashIndex]->value;
        hashIndex++;
        hashIndex %= capacity;
    }

    //If not found return null
    return NULL;
}

template <typename K, typename V>
//Return current size
int hashtable<K, V>::sizeofMap()
{
    return size;
}

template <typename K, typename V>
//Return true if size is 0
bool hashtable<K, V>::isEmpty()
{
    return size == 0;
}

template <typename K, typename V>
//Function to display the stored key value pairs
void hashtable<K, V>::display()
{
    for (int i = 0; i < capacity; i++)
    {
        if (arr[i] != NULL && arr[i]->key != -1)
            cout << "key = " << arr[i]->key
                 << "  value = " << arr[i]->value << endl;
    }
}

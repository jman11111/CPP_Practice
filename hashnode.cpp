//hastable implementation from https://www.geeksforgeeks.org/implementing-hash-table-open-addressing-linear-probing-cpp/

using namespace std;

//template for generic type
template <typename K, typename V>

//Hashnode class
class hashnode
{
public:
    V value;
    K key;

    //Constructor of hashnode
    hashnode(K key, V value)
    {
        this->value = value;
        this->key = key;
    }
};

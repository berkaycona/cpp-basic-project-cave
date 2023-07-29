//#pragma warning(disable : 4996)
////Cpp Comprehensive PT IV - quadraticProbing
//
//#include <iostream>
//#include <vector>
//
//class HashMap {
//private:
//    struct HashNode {
//        int key;
//        int value;
//        bool deleted;
//
//        HashNode() : key(0), value(0), deleted(false) {}
//        HashNode(int k, int v) : key(k), value(v), deleted(false) {}
//    };
//
//    std::vector<HashNode> table;
//    int capacity;
//    int size;
//
//    int getHash(int key) const {
//        return key % capacity;
//    }
//
//    int quadraticProbe(int hash_val, int i) const {
//        return (hash_val + i * i) % capacity;
//    }
//
//    void resize() {
//        int newCapacity = capacity * 2;
//        std::vector<HashNode> newTable(newCapacity);
//
//        for (const auto& node : table) {
//            if (!node.deleted) {
//                int hash_val = getHash(node.key);
//                int i = 0;
//
//                while (!newTable[hash_val].deleted && i < newCapacity) {
//                    hash_val = quadraticProbe(getHash(node.key), i);
//                    i++;
//                }
//
//                newTable[hash_val] = node;
//            }
//        }
//
//        table = std::move(newTable);
//        capacity = newCapacity;
//    }
//
//public:
//    HashMap() : capacity(8), size(0), table(8) {}
//
//    void insert(int key, int value) {
//        if (size >= capacity / 2) {
//            resize();
//        }
//
//        int hash_val = getHash(key);
//        int i = 0;
//
//        while (!table[hash_val].deleted && table[hash_val].key != key && i < capacity) {
//            hash_val = quadraticProbe(getHash(key), i);
//            i++;
//        }
//
//        if (table[hash_val].deleted || i >= capacity) {
//            size++;
//        }
//
//        table[hash_val].key = key;
//        table[hash_val].value = value;
//        table[hash_val].deleted = false;
//    }
//
//    bool find(int key, int& value) const {
//        int hash_val = getHash(key);
//        int i = 0;
//
//        while (!table[hash_val].deleted) {
//            if (table[hash_val].key == key) {
//                value = table[hash_val].value;
//                return true;
//            }
//
//            hash_val = quadraticProbe(getHash(key), i);
//            i++;
//
//            if (i >= capacity) {
//                break;
//            }
//        }
//
//        return false;
//    }
//
//    void remove(int key) {
//        int hash_val = getHash(key);
//        int i = 0;
//
//        while (!table[hash_val].deleted) {
//            if (table[hash_val].key == key) {
//                table[hash_val].deleted = true;
//                size--;
//                return;
//            }
//
//            hash_val = quadraticProbe(getHash(key), i);
//            i++;
//
//            if (i >= capacity) {
//                break;
//            }
//        }
//    }
//};
//
//int main() {
//    HashMap hashMap;
//
//    hashMap.insert(1, 42);
//    hashMap.insert(2, 78);
//    hashMap.insert(7, 91);
//
//    int value;
//    if (hashMap.find(2, value))
//        std::cout << "Value at key 2: " << value << std::endl; // Output: Value at key 2: 78
//    else
//        std::cout << "Key 2 not found." << std::endl;
//
//    hashMap.remove(1);
//
//    if (hashMap.find(1, value))
//        std::cout << "Value at key 1: " << value << std::endl; // This will not be printed as the key was removed.
//
//    return 0;
//}

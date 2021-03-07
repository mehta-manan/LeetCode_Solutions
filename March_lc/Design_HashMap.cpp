#include <iostream>
#include <vector>

using std::vector;

struct Map
{
    int key;
    int value;
};

class MyHashMap
{
public:
    /** Initialize your data structure here. */
    Map my_map;
    vector<Map> my_maps;

    MyHashMap()
    {
        my_map.key = 0;
        my_map.value = 0;
    }

    /** value will always be non-negative. */
    void put(int key, int value)
    {
        if (value >= 0)
        {
            for (int i = 0; i < my_maps.size(); i++)
            {
                if (my_maps[i].key == key)
                {
                    my_maps[i].value = value;
                    return;
                }
            }
            Map m;
            m.key = key;
            m.value = value;
            my_maps.push_back(m);
        }
    }

    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key)
    {
        for (int i = 0; i < my_maps.size(); i++)
        {
            if (my_maps[i].key == key)
            {
                return my_maps[i].value;
            }
        }
        return -1;
    }

    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key)
    {
        for (auto it = my_maps.begin(); it != my_maps.end(); it++)
        {
            if (it->key == key)
            {
                my_maps.erase(it);
                break;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
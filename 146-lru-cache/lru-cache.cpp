class LRUCache {
public:
    int cap;
    list<pair<int, int>> lruList; // front = most recent, back = least
    unordered_map<int, list<pair<int, int>>::iterator> cache;

    LRUCache(int capacity) {
        cap = capacity;
    }

    int get(int key) {
        if (cache.find(key) == cache.end()) {
            return -1; // key not found
        }

        // Move the accessed item to the front (most recently used)
        auto node = cache[key];
        int value = node->second;
        lruList.erase(node);
        lruList.push_front({key, value});
        cache[key] = lruList.begin();
        return value;
    }

    void put(int key, int value) {
        if (cache.find(key) != cache.end()) {
            // Key exists: remove old node
            lruList.erase(cache[key]);
        } else if (lruList.size() >= cap) {
            // Cache full: remove least recently used from back
            auto lru = lruList.back();
            cache.erase(lru.first);
            lruList.pop_back();
        }

        // Insert new node at front
        lruList.push_front({key, value});
        cache[key] = lruList.begin();
    }
};

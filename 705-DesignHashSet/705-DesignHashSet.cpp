// Last updated: 4/4/2026, 9:48:24 PM
1class MyHashSet {
2private:
3    static const int size = 1000;
4    vector<vector<int>> buckets;
5
6public:
7    MyHashSet() { buckets.resize(size); }
8
9    int hash(int key) { return key % size; }
10
11    void add(int key) {
12        int index = hash(key);
13
14        // Check if already exists
15        for (int num : buckets[index]) {
16            if (num == key)
17                return;
18        }
19
20        buckets[index].push_back(key);
21    }
22
23    void remove(int key) {
24        int index = hash(key);
25        auto& bucket = buckets[index];
26
27        for (int i = 0; i < bucket.size(); i++) {
28            if (bucket[i] == key) {
29                bucket.erase(bucket.begin() + i);
30                return;
31            }
32        }
33    }
34
35    bool contains(int key) {
36        int index = hash(key);
37
38        for (int num : buckets[index]) {
39            if (num == key)
40                return true;
41        }
42
43        return false;
44    }
45};
46
47/**
48 * Your MyHashSet object will be instantiated and called as such:
49 * MyHashSet* obj = new MyHashSet();
50 * obj->add(key);
51 * obj->remove(key);
52 * bool param_3 = obj->contains(key);
53 */
class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        map<string, int> hashmap;
        hashmap["Character"] = 1;
        hashmap["Integer"] = 4;
        hashmap["Long"] = 8;
        hashmap["Float"] = 4;
        hashmap["Double"] = 8;
        return hashmap[str];
    }
};

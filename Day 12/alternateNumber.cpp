vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    int n = a.size();

    vector<int> pos;
    vector<int> neg;
    vector<int> result;

    for(int i = 0;i < n;i++){
        if(a[i] > 0) pos.push_back(a[i]);
        else neg.push_back(a[i]);
    }

    int i = 0, j = 0;
    while(i < pos.size() && j < neg.size()){
        result.push_back(pos[i]);
        result.push_back(neg[j]);
        i++;j++;
    }

    // print remaining elements in pos vector, if any
    while(i < pos.size()){
        result.push_back(pos[i]);
        i++;
    }

    // print remaining elements in neg vector, if any
    while(j < neg.size()){
        result.push_back(neg[j]);
        j++;
    }


    return result;
}

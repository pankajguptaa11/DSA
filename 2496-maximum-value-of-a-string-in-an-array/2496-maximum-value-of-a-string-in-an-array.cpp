class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int max = 0;
	    for (int i = 0; i < strs.size(); i++) {
	    	string text = "1" + strs[i]; // add a 1 in the beginning to handle cases that starts with 0's
	    	double value1 = stod(text + "0");
	    	double value2 = stod(text) * 10;
	    	if (value1 == value2) {
	    		// integer
	    		int value = stoi(strs[i]);
	    		max = (max < value ? value : max);
	    	}
	    	else {
	    		// string
	    		int length = strs[i].length();
	    		max = (max < length ? length : max);
	    	}
	    }
	    return max;
    }
};
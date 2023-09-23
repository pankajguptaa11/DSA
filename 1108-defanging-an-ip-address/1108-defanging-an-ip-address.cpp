class Solution {
public:
    string defangIPaddr(string address) {
        string defanged_address;

        for (size_t i = 0; i < address.size(); i++) {
            if (address[i] == '.') {
                defanged_address += "[.]";
            } else {
                defanged_address += address[i];
        }
    }

    return defanged_address;
    }
};
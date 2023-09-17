class Solution {
typedef double ld;
public:
    vector<double> convertTemperature(ld celsius) {
        return vector<ld>({celsius+ld(273.15), (celsius*ld(1.80))+ld(32.00)});
    }
};
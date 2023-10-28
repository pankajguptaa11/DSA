class Solution {
public:
    int findPattern( string s ){

        bool hasDigit = false ;
        bool hasChar = false ;
        int maxVal = 0;

        for( int i=0 ; i<s.size() ; i++ ){

            if( s[i]-'0' >= 49 ) hasChar = true ;
            else if( s[i]-'0'>=0 && s[i]-'0' <= 9 ){
                hasDigit = true ;
                maxVal = maxVal*10 + s[i]-'0';
            }
        }

        if( hasDigit && hasChar ) return s.size() ;
        else if( !hasDigit && hasChar ) return s.size() ;

        return maxVal ;
    }

    int maximumValue(vector<string>& strs) {
        int ans = 0 ;
        vector<int> v(strs.size() );
        
        for( int i=0 ; i<strs.size() ; i++ ){
            
            v[i] = findPattern( strs[i] );
        }

        for( auto it : v ){
            ans = max( ans, it );
        }

        return ans ;
    }
};
int maximum69Number (int num) {
        string s = to_string(num) ; 
        for(int i = 0 , f = 0 ; i < s.size() && f < 1;i++){
            if(s[i] == '6'){
                s[i] = '9';
                f++;
            }
        }
        int u = stoi(s);
        return u ; 
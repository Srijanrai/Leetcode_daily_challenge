string makeGood(string s) {
        int f = 0 ; 
        int n = s.size();
        string r = "" ;
        while(1)
        {
            r = "" ; f=0;
            for(int i = 0 ; i < n; i++)
            {
                if(i+1 < n && s[i] != s[i+1]){
                char c = s[i] ; 
                c = toupper(c);
                    char c1 = s[i] ; 
                    c1 = tolower(c1);
                char d = s[i+1] ; 
                    d = toupper(d);
                if( i+1 < n && s[i+1] == c || s[i+1] == c1)
                {
                    i++; f=1 ; continue; 
                }
                }
                r += s[i]  ;
            }
            s = r ; 
            n = s.size();
            if(f==0)break;
        }
        return r ; 
        }
class Solution {
public:
    string simplifyPath(string path) {
        int l = path.length();
        stack<char> s;
        int p =0;
        for(int i=0; i<l; i++)
        {
            if(s.empty()) 
            {
                s.push(path[i]);
                continue;
            }


            if(path[i] == '.') {p++; continue;}
            else if(path[i] == '/')
            {
                if(p==1)
                {
                    if(s.top() != '/')
                    {
                        s.push('.'); 
                    }
                }
                if(p==2) 
                {
                    if(s.top() == '/') {
                    s.pop();
                        if(!s.empty())
                        {
                            while(s.top() != '/')
                            {
                                s.pop();
                            }
                        }

                    }
                    else
                        {
                            
                            s.push('.');
                            s.push('.');
                        }


                }
                if(p>2)
                {
                    while(p!=0)
                    {
                        s.push('.');
                        p--;
                    }
                }
                p=0;
            }
            else
            {
                    while(p!=0)
                    {
                        s.push('.');
                        p--;
                    }

            }
            if(!s.empty()) {if(s.top() == '/' && path[i] == '/') continue;}
            s.push(path[i]);
        }

                if(p==1)
                {
                    if(s.top() != '/')
                    {
                        s.push('.'); 
                    }
                }
                if(p==2) 
                {
                    if(s.top() == '/') {
                    s.pop();
                        if(!s.empty())
                        {
                            while(s.top() != '/')
                            {
                                s.pop();
                            }
                        }

                    }
                    else
                        {
                            
                            s.push('.');
                            s.push('.');
                        }


                }
                if(p>2)
                {
                    while(p!=0)
                    {
                        s.push('.');
                        p--;
                    }
                }
                p=0;
        if(!s.empty()) {if(s.top() == '/') s.pop();}
        if(s.empty()) s.push('/');
        string ss;



        while(!s.empty())
        {
            char c = s.top();
            s.pop();
            ss += c;
        }

        reverse(ss.begin(), ss.end());
        return ss;

    }
};

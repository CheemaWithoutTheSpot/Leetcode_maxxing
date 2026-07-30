class Solution {
public:
    bool isValid(string s) {
        vector<char> lakjsfglkajhsfglkhasfglkhasfglkhasgf;
        int size = s.length();
        lakjsfglkajhsfglkhasfglkhasfglkhasgf.push_back('0');

        for(int i=0; i<size; i++)
        {
            if(s[i] == '[' || s[i] == '(' || s[i] == '{')
                lakjsfglkajhsfglkhasfglkhasfglkhasgf.push_back(s[i]);
           
            if(s[i] == ']')
            {
                if(lakjsfglkajhsfglkhasfglkhasfglkhasgf.back() != '[') return false;
                lakjsfglkajhsfglkhasfglkhasfglkhasgf.pop_back();
            }

            if(s[i] == ')')
            {
                if(lakjsfglkajhsfglkhasfglkhasfglkhasgf.back() != '(') return false;
                lakjsfglkajhsfglkhasfglkhasfglkhasgf.pop_back();
            }

            if(s[i] == '}')
            {
                if(lakjsfglkajhsfglkhasfglkhasfglkhasgf.back() != '{') return false;
                lakjsfglkajhsfglkhasfglkhasfglkhasgf.pop_back();

            }


            
        }
        if(lakjsfglkajhsfglkhasfglkhasfglkhasgf.back() != '0') return false;
        return true;

    }
};

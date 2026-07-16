class Solution {
public:
    string addBinary(string a, string b) {
        if (a.length() < b.length()) a = string(b.length() - a.length(), '0') + a;
        else if (b.length() < a.length()) b = string(a.length() - b.length(), '0') + b;
        char res;
        string ress;
        int length = a.length();
        char c='0';
        for(int i=length-1; i>=0; i--)
        {
            if(a[i]==b[i]) res ='0';
            else res = '1';

            if(res == c) ress += '0';
            else ress += '1';

            if((a[i] == b[i] && a[i] == '1') || (res == c && res == '1')) c = '1';
            else c='0';
        }
        if(c=='1')
        {
            ress += c;
        }

        reverse(ress.begin(), ress.end());

        return ress;
    }
};

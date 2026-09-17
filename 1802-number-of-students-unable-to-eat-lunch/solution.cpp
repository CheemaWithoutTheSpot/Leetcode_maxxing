class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> s;
        queue<int> q;
        
        int size = students.size();
        for(int i=0; i<size; i++)
        {
                  s.push(sandwiches[(size-1)-i]);
                  q.push(students[i]);
            
        }
        int c=0;
        bool wrong =0;
        while(!q.empty() && !wrong)
        {
            if((int)q.front() == (int)s.top())
            {
                s.pop(); q.pop();
                c=0;
            }
            else
            {
                q.push(q.front());
                q.pop();
                c++;
                
            }
            
            if(c>= q.size())break;
        
        }
        return q.size();
        
    }
};

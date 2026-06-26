class Solution {  
public:  
std::string addS(std::string num1, std::string num2) {  
std::string result = "";  
int i = num1.length() - 1;  
int j = num2.length() - 1;  
int carry = 0;

while (i >= 0 || j >= 0 || carry > 0) {  
int sum = carry;  
if (i >= 0) {  
sum += num1[i] - '0';  
i--;  
}  
if (j >= 0) {  
sum += num2[j] - '0';  
j--;  
}  
carry = sum / 10;  
result += std::to_string(sum % 10);  
}  
std::reverse(result.begin(), result.end());  
return result;  
}

string listToNum(ListNode* l) {  
string s = "";  
while (l != nullptr) {  
s += to_string(l->val);  
l = l->next; 
}  
std::reverse(s.begin(), s.end());  
return s;  
}

ListNode* numToList(string num) {  
if (num.empty()) return nullptr;


ListNode* head = nullptr;  
ListNode* tail = nullptr;

for (int i = num.length()-1; i >= 0; i--) {  
int digit = num[i] - '0';  
ListNode* newNode = new ListNode(digit);

if (head == nullptr) {  
head = newNode;  
tail = newNode;  
} else {  
tail->next = newNode;  
tail = newNode;  
}  
}  
return head;  
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {  
string n1 = listToNum(l1);  
string n2 = listToNum(l2);  
return numToList(addS(n1, n2));  
}  
};

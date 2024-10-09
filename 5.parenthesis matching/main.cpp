/*
Write a function that returns if a string of paranthesis are matched.
You are required to use the STL stack datastructure in your code for O(n) time
complexity.
See 5.17 in the book for problem description and a stack based algorithm.
*/
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
// function to check if paranthesis are balanced
bool areParanthesisBalanced(string expr) {
stack<char> s;
for(int i = 0; i< expr.size(); i++){
    if(expr[i] == '{' || expr[i] == '(' || expr[i] == '['){
        s.push(expr[i]);
    }

if(expr[i] == '}' || expr[i] == ')' || expr[i] == ']'){
    if(s.empty()){
        return false;
    }
    char top = s.top();
    if((expr[i] == '}' && top != '{') || (expr[i] == ')' && top != '(') || (expr[i] == ']' && top != '[')){
        return false;
    }
    s.pop();
}
}



















return s.empty();
}
// Test - DO NOT MODIFY
int main()
{
vector<string> parans = {"{()}[]", "[[", "))", "{[()]}", "({[])}"};
for(auto expr : parans) {
if (areParanthesisBalanced(expr))
cout << "Balanced" << endl;
else
cout << "Not Balanced" << endl;
}
return 0;
}

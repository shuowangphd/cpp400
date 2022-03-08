#include <iostream>
#include <stack>

int main(){
    std::stack<std::string> s;
    s.push("a");
    s.push("b");
    std::cout<<s.top()<<std::endl;
    s.pop();
    std::cout<<s.top()<<std::endl;
    return 0;
}

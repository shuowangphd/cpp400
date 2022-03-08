#include <iostream>
#include <queue>

int main(){
    std::queue<std::string> q;
    q.push("a");
    q.push("b");
    std::cout<<q.front()<<std::endl;
    q.pop();
    std::cout<<q.front()<<std::endl;
    return 0;
}

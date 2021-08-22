#include <iostream>


void greet (const std::string& name) {
    std::cout << "hello" << name << std::endl;
}
int main() {
    greet("gay");
    return 0;
}

#include <vector>
#include <string>

std::vector<std::string> helloWorld(int n) {
    std::vector<std::string> output;

    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            output.push_back("HelloWorld");
        } else if (i % 3 == 0) {
            output.push_back("Hello");
        } else if (i % 5 == 0) {
            output.push_back("World");
        } else {
            output.push_back(std::to_string(i));
        }
    }
    return output;
}

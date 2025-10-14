#include <array> // array inclusion
#include <iostream> 
#include <cstdio> // prints
#include <string>
#include <vector>

int main() {

    std::array <int, 3> sand {1,2,3,};
    std::array <bool, 4> water {true,false,true,true,};
    std::array<char, 2> umbrella {'h', 'i'};
    printf("%c\n", umbrella.at(0));
    std::array<std::string, 2> umbrella_string {"hello", "person"};
    printf("%s\n", umbrella_string.at(0).c_str());
    printf("%i\n", sand.at(0));
    printf("%i\n", water.at(1));
    std::vector<int> glass = {0,1,2,3,4,5};
    printf("%d", glass.at(0));
    return 0;
    
}

// i included 5 libraries to help me with my project; array, iostream, cstdio, string, and vector.
// a library is importable code of c++ that is made in c++ itself that someone else made and is able to be applied into your own code that allows you to use a command that you usually wouldnt be able to use or have to build in yourself.
// i included the arrays library so that i could include arrays properly into my code. arrays
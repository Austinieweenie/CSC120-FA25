#include <array> // array inclusion
#include <iostream> 
#include <cstdio> // prints
#include <string>

int main() {

    std::array <int, 3> sand {1,2,3,};
    std::array <bool, 4> water {true,false,true,true,};
    std::array<char, 2> umbrella {'h', 'i'};
    printf("%c\n", umbrella.at(0));
    std::array<std::string, 2> umbrella_string {"hello", "person"};
    printf("%s\n", umbrella_string.at(0).c_str());
    printf("%i\n", sand.at(0));
    printf("%i\n", water.at(1));
    
    
    return 0;
    
}
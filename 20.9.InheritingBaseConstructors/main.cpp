#include <iostream>
#include "person.h"
#include "engineer.h"

//  Reference => https://www.youtube.com/watch?v=8jLOx1hD3_o
//            => (freeCodeCamp.org)

int main(){

    Engineer eng1("Fall out",35,"Cetinkaya Str#35", 6);
    std::cout << "eng1 : " << eng1 << std::endl;

    return 0;
}
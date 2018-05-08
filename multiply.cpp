#include <emscripten.h>
#include <iostream>

int main()
{
std::cout<<"initialized\n";
return 0;
}

extern "C" {

  extern int multiply_in_js(float x, float y);

}



extern "C" {
int multiply(float x, float y)

{

    return multiply_in_js(x, y);

}

}


#include <emscripten.h>
#include<stdio.h>

extern "C" {

  extern int multiply_in_js(float x, float y);

}



extern "C" {
int multiply(float x, float y)

{

    return multiply_in_js(x, y);

}

}

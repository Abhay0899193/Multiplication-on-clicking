#include <iostream>

int main()
{
std::cout<<"initialized\n";
return 0;
}

extern "C" {

int multiply(float x, float y)

{

    return x * y;

}

}

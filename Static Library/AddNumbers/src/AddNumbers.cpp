// g++ -I ./inc -c AddNumbers/src/AddNumbers.cpp -o AddNumbers/obj/AddNumbers.o
// ar rcs AddNumbers/lib/libAddNumbers.a AddNumbers/obj/AddNumbers.o
// g++ -I AddNumbers/inc -L AddNumbers/lib -static AddNumbers/src/main.cpp -lAddNumbers -o AddNumbers/bin/AddNumbersClient_static
// AddNumbers/bin/AddNumbersClient_static 5 2
// output : 5 + 2 = 7

#include "AddNumbers.h"

AddNumbers::AddNumbers ()
: _a(0), _b(0)
{
}

AddNumbers::~AddNumbers ()
{
}

void AddNumbers::setA (int a)
{
        _a = a;
}

void AddNumbers::setB (int b)
{
        _b = b;
}

int AddNumbers::getA () const
{
        return _a;
}

int AddNumbers::getB () const
{
        return _b;
}

int AddNumbers::getSum () const
{
        return _a + _b;
}
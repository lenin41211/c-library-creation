// g++ -I ./inc -fpic -c AddNumbers/src/AddNumbers.cpp -o AddNumbers/obj/AddNumbers.o
// g++ -shared -o AddNumbers/lib/libAddNumbers.so AddNumbers/obj/AddNumbers.o
// g++ -I AddNumbers/inc -L AddNumbers/lib AddNumbers/src/main.cpp -lAddNumbers -o AddNumbers/bin/AddNumbersClient_shared
// sudo mv AddNumbers/lib/libAddNumbers.so /usr/local/lib
// LD_LIBRARY_PATH=Addnumbers/lib
// export LD_LIBRARY_PATH=/usr/local/lib:$LD_LIBRARY_PATH
// OR 
// export LD_LIBRARY_PATH=/usr/local/lib OR LD_LIBRARY_PATH=/usr/local/lib
// echo $LD_LIBRARY_PATH
// AddNumbers/bin/AddNumbersClient_shared 8 3
// output: 8 + 3 = 11

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
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

// Derived exception class:
// std:bad_alloc

// std:bad_cast

// std:logic_failure
        // std:domain_failure
        // std:invalid_argument
        // std:length_error
        // std:out_of_range

// std:bad_typeid

// std:bad_exception

// std:runtime_error
        // std:overflow_error
        // std:range_error
        // std:underflow_error

int main()
{
        int a=10, b=0, c;
        try
        {
                if(b==0)
                {
                        throw runtime_error("Divide by 0 error");
                }
                c=a/b;
                cout << c << endl;
        }
        catch(runtime_error& error)
        {
                cout << "Exception occured : " << error.what() << endl;
        }
        return 0;
}

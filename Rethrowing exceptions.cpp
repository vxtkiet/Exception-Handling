#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;


int main()
{
        try
        {
                try
                {
                        throw "A character exception" ;
                }
                catch(const char* err)
                {
                        cout << "Character type in inner block --> " << err << endl;
                        cout << "Rethrowing the exception" << endl;
                        throw; // throw ecxeption to the outer block (char exception)
//                        throw runtime_error("1101"); // throw exception to the outer block (...)
                }

        }
        catch(const char* err)
        {
                cout << "Character type in outer block --> " << err << endl;
        }
        catch(...)
        {
                cout << "Unexpected exception in outer block --> " << endl;
        }
	return 0;
}


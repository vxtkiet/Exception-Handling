#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

void test() throw(int,char,runtime_error)
{
        throw 20;
}

int main()
{
	try
	{
	        test();
	}
	catch(int err)
	{
	        cout << "Integer type : " << err << endl;
	}
	catch(char err)
	{
	        cout << "Character type : " << err << endl;
	}
	catch(runtime_error err)
	{
	        cout << "runtime_error type : " << err.what() << endl;
	}
	return 0;
}

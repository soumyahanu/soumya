#include<iostream>
using namespace std;
class singleton
{
	static bool obj;     
	static singleton *pointer;
	singleton()
	{
		cout<<"constructor called"<<endl;
		//cout<<" "<<(unsigned int)&pointer<<endl;
	}
	public:
	static singleton* create_object();
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////
bool singleton::obj = false;
singleton* singleton::pointer = NULL;
/////////////////////////////////////////////////////////////////////////////////////////////////////////
singleton* singleton::create_object()
{
	if(pointer==NULL)
	{
		pointer = new singleton();
		obj = true;
		return pointer;
	}
	else
	{
		return pointer;
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
main()
{
	singleton::create_object();
	singleton::create_object();
}

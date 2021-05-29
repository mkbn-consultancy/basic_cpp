#include <string.h>
#include <iostream>

class String
{
public:
	String(const char* str=nullptr);
	String(const String& str); //copy constructor
	~String();
	//...
private:
	char* m_str;
	//...
};
String::String(const char* str /*=nullptr*/)
{
    std::cout<<"[String::ctor] creating a String object\n";
    if(str){
        m_str = new char[strlen(str)+1];
        strcpy(m_str,str);
    }
}
String::String(const String& str)
{
    if(str.m_str){
        std::cout<<"[String::copy ctor] Creating a copy of the String "<<str.m_str<<std::endl;
        m_str = new char[strlen(str.m_str)+1];
        strcpy(m_str,str.m_str);
    }
}

String::~String()
{
    if(m_str){
        std::cout<<"[String::dtor] Releasing String's memory\n";
        delete[] m_str;
    }
}

void f(String s)
{
    std::cout<<"[f] inside f\n";
}

int main()
{
    String s1("hello");

    f(s1);
}
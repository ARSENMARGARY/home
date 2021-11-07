#include <iostream>
#include <string>
#include <regex>
#include "prot.h"
using namespace std;

/*
c++ class in C

void Person_type( Person* t){};
void init_Person_type( Person* t,string name,int age)
{
    t -> m_age = age;
    t -> m_name = name;
};
void Copy_Person_type(Person* t,const Person& other)
{
    *(t).m_age = other.m_age;
    *(t).m_name = other.m_name;

};
void* Person_type_operator=(Person* t,Person* other)
{
    *(t).m_age = *(other).m_age;
    *(t).m_name = *(other).m_name;
};
void Person_type_dtor( Person* t){};

*/

// struct Person
// {
//     int m_age;
//     string m_name;

// };


int main()
{
   string str;
   cin >> str;
   if(Utility::is_boolean(str))
   {
       cout << "yes" << endl;
   }else{
       cout << "no" << endl;
   }
    return 0;
}
#include <iostream>
#include <string>
#include <cmath>
#include <regex>
#include "prot.h"
using namespace std;


// // class Person ctors   and geters seters

// Person::Person (string name,int age)
// {
//     m_name = name;
//     m_age = age;
// }

// Person::Person(const Person& other)
// {
//     this ->m_age = other.m_age;
//     this ->m_name = other.m_name;
// }

// Person& Person::operator=(const Person& rhs)
// {
//     this ->m_age = rhs.m_age;
//     this ->m_name = rhs.m_name;

//     return *this;
// }

// void Person::set_info(string name,int age)
// {
//     this ->m_name = name;
//     this ->m_age = age;
// }

// int Person::get_age()
// {
//     return m_age;
// }

// string Person::get_name()
// {
//     return m_name;
// }









//class Point2D

Point2D::Point2D(int x,int y)
{
    this->m_x = x;
    this->m_y = y;
}

Point2D::Point2D(const Point2D& other)
{
    this ->m_x = other.m_x;
    this ->m_y = other.m_y;
}


Point2D& Point2D::operator=(const Point2D& other)
{
    this ->m_x = other.m_x;
    this ->m_y = other.m_y;
}

Point2D::Point2D( Point2D&& rhs)
{
    this ->m_x = rhs.m_x;
    this ->m_y = rhs.m_y;
    rhs.m_x = 0;
    rhs.m_y = 0;

}

Point2D& Point2D::operator=(Point2D&& rhs)
{
    this ->m_x = rhs.m_x;
    this ->m_y = rhs.m_y;
    rhs.m_x = 0;
    rhs.m_y = 0;
}

void Point2D::set_pointers(int x,int y)
{
    m_x = x;
    m_y = y;
}

int Point2D::get_x()
{
    return m_x;
}

int Point2D::get_y()
{
    return m_y;
}
//class Point2D operator overloads


Point2D& Point2D::operator+(Point2D& rhs)
{
    this->m_x += rhs.m_x;
    this->m_y += rhs.m_y;
}

Point2D& Point2D::operator-(Point2D& rhs)
{
    this->m_x -= rhs.m_x;
    this->m_y -= rhs.m_y;
}

bool Point2D::operator>(Point2D& rhs)
{
    this->m_x += this->m_y;
    rhs.m_x += rhs.m_y;
    if(this->m_x > rhs.m_x)
    {
        return true;
    }
    return false;
}

bool Point2D::operator==(Point2D& rhs)
{
    if((this->m_x == rhs.m_x) && (this->m_y == rhs.m_y))
    {
        return true;
    }
    return false;
}


// function vor@ stugume ardyoq trvac 3 objectner@ 1 uxxu vraen te voch

bool Point2D::straight(Point2D& first,Point2D& second,Point2D& third)
{
    if((first.m_x == second.m_x) && (first.m_x == third.m_x) && (third.m_x == second.m_x))
    {
        return true;
    }
    if((first.m_y == second.m_y) && (first.m_y == third.m_y) && (third.m_y == second.m_y))
    {
        return true;
    }
    if((first.m_x - second.m_x - third.m_x) == (first.m_y - second.m_y - third.m_y))
    {
        return true;
    }
    if((first.m_x + second.m_y - third.m_x) == (first.m_y - second.m_y - third.m_y))
    {
        return true;
    }
    
    return false;
}




// class Utility

bool Utility::is_number(string st) {
    int c = 0;
    for (int i = 0; i < st.length(); i++) {
        if ((int(st[i])>=48) && (int(st[i]) <= 57) || (st[i] == 46 && (i != 0 && i != st.size() - 1)) || (st[i] == 45 && (i != st.size() - 1))) {
            if(st[i] == 46)
            {
                c++;
            }
        }   
        else {
            return false;
        }

}
    if(c <= 1)
    {
        return true;
    }

    return false;
}

bool Utility::is_integer(string st) {
    int c = 0;
    for (int i = 0; i < st.length(); i++) {
        if ((int(st[i])>=48) && (int(st[i]) <= 57) || (st[i] == 45 && (i != st.size() - 1)))
        {
            if(st[i] == 46)
            {
                c++;
            }
        }   
        else {
            return false;
        }

}
    if(c <= 1)
    {
        return true;
    }

    return false;
}



bool Utility::is_float(string st) {
    int c = 0;
    for (int i = 0; i < st.length(); i++) {
        if ((int(st[i])>=48) && (int(st[i]) <= 57) || (st[i] == 46 && (i != 0 && i != st.size() - 1)) || (st[i] == 45 && (i != st.size() - 1))) {
            if(st[i] == 46)
            {
                c++;
            }
        }   
        else {
            return false;
        }

}
    if(c == 1)
    {
        return true;
    }

    return false;
}


bool Utility::is_boolean(string str)
{
    if(str.length() == 0)
    {
        return true;
    }
    if(str[0] == 49)
    {
        return true;
    }
    if(str[0] == 48)
    {
        return false;
    }
    if(str == "true")
    {
        return true;
    }
    if(str == "false")
    {
        return false;
    }

    return false;
}


bool Utility::is_email (string & str)
{
    regex re ("(^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\\.[a-zA-Z0-9-.]+$)");
    return regex_search(str, re);
}


bool Utility::is_url (string & str)
{
    std::regex re ("((http|https)://)(www.)?[a-zA-Z0-9@:%._\\+~#?&//=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%._\\+~#?&//=]*)");
    return regex_search(str,re);
}
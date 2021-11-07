using namespace std;

    // class Person
class Person
{
    public:
        Person(){};
        Person(string,int);
        Person(const Person&);
        Person& operator=(const Person&);
        ~Person(){};

    public:
        void set_info(string,int);
        int get_age();
        string get_name();



    private:
        string m_name;
        int m_age;
};






// class Point2D
class Point2D
{
    public:
        Point2D(){};
        Point2D(int,int);
        Point2D(const Point2D&);
        Point2D& operator=(const Point2D&);
        Point2D( Point2D&&);
        Point2D& operator=( Point2D&&);
        void set_pointers(int,int);
        int get_x();
        int get_y();

    public:
        Point2D& operator+( Point2D&);
        Point2D& operator-(Point2D&);
        bool operator>(Point2D&);
        bool operator==(Point2D&);
        bool straight(Point2D& , Point2D& , Point2D&);



    private:
        int m_x{};
        int m_y{};
};


class Utility
{
    public:
    static bool is_number(string);
    static bool is_integer(string);
    static bool is_float(string);
    static bool is_boolean(string);
    static bool is_email(string&);
    static bool is_url(string&);
};
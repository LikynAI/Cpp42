class Base
{
    public:
        virtual ~Base();
};

Base::~Base(){}

class A: public Base
{
};

class B: public Base
{

};

class C: public Base
{

};

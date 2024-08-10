#include<iostream>

class abst
{
    public:
    virtual void setup()
    {
        std::cout<<"base class"<<std::endl;
    }
};

class abst1 : public abst
{
    public:
    void setup() override
    {
        std::cout<<"drived class"<<std::endl;
    }
};

int main()
{
    abst1 x;
    x.abst::setup();
    return 0;
}
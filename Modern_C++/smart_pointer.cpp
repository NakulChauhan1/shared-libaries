#include<iostream>
#include <memory> 

class node
{
    public:
    int data;
    node* left;
    node* right;
    node(){}

    node(int data)
    {
        std::cout<<"object created "<<std::endl;
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

    ~node()
    {
        std::cout<<"object deleted "<<std::endl;
    }
};

void create_node()
{
    node* root=new node(10);
    std::unique_ptr<node> child(new node(10));

    std::shared_ptr<node> p1(new node(100));
    std::shared_ptr<node> p2;

    std::cout<<" p1: "<<p1->data<<std::endl;

    p2=p1;

    std::cout<<" p2: "<<p2->data<<std::endl;

    std::cout<<" count: "<<p1.use_count()<<std::endl;

    std::shared_ptr<node> p3;

    p3=p2;

    std::cout<<" p3: "<<p3->data<<std::endl;

    std::cout<<" count: "<<p3.use_count()<<std::endl;
}

int main()
{
    create_node();

    return 0;
}
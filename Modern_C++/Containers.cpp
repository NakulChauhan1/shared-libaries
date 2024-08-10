#include <iostream> 
#include <vector> 
#include <deque>
#include <forward_list>
#include <set>
#include <map>
#include <iterator>

using namespace std; 
  
int main() 
{
    cout<<" 1. Sequence containers "<<endl<<endl;
    cout<<" Vector "<<endl; 
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};  
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }

    //Insertion and Deletion from both ends
    cout<<endl<<" Dequeue "<<endl;
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_front(15);

    deque<int>::iterator it;

    for (it = dq.begin(); it != dq.end(); ++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    //Singly Linked List
    forward_list<int> flist1;
    forward_list<int> flist2;
   
    flist1.assign({ 1, 2, 3 });
    flist2.assign(flist1.begin(), flist1.end());
 
    cout<<" Singly Linked List "<<endl;

    flist2.push_front(60);
    flist2.push_front(70);
    flist2.push_front(80);
    flist2.push_front(90);
    flist2.push_front(100);
    flist2.push_front(110);
    flist2.push_front(120);
    flist2.push_front(130);
    flist2.push_front(140);
    flist2.pop_front();

    flist2.remove_if([](int x){ return x>=100; });

    for (int& b : flist2)
        cout<<b<< " ";
    cout<<endl;

    cout<<" 2. Associative containers "<<endl<<endl;

    cout<< " Set" <<endl;

    set<int, greater<int> > s1;
    s1.insert(10);
    s1.insert(5);
    s1.insert(12);
    s1.insert(4);
    s1.insert(10);
    s1.insert(5);
 
    for(auto i : s1) 
    {
        cout<<i<< " ";
    }
    cout<<endl;


    cout<< " Map" <<endl;
    map<int, int> mapp;
 
    // insert elements in random order
    mapp.insert(pair<int, int>(1, 40));
    mapp.insert(pair<int, int>(2, 30));
    mapp.insert(pair<int, int>(3, 60));
    mapp.insert(pair<int, int>(4, 20));
    mapp.insert(pair<int, int>(5, 50));
    mapp.insert(pair<int, int>(6, 50));
    mapp[7] = 10;
 
    for (auto itr = mapp.begin(); itr != mapp.end(); ++itr)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    cout<<endl;
 
    // assigning the elements from mapp to map2
    map<int, int> map2(mapp.begin(), mapp.end());
 
    for(auto itr = map2.begin(); itr != map2.end(); ++itr) 
    {
        cout<<itr->first<<" "<< itr->second<<endl;
    }

    cout<< " Multiset" <<endl;
    multiset<int, greater<int>> ms;
    ms.insert(400);
    ms.insert(1);
    ms.insert(60);
    ms.insert(20);
    ms.insert(0);
 
    // 50 will be added again to
    // the multiset unlike set
    ms.insert(400);
    ms.insert(20);
 
    // printing multiset ms
    multiset<int, greater<int> >::iterator itr;

    for(itr=ms.begin(); itr!=ms.end(); itr++) 
    {
        cout<<*itr<< " ";
    }

    cout<<endl;

    cout<< " Multimap" <<endl;

    multimap<int, int> mmap; // empty multimap container
 
    // insert elements in random order
    mmap.insert(pair<int, int>(1, 40));
    mmap.insert(pair<int, int>(2, 30));
    mmap.insert(pair<int, int>(3, 60));
    mmap.insert(pair<int, int>(6, 50));
    mmap.insert(pair<int, int>(6, 10));

    // adding elements randomly,
    // to check the sorted keys property
    mmap.insert(pair<int, int>(4, 50));
    mmap.insert(pair<int, int>(5, 10));
 
    for (auto itr:mmap) 
    {
        cout<<itr.first<<" "<<itr.second<<endl;
    }
    cout<<endl;

    cout<<" 3. Unordered associative containers "<<endl;


    return 0; 
} 
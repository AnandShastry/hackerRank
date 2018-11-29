#include<vector>
#include<iostream>
#include<algorithm>
#include<iterator>
#include<unordered_map>

using namespace std;

int findPairs(vector<int> ar)
{
    auto mod=0,pair=0;
    vector<int> vint;
    copy(ar.begin(),ar.end(),back_inserter(vint)); // copy from one vector to another
    sort(vint.begin(),vint.end()); // sort vector
    for(auto i:vint)
        cout<<i<<"\t"; // print sorted array
    cout<<"\n";

    unordered_map<int, size_t> count;  
    for (int i=0; i<vint.size(); i++)        
        count[vint[i]]++;

    for (auto &mp:count)               
    {
        cout << mp.first <<" : "<<mp.second<< "-> "<<mp.second/2<<endl;
        pair+=mp.second/2;
    }
    cout<<"Pair"<<pair<<endl;
    return 0;
}

int main(int argc, char const *argv[])
{
    vector<int> vi{10,20,20,10,10,30,50,10,20};
    findPairs(vi);

    return 0;
}

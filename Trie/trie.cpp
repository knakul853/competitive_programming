
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

struct trie {
 bool isleaf;
 unordered_map<char,trie*> mp;
};

trie* getnewnode(){

    trie* temp = new trie;
    temp->isleaf = false;
    return temp;
}

void insert(trie* head , char* str)
{
    if(head == NULL)
    head = getnewnode();

    trie* temp = head ;
    while(*str)
    {
        if(temp->mp.find(*str)==temp->mp.end())
            temp->mp[*str] = getnewnode();
        temp=temp->mp[*str];
        str++;
    }
    temp->isleaf = true;
}

bool have_children(trie*const node)
{
   for(auto it:node->mp)
   {
       if(it.second !=nullptr)return true;
   }
    return false;
}

bool deletion(trie* &cur ,char *str)
{
    if(cur ==nullptr)return false;

    if(*str)
    {
      
      if(cur!=nullptr  && cur->mp.find(*str) != cur->mp.end() && deletion(cur->mp[*str],str+1) && cur->isleaf==false)
      {

          if(!have_children)
          {
              delete cur;
              cur = nullptr;
              return true;
          }
          else
          {
              return false;
          }
      }


    }

    if(*str == '\0' && cur->isleaf)
    {
     if(!have_children)
          {
              delete cur;
              cur = nullptr;
              return true;
          }
          else
          {
             cur->isleaf = false;
             return false;
          }

    }
    return false;
}

bool search(trie*&head , char *str)
{
    if(head == nullptr) return false;

    trie*cur = head;

    while(*str)
    {
       cur =  cur->mp[*str];
       if(cur==nullptr)return false;
       return false;
    }
    return false;
}

int main()
{
    trie* head = nullptr;
    insert(head,"hello");
    cout<<search(head , "hello")<<"\n";
    return 0;

}

#include<bits/stdc++.h>
using namespace std;
#define mem(dp, a) memset(dp, a, sizeof dp)

struct trie
{
    bool leaf;
    trie * child[26];
};

trie * create()
{
   trie * temp = new trie();
   temp->leaf = false;
   mem(temp->child,NULL);
  // memset(temp->child,NULL,sizeof temp->child);
   return temp;
}

void add(trie* root,string s)
{
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        if(root->child[s[i]-'a']==NULL)
           root->child[s[i]-'a'] = create();
        root = root->child[s[i]-'a'];
    }
    root->leaf=true;
}


int main()
{
    
}

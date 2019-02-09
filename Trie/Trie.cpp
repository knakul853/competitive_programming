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

void print(trie* root , string ans){

    if(root->leaf==false)
    {
        for(int i=0;i<26;i++)
        {
            if(root->child[i]!=NULL)
            {
                ans = ans + char('a'+i);
                print(root->child[i],ans);
                ans = ans.substr(0,ans.length()-1);
            }
        }
    }
    else
    {
        cout<<ans<<"\n";
        root->leaf=false;
        print(root,ans);
    }
}

trie* root;

int main()
{


    int n;cin>>n;
    root=create();
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        add(root,s);
    }
    print(root,"");
    
}

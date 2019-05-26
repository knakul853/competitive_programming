/*
Nakul Bharti 
*/
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
const int mx = 1e8+9;
vector<bool>isprime(mx,true);
vector<int>prime;
void seive(){
   isprime[0] = isprime[1] = false;
   for(int i=4;i<=mx;i+=2){
       isprime[i] = false;
   }
   
   for(int i=3LL;i*i<=mx;i++){
       if(isprime[i]){
         for(int j=i;j*i<=mx;j++){
             isprime[i*j] = false;
         }
       }
   }
  prime.pb(2);
  for(int i=3;i<=mx;i+=2){
      if(isprime[i]){
          prime.pb(i);
      }
  }
}

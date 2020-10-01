// C++ program to find prime factorization of a 
// number n in O(Log n) time with precomputation 
// allowed. 
#include "bits/stdc++.h" 
using namespace std; 

#define MAXN 100001 

// stores smallest prime factor for every number 
int spf[MAXN]; 

// Calculating SPF (Smallest Prime Factor) for every 
// number till MAXN. 
// Time Complexity : O(nloglogn) 
void sieve() 
{ 
    spf[1] = 1; 
    for (int i=2; i<MAXN; i++) 

        // marking smallest prime factor for every 
        // number to be itself. 
        spf[i] = i; 

    // separately marking spf for every even 
    // number as 2 
    for (int i=4; i<MAXN; i+=2) 
        spf[i] = 2; 

    for (int i=3; i*i<MAXN; i++) 
    { 
        // checking if i is prime 
        if (spf[i] == i) 
        { 
            // marking SPF for all numbers divisible by i 
            for (int j=i*i; j<MAXN; j+=i) 

                // marking spf[j] if it is not 
                // previously marked 
                if (spf[j]==j) 
                    spf[j] = i; 
        } 
    } 
} 

// A O(log n) function returning primefactorization 
// by dividing by smallest prime factor at every step 
unordered_map<int,int> getFactorization(int x) 
{ 
    unordered_map<int,int> ret; 
    while (x != 1) 
    { 
        ret[spf[x]]++; 
        x = x / spf[x]; 
    } 
    return ret; 
} 

// driver program for above function 
int main(int argc, char const *argv[]) 
{ 
    // precalculating Smallest Prime Factor 
    sieve(); 
    int n,cnt=0;
    cin>>n;
    int p;
    vector<int> v,v1;
    for(int i=0;i<n;i++){
        cin>>p;
        unordered_map<int,int> k = getFactorization(p);

        for(auto x: k){
            if(cnt==0)
                v.push_back(k.first);
            else
                v1.push_back(k.first);
            cnt+=1
            if(cnt==2)break;
        }
    }
    for(auto x:v)
        cout<<x<<" ";
    cout<<"\n";
    for(auto x:v1)
        cout<<x<<" ";
    cout<<"\n";
} 

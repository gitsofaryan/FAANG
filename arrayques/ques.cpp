#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findSL(vector<int> &a, int n){
    int largest=a[0];
    int sL=-1;
    for(int i=1;i<n;i++){
        if(a[i]>largest){
            sL=largest;
            largest=a[i];
        }
        else if(a[i]!=largest){
            if(sL==-1 || a[i]>sL){
                sL=a[i];
            }
        }
    }
}

int smallest(vector<int>&a,int n){
    int smallest=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    return smallest;
}

vector<int> getSL(int n, vector<int> a){
    int sL=findSL(a,n);
    int ssmallest=smallest(a,n);
    
}

int main()
{
    
    return 0;
}
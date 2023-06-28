#include <bits/stdc++.h> 
long long res = 0 ;

void merge(long long *arr , int i , int m , int j){
    vector<long long> s ;
    int a = i ;
    int b = m+1 ;
    while(a <= m){
        while(b <= j && arr[b] < arr[a]){
            s.push_back(arr[b]) ;
            b++ ;
        }
        res += (b - (m+1)) ;
        s.push_back(arr[a]) ;
        a++ ;
    }
    for(int k = 0 ; k < s.size() ; k++){
        arr[i+k] = s[k] ;
    }
    return ;
}

void mergeSort(long long *arr , int i , int j){
    if(i == j) return ;
    int m = i +(j-i)/2 ;
    mergeSort(arr , i ,m) ;
    mergeSort(arr , m+1 , j) ;
    merge(arr , i , m , j) ;
}

long long getInversions(long long *arr, int n){
    // Write your code here.
    mergeSort(arr , 0 , n-1) ;
    return res; 
}

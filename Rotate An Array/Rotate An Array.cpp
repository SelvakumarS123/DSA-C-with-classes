#include <stdio.h>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
     int n;
  cin>>n;
  vector <int> arr;
  for(int i=0;i<n;i++){
     int x;
     cin>>x;
    arr.push_back(x);}

 int x;
  cin>>x;
 if(x==0){
   for(int x:arr)
   cout<<x<<" ";
     return 0;
 }



  else if(x>0){
    for(int j=n-x;j<n;j++){
      cout<<arr[j]<<" ";


  }
  for(int i=0;i<n-x;i++)
  cout<<arr[i]<<" ";






}
else {
    x=abs(x);
    for( int i=x;i<n;i++)
    cout<<arr[i]<<" ";
    for(int i=0;i<x;i++)
    cout<<arr[i]<<" ";


  }


}

// This is where my c++ journey ended
//switching to java
//selvakumar s

// java code 
import java.io.*;
 
import java.util.*;
 
public class Main {
  public static void display(int[] a) {
    StringBuilder sb = new StringBuilder();
 
    for (int val : a) {
      sb.append(val + " ");
    }
    System.out.println(sb);
  }
 
  public static void reverse(int[] a, int li, int ri) {
    while (li < ri) {
      int temp = a[li];
      a[li] = a[ri];
      a[ri] = temp;
 
      li++;
      ri--;
    }
  }
 
  public static void rotate(int[] a, int k) {
    k = k % a.length;
    if (k < 0) {
      k += a.length;
    }
 
    reverse(a, 0, a.length - k - 1);
    reverse(a, a.length - k, a.length - 1);
    reverse(a, 0, a.length - 1);
  }
 
  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
 
    int n = Integer.parseInt(br.readLine());
    int[] a = new int[n];
    for (int i = 0; i < n; i++) {
      a[i] = Integer.parseInt(br.readLine());
    }
    int k = Integer.parseInt(br.readLine());
 
    rotate(a, k);
    display(a);
  }
 
}

#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char,int> values;
       values['I']=1;
       values['V']=5;
       values['X']=10;
       values['L']=50;
       values['C']=100;
       values['D']=500;
       values['M']=1000;
       int total=0;
       for(int i=0;i<s.length();i++){
        if(i<s.length() && values[s[i]]<values[s[i+1]])
        {
            total=total-values[s[i]];
        }
        else{
             total=total+values[s[i]];
        }
       } 
       return total;
 }
};
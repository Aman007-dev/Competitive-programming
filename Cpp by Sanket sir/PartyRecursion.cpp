#include<bits/stdc++.h>
using namespace std;
int main(){
    // Question- There are N persons, who wants to go to a party. There is a constraint that any person can either go alone or go in a pair.
    //calculate the number of ways in which number of ways N persons can go to party.
    //Base case- for n=1  possible cases is 1  and for n=1  possible cases is 2
    //Case 1- Suppose there are n guys and one of them says he does not cares for others he will go alone
    //So in that case F(n) depends on only F(n-1)
    //Case 2- Suppose there are n guys and one of them says he will go in a pair.
    //So in that case n also blocks one other guy and other cases possible are for the rest n-2 guys.
    //So we can say ...F(n)=(number of ways in which a can make pair)*F(n-2);   where number of ways in which a can make pair are n-1
    //So F(n) also depends on (n-1)*F(n-1)
    //Selfwork - return F(n-1)+ (n-1)*F(n-1);     as we have or condition so both cases are possible
}
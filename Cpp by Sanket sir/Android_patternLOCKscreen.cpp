//We all have used android phones, they had a lock screen password style of pattern lock
/*In reality that was stored like this-    *   *   *           1   2   3
                                           *   *   *     =>    4   5   6
                                           *   *   *           7   8   9
*/
//So number series were stored in place of designs.
//That lock had some constraints like:
//1. All the dots should be unique.
//2. If a line segment is passing through any dot, the other dot must have previously appeared. Like to go to 3 from 1, 2 must be traversed.
//Like we can say 4136 and 4192 are both not possible and many such more also...but we se 24136 is possible.

//Question- Given 2 integers n amd m, return the number of unique and valid unlock pattern of the android lock screen that contains atleast m keys and atmost n keys
// ex- if m,n=1 then possible patterns are 9
// ex- if m=1,n=2 then possible patterns are 65.
#include<bits/stdc++.h>
using namespace std;
int main(){
    
}
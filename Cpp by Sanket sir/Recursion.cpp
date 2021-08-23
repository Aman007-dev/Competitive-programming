//Recursion-> It is the function calling itself to calculate more sub problems.
/* Approch to follow->
1. Find out the smallest subproblem for which we know the answer
2. Assume that for the given problem recursion will correctly calculate the subproblem
3. Selfwork
*/
/*
For factorial->
1. Base case- For n=1 F(1)=1
2. Recursive intution- Calculate F(n-1)
3. Selfwork- return n*F(n-1)

For nth term Fibonacci->
1. Base case- F(1)=0 and F(1)=1
2. Recursive intution- We know any term of fibonacci depends on its previous two values, so we need to calculate f(n-1) and f(n-2)
3. Selfwork- return F(n-1)+F(n+2);

Print first natural numbers->
1. Base case- F(1)=1
Another base case can be at F(0) just return
2. Recursive intution- F(n-1)
3. Selfwork- print n;
*/

//Question- Given a value n, how many binary strings of length n are with no consecutive ones.
//example - for n=3 answer is 5    
//Answer-We obersve for some cases... For n=1, answer=1  For n=2, answer=3  For n=3, answer=5  For n=4, answer=8  For n=4, answer=13
//We can easily observe the series comes out to be the fibonacci series
//Other approch could have been like for n=1, answer=1  for n=2, answer=3
//Now we need to find to method to find n=3 by using earlier 2; that can be done by appending 0 and 1 in all cases of n=2 and excluding wrong cases
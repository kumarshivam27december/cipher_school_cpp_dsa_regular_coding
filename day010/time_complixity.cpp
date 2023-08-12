/*


the term time complexity can be defined as the amount of time taken by a procedure or algorithm who
execute as a function of size of input usually represented by N. 
the time complexity measures time taken to execute each instruction of code in an algorithm.
it is not going to give us the details of total execution time (in seconds ) of an algorithm.
rather it will give information about the variation in execution time when the no of operation in an 
algorithm as a function of input size N.
the amount of time taken is a function of length of input only. 


*/


//Qn.  lets suppose a class of 200 student and i have to search a book 



/*

Method 1:- lets suppose now we want to ask each student that the boook belongs to roll no 1 , roll no2
, roll no 3 .........., roll no 200 .

in this case the total qn asked will be 200*200 

*/

/*

Method 2:- now lets suppose we ask to each student that the book belongs to you or not 

in this total qn asked will be 200 in worst case


*/

/*

Method 3:- now lets suppose we divide the students in two part and ask each part whether book belong
to this part or not 
then we will keep dividing the part until we did not get the person 

in this case no of qn will be 


at this first check the part

200 will be divided into 
100  100 
50    50
25   25
13   12 
7    6
4    3 
2    2
1    1

last qn will be from 1 and 1 
so the total no of qn will be  8

*/


/*
time complexity of method 1  -  (200*200)    (n*n)
time complexity of method 2  -  (200)        (n)
time complexity of method 3 -    (8)         (log(n))  ////this is gretest integer function of log(n)


*/



/*

calculation of lograthmic 

n + n/2 + n/4 + ..........+ n/n

n/2^0 + n/2^1 + n/2^2 +........+n/2^k


n = 2^k

hence, k = log(n) base 2



*/


/*

Qn.Arrange according to ascending order in time complexity


O(1),O(N^2),O(N),O(N^3),O(log(n)),O(2^N),O(N^N),O(N^K),O(N!),O(N(log(N))),O(N^2(log(N)))



O(1)
O(log(n))
O(N)
O(N(log(N)))
O(N^2)
O(N^2(log(N)))
O(N^3)
O(N^K) (where K is a constant greater than 3)
O(2^N)
O(N!)
O(N^N)


Please note that O(N^K) is where K is a constant greater than 3, 
so it grows faster than O(N^3) but slower than exponential complexities like O(2^N) and O(N!). 
O(N!) grows extremely fast and should be used sparingly.
 Similarly, O(N^N) is an extremely high time complexity and should be avoided whenever possible.






*/
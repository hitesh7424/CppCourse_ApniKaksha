// Time Complexity

/*

# Time Complexity

Time complexity of an algorithm quantifies the
amount of time taken by a program to run as a
function of length of the input.

code-01:

    int n;
    cin >> n; // n = 5
    int a = 0;
    for(int i = 1; i <= n; i++) // i = 1, 2, 3, .. 5
    {
        a = a + 1;
    }

    // time complexity ∝ size(n)

code-02:

    int n;
    cin >> n;
    int a = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            a = a + 1;
        }
    }

    // for i=1 to n > j=1 to n

    // time complexity ∝ square of size(n)

*/

/*

# Space Complexity

Space complixity of an algorithm quantifies the
amount of time taken by a program to run as a function
of length of the input. It is directly proportional to
the largest memory your program aquires at any
instance during run time.

code-01:

    int n; // int > 4 byte
    cin >> n;
    int a = 0; // 4 byte
    for(int i = 1; i <= n; i++) // 4 byte
    {
        a = a + 1;
    }
    // max size = 12 byte
    // space complexity = 12 byte

code-02:

    | A0 | A1 | A2 | A3 | A4 |    |    | A[N-1] |
    array of size N > int arr[N];

    // space complexity ∝ n

*/

/*

Worst Case [ O (big o) notation ] : no matches
Best Case  [ Ω (big omega) notation ] : matches in first try
Average Case  [ Θ (big theta) notation ] : average time of all possible trials

Example 1:

    Search
                20 10 5 100 300 17 238
    x = 238 // it is in the last
    x = 20  // it is in the first


        a1 a2 a3 a4 a5 .. .. an
    x   -  -  -  -  -  ----  -    >  Worst Case > O
    x   =                         >  Best Case > Ω

        -
        -  -
    x   -  -  -                   >  Average Case > Θ
        -  -  -  -
        -  -  -  -  -  ----  -


# Time Complexity Calculation

code-01:

    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        a = a + 1;
    }

    for(int j = 1; j <= m; j++)
    {
        a = a + rand();
    }
    // O(n + m)

code-02:

    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            a = a + 1;
        }
    }
    // O(nm)

code-03:

    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            a = a + rand();
        }
    }

    for(int i = 1; i <= n; i++)
    {
        a = a + rand() ;
    }
    // O(nm + n)

code-04:

    int n;
    cin >> n;
    int a = 0, i = n;
    while( i >= 1)
    {
        a = a + 1;
        i /= 2;
    }
    // n > n/2 > n/4 .... > 1
    // n/(2^k) >= 1
    //       n >= 2^k
    //    logn >= k
    // k <= logn

    // O(logn)

code-05:

    int n;
    cin >> n;
    int count = 0;
    for(int i = n; i >= 1; i/=2)
    {
        for(int j = 1; j>= i; j++)
        {
            count += 1;
        }

    }


code-06:

    int n;
    cin >> n;
    int count = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j += i)
        {
            count += 1;
        }
    }
    //i= 1 > j= 1,2,3, .... n   > n
    //i= 2 > j= 1,3,5, .... n   > n/2
    //i= 3 > j= 1,4,7, .... n   > n/3
    .. .. .. .. ... ... .. ..
    //i= n > j= 1               > 1

    // 1 + .. + n/3 + n/2 + n
    // n [1/n + .. + 1/3 + 1/2 + 1 ]  <= logn  as ∫(1∕x)dx = logx
    // nlogn

    // O(nlogn)

*/

/*

# Comparison of Functions

     n      n^2      n^3
n=1  1      1        1
n=2  2      4        8
n=3  3      9        27

>> O(n) -> fast       O(n) < O(n^3)
>> O(n^3) -> slow


        n      logn
n=1     1      0
n=2     2      log2 2 = 1
n=1024  1024   log2 2^10 = 10

>> O(logn) < O(n)


        sqrt(n)      logn
n=1     1            0
n=2     1.14         1
n=1024  32           10

>> O(logn) < O(sqrt(n))


*# Time complexity is calculated for bigger number

f(n) = n    n<=1000
     = n^2  n>1000

     O(n^2)


g1(n) = n    n<=100
      = n^4  n>100

g2(n) = n^3  n<=100
      = n^2  n>100

time complexity of g1(n) + g2(n) = O(n^4 + n^2)
                                 = O(n^4)

                                  n^4(it is too big compared to n^2) >> n^2
                                  let n=100
                                  10000000 >> 10000

*/

#include <iostream>
#include <ctime>

int main()
{

    std::cout << "Namaste" << std::endl;
    return 0;
}

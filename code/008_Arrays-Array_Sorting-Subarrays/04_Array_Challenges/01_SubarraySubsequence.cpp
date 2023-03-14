/*

# Subarray & Subsequence

## Subarray

    Contiuous part of the arra.

    1 2 0 7 2 0 2

    1       2 0 2

      2 0 7 <= subarray
    1
    1 2
          7 2 0 2

    Number of subarrays of an array with n elements = nC2 + n = n*(n + 1)/2


## Subsequence

    A subsequence is a sequence that can be derived an array by
    selecting zero or more elements, without changing the order
    of the remaining elements.

        1 2 0 7 2 0 2

        1   0     0 2

          2 7 2 <= subsequence


    Number of subsequences of an array with n elements = 2^n

### QUOTE

    Every Subarray is a Sequence but
    Every Subsequence is not a Subarray.

     ___________________________
    | Subsequence               |
    |           ____________    |
    |          |  Subarray  |   |
    |          |____________|   |
    |___________________________|

*/

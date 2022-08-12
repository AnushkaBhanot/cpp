// The first few Catalan numbers for n = 0, 1, 2, 3, … are 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, …
/* Same for: number of binary search trees,
             number of parantheses,
             number of ways a convex polygon of n+2 sides can split into triangles by connecting vertices,
             number of paths with 2n steps on a rectangular grid from bottom left, i.e., (n-1, 0) to top right (0, n-1) that do not cross above the main diagonal,
             number of ways to insert n pairs of parentheses in a word of n+1 letters,
             number of noncrossing partitions of the set {1, …, 2n} in which every block is of size 2,
             number of Dyck words of length 2n,
             number of ways to tile a stairstep shape of height n with n rectangles,
             number of ways to connect the points on a circle disjoint chords,
             number of ways to form a “mountain ranges” with n upstrokes and n down-strokes that all stay above the original line,
             number of stack-sortable permutations of {1, …, n},
             number of permutations of {1, …, n} that avoid the pattern 123 (or any of the other patterns of length 3); that is, the number of permutations with no three-term increasing subsequence.
*/

#include<bits/stdc++.h>
using namespace std;

unsigned long int binomialCoeff(unsigned int n, unsigned int k)
{
    unsigned long int res = 1;

    // Since C(n, k) = C(n, n-k)
    if (k > n - k)
        k = n - k;

    // Calculate value of [n*(n-1)*---*(n-k+1)] /[k*(k-1)*---*1]
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

// A Binomial coefficient based function to find nth catalan number in O(n) time
unsigned long int catalan(unsigned int n)
{
    // Calculate value of 2nCn
    unsigned long int c = binomialCoeff(2 * n, n);

    // return 2nCn/(n+1)
    return c / (n + 1);
}

int main()
{
    for (int i = 0; i < 10; i++)
        cout << catalan(i) << " ";
    return 0;
}

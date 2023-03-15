# 0x08. C - Recursion

## Recursion

Recursion is the process of repeating items in a self-similar way. In programming languages, if a program allows you to call a function inside the same function, then it is called a recursive call of the function.

```
int factorial(int n)
{
    /* main part: if n is 0 or 1, return 1 */
    if (n == 0 || n == 1)
    {
        return 1;
    }
    /*Recursive part: call factorial recursively with n-1 and multiply by n */
    else
    {
        return n * factorial(n - 1);
    }
}

```

Recursion is useful in situations where a problem can be broken down into smaller sub-problems that are similar to the original problem, such as tree traversal, searching and sorting algorithms, and mathematical problems but may not be suitable for all problems. It can be slower and use more memory than iterative solutions, and can lead to stack overflow errors if the recursion depth is too high. Additionally, recursion may make the code harder to read and debug if it's not implemented correctly. It's important to consider the pros and cons before deciding to use recursion.

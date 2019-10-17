using System;
using System.Linq;
using System.Security.Principal;

class Fibonacci
{
    /// <summary>
    /// Compute nth value in Fibonacci sequence
    /// </summary>
    public static uint ComputeNth(uint i)
    {
        return (i < 2) ? i : ComputeNth(i, 2, 0, 1);
    }

    private static uint ComputeNth(uint i, int current, uint prev1, uint prev2)
    {
        var sum = prev1 + prev2;
        return (current >= i) ? sum : ComputeNth(i, current + 1, prev2, sum);
    }
}

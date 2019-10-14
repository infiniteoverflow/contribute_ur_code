using System;
using System.Linq;

class TextMethods
{
    /// <summary>
    /// Ask user for a word then see if it is a palindrome
    /// </summary>
    public static void Palindrome()
    {
        bool result = false;

        Console.WriteLine("Enter a word: ");
        var value = Console.ReadLine();

        if (!String.IsNullOrEmpty(value))
        {
            var temp = value.ToLower().Trim();
            var rev = temp.Reverse().ToArray();

            for (var n = 0; n < rev.Length; n++)
            {
                if (rev[n] != temp[n]) break;
                result = (n == rev.Length - 1);
            }
        }

        Console.WriteLine($"{value} is {(!result ? "NOT " : "")}a palindrome");
    }
}

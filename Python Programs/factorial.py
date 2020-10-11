"""
Computes the factorial of a number using iteration, recursion, and lookUp methods
"""

def iterative_factorial(number : int) -> int :
    """
    Computes factorial using loops
    """
    factorial = 1
    for i in range(1,number+1):
        factorial *= i
    return factorial

def recursive_factorial(number : int) -> int:
    """
    Computes factorial using recursion
    """

    # base condition
    if number <= 1:
        # Assumes factoial of negative number as 1
        return 1

    return number * recursive_factorial(number - 1)

# Look up dictionary for quick factorial
factorial_lookup = { 0:1, 1:1 }

def quick_factorial(number : int) -> int:
    """
    Computes factorial quickly.
    Uses recursion
    """

    # base condition
    if number <= 1:
        # Assumes factoial of negative number as 1
        return 1

    if number not in factorial_lookup:
        factorial_lookup[number] = number * quick_factorial(number-1)
    return factorial_lookup[number]


if __name__ == "__main__":

    # creating very large set of numbers
    import random
    numbers = [random.randint(500,950) for _ in range(50000)]

    for number in numbers:
        result = iterative_factorial(number)
        print(f"iterative_factoria({number}) = {result}")

    # watch out for recursion depth!
    for number in numbers:
        result = recursive_factorial(number)
        print(f"recursive_factorial({number}) = {result}")


    for number in numbers:
        result = quick_factorial(number)
        print(f"quick_factorial({number}) = {result}")

    # performance:  quick_factorial > iterative_factorial > recursive_factorial
    # memory usage:  quick_factorial > recursive_factorial > iterative_factorial

def fibonacci(n):
    a, b = 0, 1
    print(f"Fibonacci sequence up to {n} terms:", end=" ")
    for i in range(n):
        print(a, end=" ")
        a, b = b, a + b
    print()

fibonacci(7)
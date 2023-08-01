def count_set_bits(n):
    count = 0
    while n:
        count += n & 1
        n >>= 1
    return count

def min_bacteria_needed(x):
    return count_set_bits(x)

# Read input
x = int(input())

# Calculate and print the answer
print(min_bacteria_needed(x))


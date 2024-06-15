#def calculate_prefix_xor_sum(s):
    #count_zeroes= s.count('0')
    #n = len(s)
    #Max_prefix_xor_sum = (n*(n+1))//2 - count_zeroes 
    
#    return Max_prefix_xor_sum
#
#t = int(input())
#for i in range(t):
#    n = int(input())
#    s=input()
#
#    Max_prefix_xor_sum = calculate_prefix_xor_sum(s)
#
#    print(Max_prefix_xor_sum)

def calculate_max_prefix_xor_sum(s):
    count_zeros = s.count('0')
    n = len(s)
    max_prefix_xor_sum = (n * (n + 1)) // 2 - count_zeros

    return max_prefix_xor_sum

# Read the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    # Read the length of the string and the string itself
    n = int(input())
    s = input()

    # Calculate the maximum possible sum of Prefix XOR values
    max_prefix_xor_sum = calculate_max_prefix_xor_sum(s)

    # Print the result for this test case
    print(max_prefix_xor_sum)

from collections import deque, defaultdict  
  
def min_swaps_to_multiple(T, cases):  
    results = []  
    for n, binary_str in cases:  
        k = int(input().strip())  # Assume k is input after each case  
          
        # Function to convert binary string to integer  
        def bin_to_int(s):  
            return int(s, 2)  
          
        # Function to check if a number is divisible by k  
        def is_divisible(num):  
            return num % k == 0  
          
        # BFS to find minimum swaps  
        target_value = bin_to_int('1' * n)  # Initial guess, we'll refine this  
        while target_value % k != 0:  
            target_value -= 1  # Find the smallest binary number of length n divisible by k  
          
        target_bin = bin(target_value)[2:].zfill(n)  # Convert back to binary string of length n  
          
        # Queue for BFS: (current_string, swaps_done)  
        queue = deque([(binary_str, 0)])  
        visited = set([binary_str])  
          
        while queue:  
            current_str, swaps = queue.popleft()  
              
            if current_str == target_bin:  
                results.append(swaps)  
                break  
              
            # Generate all possible swaps  
            for i in range(n - 1):  
                new_str = current_str[:i] + current_str[i:i+2][::-1] + current_str[i+2:]  
                if new_str not in visited:  
                    visited.add(new_str)  
                    queue.append((new_str, swaps + 1))  
        else:  
            # If we exit the loop without finding the target, append -1  
            results.append(-1)  
      
    return results  
  
# Read input  
T = int(input().strip())  
cases = []  
for _ in range(T):  
    n = int(input().strip())  
    binary_str = input().strip()  
    cases.append((n, binary_str))  
  
# Assume k is input after each case for simplicity, here we mock k inputs  
k_values = [int(input().strip()) for _ in range(T)]  # This should be handled as per actual input format  
  
# Process each case with corresponding k  
final_results = []  
for i, (n, binary_str) in enumerate(cases):  
    k = k_values[i]  
    result = min_swaps_to_multiple(1, [(n, binary_str)])[0]  # Since T=1 for simplicity in this mock  
    final_results.append(result)  
  
# Output results  
for result in final_results:  
    print(result)
def max_total_money(N, M, K, arrays):
    total_money = 0  
    operations = 0  

    for array in arrays:
        max_elements = [] 
        max_sum = 0  

    
        for i in range(M - K + 1):
            max_element = max(array[i:i + K]) 
            max_elements.append(max_element)  
            max_sum += max_element 

        
        total_money += max_sum
        operations += M - K + 1

    return total_money

N, M, K = map(int, input().split())
arrays = [list(map(int, input().split())) for _ in range(N)]

result = max_total_money(N, M, K, arrays)
print(result)

import heapq

n, m = map(int, input().split())
seats = list(map(int, input().split()))
min_heap = seats[:]
heapq.heapify(min_heap)
min_earnings = 0
remaining_passengers = n

while remaining_passengers > 0:
    min_seat = heapq.heappop(min_heap)
    min_earnings += min_seat
    min_seat -= 1
    remaining_passengers -= 1
    if min_seat > 0:
        heapq.heappush(min_heap, min_seat)

max_heap = [-seat for seat in seats]
heapq.heapify(max_heap)
max_earnings = 0
remaining_passengers = n

while remaining_passengers > 0:
    max_seat = -heapq.heappop(max_heap)
    max_earnings += max_seat
    max_seat -= 1
    remaining_passengers -= 1
    if max_seat > 0:
        heapq.heappush(max_heap, -max_seat)

print(max_earnings, min_earnings)
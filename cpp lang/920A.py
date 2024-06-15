def find_square_area(point1, point2):
    side_length = max(abs(point1[0] - point2[0]), abs(point1[1] - point2[1]))
    area = side_length ** 2

    return area

def main():
    num_test_cases = int(input())
    for _ in range(num_test_cases):
        points = [tuple(map(int, input().split())) for _ in range(2)]
        area = find_square_area(points[0], points[1])
        print(area)

if __name__ == "__main__":
    main()
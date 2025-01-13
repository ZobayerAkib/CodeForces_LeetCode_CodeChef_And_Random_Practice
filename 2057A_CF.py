def solve():
    n,m=map(int,input().split())
    print(max(n,m)+1)


def main():
    t = int(input())  # Number of test cases
    for _ in range(t):
        solve()
        # print()  # Move to the next line after each test case

if __name__ == "__main__":
    main()
def solve():
    for _ in range(8):
        row = input()
        print(row.replace('.', ''), end='')

def main():
    t = int(input())  # Number of test cases
    for _ in range(t):
        solve()
        print()  # Move to the next line after each test case

if __name__ == "__main__":
    main()
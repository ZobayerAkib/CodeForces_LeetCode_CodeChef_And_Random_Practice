def solve():
    word = input()

    if len(word)>1 and word.isupper():
        result = word.lower()
    elif  len(word)>1 and word[0].islower() and word[1:].isupper():
        result = word.capitalize()
    elif  len(word)==1 and word.islower():
            result = word.upper()
    elif len(word)==1 and word.isupper():
            result = word.lower()
    else:
        result=word

    print(result)


def main():
    #t = int(input().strip())  # Number of test cases
    #for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
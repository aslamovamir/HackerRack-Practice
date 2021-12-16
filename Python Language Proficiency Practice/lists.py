if __name__ == '__main__':
    N = int(input())
    answer = []
    for _ in range(N):
        s=input().strip().split(' ')     
        if s[0] == 'insert':
            answer.insert(int(s[1]), int(s[2]))
        if s[0] == 'print':
            print(answer)
        if s[0] == 'remove':
            answer.remove(int(s[1]))
        if s[0] == 'append':
            answer.append(int(s[1]))
        if s[0] == 'sort':
            answer.sort()
        if s[0] == 'pop':
            answer.pop()
        if s[0] == 'reverse':
            answer.reverse()

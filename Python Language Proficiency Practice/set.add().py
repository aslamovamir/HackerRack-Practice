# Enter your code here. Read input from STDIN. Print output to STDOUT
set_sample = set()

num_to_push = int(input())

for i in range(num_to_push):
    set_sample.add(input())


print(len(set_sample))

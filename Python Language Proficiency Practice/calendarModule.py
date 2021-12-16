# Enter your code here. Read input from STDIN. Print output to STDOUT
import calendar
r1,r2,r3=map(int,input().split())
print((calendar.day_name[calendar.weekday(r3,r1,r2)]).upper())

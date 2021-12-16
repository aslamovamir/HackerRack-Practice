if __name__ == '__main__':
    def find_avrg_query(query_name, marks):

        avrge = 0
        sum = 0
        for mark in marks:
            if mark == query_name:
                for i in marks[mark]:
                    sum += i
                avrge = sum / 3

        return avrge


    marks = dict()
    index = int(input())

    for i in range(index):
        name, m1, m2, m3 = input().split()
        marks[name] = [float(m1), float(m2), float(m3)]
    query_name = input()

    print("%.2f" %find_avrg_query(query_name, marks))

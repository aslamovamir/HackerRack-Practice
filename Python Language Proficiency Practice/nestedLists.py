if __name__ == '__main__':
    def scores_sorted(array):

        records_scores = list(range(len(array)))
        for i, j in zip(array, range(len(array))):
            records_scores[j] = i[1]

        records_scores.sort()

        return records_scores
            

    def names_with_2ndlowest(array, second_lowest):
        names = list()

        for i in array:
            if i[1] == second_lowest:
                names.append(i[0])

        return names


    num_recs = int(input())
    records = [[]] * num_recs

    for i in range(0, num_recs):
        name = input()
        score = float(input())
        records[i] = ([name, score])
    
        
    def scores_unique(records_scores):

        unique_scores = list()
        unique_scores.append(records_scores[0])
        flag = 0


        for i in records_scores:
            for j in unique_scores:
                if i == j:
                    flag = 1
                    continue
                else:
                    flag = 0
                    continue
            if flag == 0:
                unique_scores.append(i)
                flag = 0

        return unique_scores
    
        

    second_lowest = scores_unique(scores_sorted(records))[1]
    names = names_with_2ndlowest(records, second_lowest)
    names.sort()
    
    for i in names:
        print(f"{i}")


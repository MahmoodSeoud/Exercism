def square_of_sum(number):
    numList = list(range(number+1)) 
    return sum(numList)**2

def sum_of_squares(number):
    numList = list(range(number+1))
    print("numList: ",numList)
    sum = 0
    for i in numList:
        sum += numList[i]**2
    print("sum:",sum)
    return sum

def difference_of_squares(number):
    x = square_of_sum(number)
    y = sum_of_squares(number)

    return x-y
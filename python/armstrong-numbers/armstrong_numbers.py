def lenth_of_num(number):
    return len(str(number))

def make_num_to_arr(number):
    return [int(i) for i in str(number)]

def is_armstrong_number(number):
    x = make_num_to_arr(number)
    y = lenth_of_num(number)
    sum = 0
    for i in range(y):
        sum += x[i]**y
    return sum == number 


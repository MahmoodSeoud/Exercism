tempArr = [1,2,4]
for n in range(3, 64):
    tempArr.append(2*tempArr[n-1])

def square(number):
    if number < 1 :
        raise ValueError("square must be between 1 and 64")
    if 64 < number :
        raise ValueError("square must be between 1 and 64")
    else:
        return tempArr[number-1]

    
def total():
    return sum(tempArr)

def square(number):
    if number < 1 or 64 < number:
        raise ValueError("square must be between 1 and 64")
    
    return 2**(number-1)

    
def total(number=64):
    return sum(2**(square-1) for square in range(1, number+1))

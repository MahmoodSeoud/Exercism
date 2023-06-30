def equilateral(sides):
    a, b, c = sorted(sides)
    # If the first side is equal to the last in the sorted array
    return 0 < a == c


def isosceles(sides):
    a, b, c = sorted(sides)
    # Check if side 1 is bigger than zero, and since it is sorted, then it means
    # that all the other elements also are bigger than zero.
    # We also check if two sides added together are bigger than the third side
    # Lastly we check that at least two sides have the same length
    return 0 < a and c < a + b and b in (a,c)


def scalene(sides):
    a, b, c = sorted(sides)
    # Check that all sides are different
    return 0 < a < b < c < a + b

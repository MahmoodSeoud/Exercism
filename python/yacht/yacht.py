from collections import Counter

# Score categories.
# Change the values as you see fit.
YACHT = (lambda x: 50 if len(set(x)) == 1 else 0)
ONES = (lambda x: nums(x,1))
TWOS = (lambda x: nums(x,2))
THREES = (lambda x: nums(x,3))
FOURS = (lambda x: nums(x,4))
FIVES = (lambda x: nums(x,5))
SIXES = (lambda x: nums(x,6))
FULL_HOUSE = (lambda x: sum(x) if sorted(Counter(x).values()) == [2,3] else 0)
FOUR_OF_A_KIND = ( lambda x: four_of_a_kind(x))
LITTLE_STRAIGHT = (lambda x: 30 if set(x) == {1,2,3,4,5} else 0)
BIG_STRAIGHT = (lambda x: 30 if set(x) == {2,3,4,5,6} else 0)
CHOICE = sum

def four_of_a_kind(dice):
    dice_counter = Counter(dice)
    if dice_counter.most_common()[0][1] >= 4:
        return dice_counter.most_common()[0][0] * 4
    else: 
        return 0

def nums(dice: list(), num: int):
    return num * dice.count(num)

def score(dice, category):
    return category(dice)
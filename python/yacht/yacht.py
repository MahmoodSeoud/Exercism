# Score categories.
# Change the values as you see fit.
YACHT = 'YACHT'
ONES = 'ONES'
TWOS = 'TWOS'
THREES = 'THREES'
FOURS = 'FOURS'
FIVES = 'FIVES'
SIXES = 'SIXES'
FULL_HOUSE = 'FULL_HOUSE'
FOUR_OF_A_KIND = 'FOUR_OF_A_KIND'
LITTLE_STRAIGHT = 'LITTLE_STRAIGHT'
BIG_STRAIGHT = 'BIG_STRAIGHT'
CHOICE = 'CHOICE'



def score(dice, category):

    match category:
        case 'YACHT':
            duplicates = [number for number in dice if dice.count(number) > 4]
            if len(duplicates) == 5:
                return 50
            else:
                return 0
        case 'ONES':
           return 1*dice.count(1)
        case 'TWOS':
           return 2*dice.count(2)
        case 'THREES':
           return 3*dice.count(3)
        case 'FOURS':
           return 4*dice.count(4)
        case 'FIVES':
           return 5*dice.count(5)
        case 'SIXES':
           return 6*dice.count(6)
        
        case 'FULL_HOUSE':
           duplicates_two = [number for number in dice if dice.count(number) == 2]
           duplicates_three = [number for number in dice if dice.count(number) == 3]

           if len(duplicates_two) == 2 and len(duplicates_three) == 3:
                return sum(dice)
           else: 
              return 0

        case 'FOUR_OF_A_KIND':
           duplicates = [number for number in dice if dice.count(number) >= 4]
           print(dice, duplicates)
           if len(duplicates) >= 4:
              return sum(duplicates[:4])
           else: 
              return 0
        case 'LITTLE_STRAIGHT':
           if set(dice) == set([1,2,3,4,5]):
                return 30
           else:
              return 0

        case 'BIG_STRAIGHT':
           if set(dice) == set([2,3,4,5,6]):
                return 30
           else:
              return 0

        case 'CHOICE':
           return sum(dice)
        case _:
           return 0

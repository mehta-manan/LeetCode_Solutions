class Solution:
    def distributeCandies(self, candyType: List[int]) -> int:
        # total candies she can eat
        total_candies = len(candyType) / 2
        # list to store different types of candies
        l = list()
        count = 0
        # for every candy available
        for i in candyType:
            # if it is unique candy
            if i not in l:
                # she can eat
                l.append(i)
                # increase new candy count
                count += 1
                # if candy count reaches limit
                if count == total_candies:
                    #break
                    break
        # return candy count
        return count
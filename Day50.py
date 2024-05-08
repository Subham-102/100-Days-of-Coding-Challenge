class Solution:
   def makeEqual(self, words):
        characterCount = [0] * 26
        for inputWord in words:
           for inputChar in inputWord:
              characterCount[ord(inputChar) - ord('a')] += 1

        for count in characterCount:
            if count % len(words) != 0:
                
                return False
        return True
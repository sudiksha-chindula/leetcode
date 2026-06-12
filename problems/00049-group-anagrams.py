
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagram = []
        anagramcheck = {}
        
        for i in range(len(strs)):
            temp = sorted(strs[i])
            word = ""
            for j in temp:
                word += j
            anagramcheck[i] = word
        print(anagramcheck)
        
        visited = list()
        
        for i in range(len(strs)):
            if i in visited:
                continue
                
            anagramgroup = [strs[i]]
            visited.append(i)
            
            for j in range(i + 1, len(strs)):
                if anagramcheck[i] == anagramcheck[j]:
                    anagramgroup.append(strs[j])
                    visited.append(j)
                    
            anagram.append(anagramgroup)
            
        return anagram

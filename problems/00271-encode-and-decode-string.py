class Solution:

    def encode(self, strs: List[str]) -> str:
        if len(strs)==0:
            return ""
        else:
            encoded=""
            for i in range(len(strs)):
                encoded+=str(len(strs[i]))
                encoded+='#'
                encoded+=strs[i]
            return encoded


    def decode(self, s: str) -> List[str]:
        decoded=[]
        if len(s)==0:
            return []
        else:
            index=0
            for i in s:
                currentword = ""
                if i=='#':
                    if s[index-1]==0:
                        currentword="#"
                    else:
                        lenparse=int(s[index-1])
                        currentword+=s[index+1:(index+lenparse)+1]
                    decoded.append(currentword)
                index+=1
        return decoded



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
        if len(s)==0:
            return []
        decoded=[]
        index=0
        while index<len(s):
            j=index
            while s[j]!='#':
                j+=1
            length=int(s[index:j])
            decoded.append(s[j+1 : j+1+length])
            index=j+length+1
        return decoded




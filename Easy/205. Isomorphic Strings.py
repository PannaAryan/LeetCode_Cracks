class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        m1=[]
        m2=[]

        for idx in s:
            m1.append(s.index(idx))
        
        for idx in t:
            m2.append(t.index(idx))
        
        if m1 == m2 :
            return True
        return False
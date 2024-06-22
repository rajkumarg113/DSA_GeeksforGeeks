class Solution:
    def ExtractNumber(self,sentence):
        #code here
        sentnc=sentence.split(' ')
        res=-1
        for ch in sentnc:
            if ch !='' and ch[0] in ('1','2','3','4','5','6','7','8','9','0'):
                if '9' not in ch:
                    res=max(res,int(ch))
        return res
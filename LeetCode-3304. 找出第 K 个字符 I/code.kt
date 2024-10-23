package Leetcode3304

var WORD="a"
class Solution {
    fun kthCharacter(k: Int): Char {
        while(WORD.length<k){
            WORD +=transform(WORD)
        }
        return WORD[k-1]
    }
    fun transform(s: String): String {
        var new_word=""
        for(i in s.indices){
            new_word+=s[i].toChar()+1
        }
        return new_word;
    }
}


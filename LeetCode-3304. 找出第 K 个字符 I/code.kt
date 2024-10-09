package Leetcode3304

var word="a"
class Solution {
    fun kthCharacter(k: Int): Char {
        while(word.length<k){
            word +=transform(word)
        }
        return word[k-1]
    }
    fun transform(s: String): String {
        var new_word=""
        for(i in s.indices){
            new_word+=s[i].toChar()+1
        }
        return new_word;
    }
}


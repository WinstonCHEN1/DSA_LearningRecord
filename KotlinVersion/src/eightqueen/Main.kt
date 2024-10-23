package eightqueen
const val N=8;
var board=Array(N){Array(N){0}}
var placedCount=0
var resultCounts=0
fun isAvailable(row:Int,col:Int):Boolean{
    for(i in 0..row-1){
        if(board[i][col]==1)return false
    }
    var i=row-1
    var j=col-1
    while(i>=0&&j>=0){
        if(board[i][j]==1)return false
        i--
        j--
    }
    i=row-1
    j=col+1
    while(i>=0&&j<N){
        if(board[i][j]==1)return false
        i--
        j++
    }
    return true
}
fun placeQueen(row:Int){
    if(row==N){
        resultCounts++
    }else{
        for(col in 0..N-1){
            if(isAvailable(row,col)){
                board[row][col]=1
                placeQueen(row+1)
                board[row][col]=0
            }
        }
    }
}
fun main(){
    placeQueen(0)
    println(resultCounts)
}
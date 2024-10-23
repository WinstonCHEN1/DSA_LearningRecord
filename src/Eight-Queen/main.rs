fn print_result(board:&Vec<Vec<bool>>){
    for i in 0..board.len(){
        for j in 0..board[i].len(){
            print!("{} ",if board[i][j] {"1"} else {"0"});
        }
        println!();
    }
    println!();
}
fn check_available(row:i32,col:i32,board:&Vec<Vec<bool>>)->bool{
    for i in 0..row{
        if board[i as usize][col as usize]{
            return false;
        }
    }
    let mut i=row-1;
    let mut j=col-1;
    while i>=0 && j>=0{
        if board[i as usize][j as usize]{
            return false;
        }
        i-=1;
        j-=1;
    }
    i=row-1;
    j=col+1;
    while i>=0 && j<board.len() as i32{
        if board[i as usize][j as usize]{
            return false;
        }
        i-=1;
        j+=1;
    }
    return true;

}
fn place(row:i32, board:&mut Vec<Vec<bool>>, result_count: &mut i32){
    if row>=board.len() as i32{
        *result_count=*result_count+1;
        print_result(&board);
    }else{
        for col in 0..board.len() as i32{
            if check_available(row,col,&board){
                board[row as usize][col as usize]=true;
                place(row+1,board,result_count);
                board[row as usize][col as usize]=false;
            }
        }
    }
}
fn main(){
    let n=8;
    let mut board=vec![vec![false;n];n];
    let mut result_count=0;
    place(0,&mut board,&mut result_count);
    println!("{}",result_count);
}
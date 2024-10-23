
static mut WORD: String =Lazy::new(|| String::from("a"));
impl Solution {

    pub fn kth_character(k: i32) -> char {
        while(WORD.len()<k as usize){
            Self::transform_string();
        }
        return WORD.chars().nth(k as usize).unwrap();

    }
    pub fn transform_string(){

        let mut new_str=String::from("");
        for char in WORD{
            new_str.push_str(char);
        }
        WORD=new_str;


    }
}
fn main(){
    return 0;
}
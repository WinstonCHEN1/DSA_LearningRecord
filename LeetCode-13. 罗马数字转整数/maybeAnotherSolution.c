// 忘了怎么写的了，可能用AI改过，突然翻到去年做过这题，把当时的代码也贴过来
// 大概写的很史，用的是条件控制，跟哈希表没关系
int romanToInt(char* s) {
    int res;
    res = 0;
    char toProc[16];
    for(int j = 0;1;j++){
        if(s[j]=='\0'){
            toProc[j] = '\0';
            break;
        }
        toProc[j] = s[j];
    }
    int i = 0;
    for(; i < 17; i++){
        if(toProc[i] == '\0'){
            break;
        }
    }
    for(;i!=-1;i--){
        switch(toProc[i]){
            case 'I':
                if(toProc[i+1] == 'V' || toProc[i+1] == 'X'){
                    res -= 1;
                    toProc[i]='0';
                    break;
                    } else { res += 1;break; }
            case 'V':
                res += 5;
                break;
            case 'X':
                if(toProc[i+1] == 'L' || toProc[i+1] == 'C'){
                    res -= 10;
                    toProc[i]='0';
                    break;
                    } else { res += 10;break; }
                break;
            case 'L':
                res += 50;
                break;
            case 'C':
                if(toProc[i+1] == 'D' || toProc[i+1] == 'M'){
                    res -= 100; 
                    toProc[i]='0';
                    break;
                    } else { res += 100;break; }
                break;
            // 看到这我明白了，它只给头位1的做加减控制
            // 太有智商了，估计不是我自己写的xd
            case 'D':
                res += 500;
                break;
            case 'M':
                res += 1000;
                break;
        }
    }
    printf("%d", res); 
    return res;
}

#include <stdio.h>
#include <assert.h>

int double_it(int i);

int main(int argc, char *argv[]){
    int vals[] = {10, 20};
    for (int i = 0; i < 2; i++){
        assert(vals[i] == double_it(vals[i]));
    }
    return 0;
}

int double_it(int i){
    int doubled = i * 2;
    return doubled;
}

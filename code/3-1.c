#include <stdio.h>
#include <string.h>

int main() {
    char *names[] = {"apple", "mango", "ant", "banana", "cat", "anaconda"};
    int n = sizeof(names) / sizeof(names[0]);

    // 버블 정렬 알고리즘을 이용한 포인터 교환
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            // strcmp 결과가 0보다 크면 앞의 문자열이 알파벳 순으로 더 뒤에 있다는 뜻
            if (strcmp(names[j], names[j+1]) > 0) {
                char *temp = names[j];
                names[j] = names[j+1];
                names[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("%s\n", names[i]);
    }

    return 0;
}

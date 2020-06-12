// ����ڷκ��� ������ ���� �Է¹ޱ�
// �������� Int�� �迭 �Ҵ�
// ����ڰ� �Է��� ������ ������ 0�̳� 0���� ���� ���̸� ���α׷� ����
// 1. ���� ���� ���� ���� ������ �����ϰ� �ٽ� ������ ���� �Է¹ޱ�
// 2. ���� ���� �������� ũ�� �޸� Ȯ��
// 3. �̶� �߰��Ǵ� ���ҿ� ���ؼ��� ����ڷκ��� ���� �Է¹ޱ�
// 4. ����ڷκ��� ������ ������ �Է¹ޱ� ����, ���� ������ ������ ������ �� ���

// �Լ� 
//     - ���� ���� �Է¹ޱ� getElementCount
//     - �Է°� üũ checkElementCount
//     - �޸� Ȯ�� extendMemory
//     - ���� ���� ���� ��� printElements
//     - ���� �Է� �ޱ� getElements

#include <stdio.h>
#include <stdlib.h>

int getElementCount(int elementCount);
short checkElementCount(int elementCount);
void extendMemory(int count, int * array);
void printElements();
int* getElements(int num);

int main(void) {

    printf("start function - main\n");

    int * array = NULL;

    int static elementCount = 0;

    int getElementCnt = 0;

    do {
        getElementCnt = getElementCount(elementCount);

        if(getElementCnt == -1) {
            for(int i=0; i<elementCount; i++) {
                printf("%d��° ���� �� : %d\n",i+1, *(array+1));
            }
            return 0;
        }

        if(elementCount < getElementCnt ) {
            extendMemory(getElementCnt - elementCount, array);
            elementCount = getElementCnt;
        }    
    }while(getElementCnt != -1);    

    printf("end function - main\n");

    return 0;

}

void extendMemory(int count, int * array) {

    printf("start function - extendMemory\n");

    int * temp = NULL;
    
    temp = realloc(array, count);

    if(temp != NULL) {
        if(array != temp) {
            free(array);
            array = temp;
        }
    }

    int n = 0;

    int size = sizeof(array) / sizeof(int);

    for(int i=0; i<count; i++) {

        printf("���Ҹ� �Է��ϼ��� %d. : ", i+1);
        scanf("%d", &n);
        *(array+i) = n;
        
    }

    printf("���� �Է��� �������ϴ�.\n");
    printf("end function - extendMemory\n");

}

int getElementCount(int elementCount) {

    printf("start function - getElementCount\n");

    if(elementCount > 0) {
        printf("���� ������ ���� : %d\n" + elementCount);
    }

    int i = 0;
    printf("������ ������ �Է����ּ��� ( 0�� �̻� ) : ");
    scanf("%d", &i);

    if(i <= 0) {
        printf("0 ������ ���� �Է��Ͽ����ϴ�. \n���α׷��� �����մϴ�.\n");
        printf("end function - getElementCount\n");
        return -1;
    } else {
        printf("%d �Է�\n", i);
        printf("end function - getElementCount\n");
        return i;
    }


}
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

    int * array = NULL;

    int static elementCount = 0;

    int getElementCnt = getElementCount(elementCount);

    if(elementCount < getElementCnt ) {
        extendMemory(getElementCnt - elementCount, array);
    }    

    return 0;
}

void extendMemory(int count, int * array) {
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

    for(int i=i; i<=count; i++) {

        printf("���Ҹ� �Է��ϼ��� %d. : ", i);
        scanf_s("%d", &n);
        *(array+i) = n;
        
    }

    printf("���� �Է��� �������ϴ�.");
    


}

int getElementCount(int elementCount) {

    if(elementCount > 0) {
        printf("���� ������ ���� : %d\n" + elementCount);
    }

    int i = 0;
    printf("������ ������ �Է����ּ��� ( 0�� �̻� ) : ");
    scanf_S("%d", &i);

    if(i <= 0) {
        printf("0 ������ ���� �Է��Ͽ����ϴ�. \n���α׷��� �����մϴ�.");
        return -1;
    } else {
        return i;
    }

}
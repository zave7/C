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
void extendMemory(int count);
void printElements();
int* getElements(int num);

int main(void) {

    int *array[] = 0;

    int static elementCount = 0;

    int getElementCnt = getElementCount(elementCount);

    if(elementCount < getElementCnt ) {
        extendMemory(getElementCnt);
    }    

    return 0;
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
#include <stdio.h>

int main()
{
    /* ���⿡ �ڵ��ۼ� */
    printf("Hello World!");

    /* escape sequence */

    // �ƹ�����
    // �濡 ���Ŵ�
    printf("�ƹ�����\n�濡 ���Ŵ�");
    printf("\n");

    // �Ŀ� ���� ����, "���� ����" ����
    printf("�Ŀ� ���� ����, \"���� ����\" ����");
    printf("\n");

    /* format sring */

    // ������ 5�� 11�� ���� 40%
    printf("%s�� %d�� %d�� ���� %d%%", "����", 5, 11, 40);

    return 0; // ���α׷� ����
}

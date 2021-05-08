#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

    int char_count = 0, world_count = 0; //�ַ������������ʵ�����
    FILE *fp;                            //�ļ�ָ��
    char buf[1024];                      //���壬���ÿһ�����е��ַ�
    char c;
    if (argc < 3)
    {
        printf("�������㣬��������Ʋ������ļ���\n");
        exit(1);
    }

    if ((fp = fopen(argv[2], "r")) == NULL)
    {
        printf("�ļ���ʧ��!\n");
        exit(1);
    }

    if (strcmp(argv[1], "-c") == 0) //ͳ���ַ���
    {
        while ((c = fgetc(fp)) != EOF)
            char_count++;
        fclose(fp);
        printf("�ַ�����%d\n", char_count);
        return 0;
    }

    // ͳ�Ƶ�����
    else if ((strcmp(argv[1], "-w")) == 0)
    {
        // ��ȡһ�з���buf
        int len = 0;
        while (fgets(buf, 1024, fp) != NULL)
        {
            if (buf[0] == '\n')
                continue;
            int flag = 1;      //��һ���ַ��Ƿ�Ϊ�ո���߶��ţ�1--�ǣ�0--��
            len = strlen(buf); //ʵ�ʳ���
            for (int i = 0; i < len; i++)
            {
                c = buf[i];
                if (c == ' ' || c == ',')
                {
                    // ��һ�����ǿո񣬵��ǵ�ǰ�ǿո�

                    if (flag == 0)
                    {
                        world_count++;
                    }
                    flag = 1;
                    //printf("%d\n",flag);
                }
                else if (c != '\n' && c != '\r' )
                {
                    flag = 0;
                }

                // �߽����
                if (i == len - 1 && flag == 0)
                    world_count++;
            }
        }
        fclose(fp);
        printf("������:%d\n", world_count);
        return 0;
    }
}

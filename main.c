#include <stdio.h>

int main()
{

    int qian=0;
    printf("jinruqianbaoguanlixitong\n");

    while(1)
    {
        printf("1--cunqian\n");
        printf("2--quqian\n");
        printf("3--yue\n");
        printf("4--tuichu\n");

        printf("qingxuanzexiangyinggongneng\n");
        int code;
        scanf("%d",&code);

        if (code=1)
        {
            printf("qingshuruyaocunrudeyue: \n");
            int cun;
            scanf("%d",&cun);
            qian+=cun;

            printf("cunruchrnggong,dainjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if (code=2)
        {
            printf("qingshuruyaoquchudeyue:\n");
            int qu;
            scanf("%d",&qu);

            if(qu>qian)
            {
                printf("yuebuzuo,quchushibai,dainjihuichejixu\n");
                char x;
                scanf("%c",&x);
                scanf("%c",&x);
            }
            else
            {
                qian=qu;

                printf("quchuchenggong,dainjihuichejixu\n");
                char x;
                scanf("%c",&x);
                scanf("%c",&x);
            }
        }
        if (code=3)
        {
            printf("dangqianyuewei:\n");
            printf("%d\n",qian);

            printf("quchuchenggong,dainjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if (code=4)
        {
            printf("chengxutuichu\n");
            break;
        }
    }
    

    return 0;

}
#include<stdio.h>
int main()
{


int a[4][4],b[4][4],i,j; //a���ԭʼ�������ݣ�b�����ת����������/

printf("input 16 numbers: ");//����һ�����ݴ�ŵ�����a�У�Ȼ����ת��ŵ�b������/

for(i=0;i<4;i++)

for(j=0;j<4;j++)

{ scanf("%d",&a[i][j]);

b[3-j][i]=a[i][j];

}

printf("arrayb:\n");

for(i=0;i<4;i++)

{ for(j=0;j<4;j++)

printf("%6d",b[i][j]);

printf("\n");

}
}

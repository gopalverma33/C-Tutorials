#include<stdio.h>
#include<string.h>
//Enter address(house no,block,city.state)of 5 people.
struct address 
{
    int houseNo;
    int blockNo;
    char city[100];
    char state[100];
};
void printadd(struct address adds);

int main (){
struct address adds[5];


printf("enter info of person 1 :\n");
scanf("%d",&adds[0].houseNo);
scanf("%d",&adds[0].blockNo);
scanf("%s",adds[0].city);
scanf("%s",adds[0].state);

printf("enter info of person 2 :\n");
scanf("%d",&adds[1].houseNo);
scanf("%d",&adds[1].blockNo);
scanf("%s",adds[1].city);
scanf("%s",adds[1].state);

printf("enter info of person 3 :\n");
scanf("%d",&adds[2].houseNo);
scanf("%d",&adds[2].blockNo);
scanf("%s",adds[2].city);
scanf("%s",adds[2].state);

printf("enter info of person 4 :\n");
scanf("%d",&adds[3].houseNo);
scanf("%d",&adds[3].blockNo);
scanf("%s",adds[3].city);
scanf("%s",adds[3].state);

printf("enter info of person 5 :\n");
scanf("%d",&adds[4].houseNo);
scanf("%d",&adds[4].blockNo);
scanf("%s",adds[4].city);
scanf("%s",adds[4].state);

printadd(adds[0]);
printadd(adds[1]);
printadd(adds[2]);
printadd(adds[3]);
printadd(adds[4]);

return 0 ;
}
void printadd(struct address adds){
    printf("addres is :%d, %d, %s, %s\n",adds.houseNo,adds.blockNo,adds.city,adds.state);
}


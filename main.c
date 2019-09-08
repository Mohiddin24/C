#include"singleLL.c"

snode *Create_node(int);
snode *Add_at_End(int);
void display();
snode* Add_at_Begin(int);
snode* Insert_at_Pos(int,int);

int main()
{

    int ch;
    int val;
    int pos;
    do
    {
        printf("1.----- Create a node ------\n");
        printf("2.----- Insert node at end -----\n");
        printf("3.----- Insert node at beginning -----\n");
        printf("4.----- Insert node at given position -----\n");
        printf("5.----- Delete node at beginning -----\n");
        printf("6.----- Delete node at end -----\n");
        printf("7.----- Delete node at given position -----\n");
        printf("8.----- Display List -----\n");
        printf("9.----- exit -----\n");
        printf("Enter the choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Enter the data:\n");
                    scanf("%d",&val);
                    Create_node(val);
                    break;

            case 2: printf("Enter the data:\n");
                    scanf("%d",&val);
                    Add_at_End(val);
                    break;
            case 3: printf("Enter the data:\n");
                    scanf("%d",&val);
                    Add_at_Begin(val);
                    break;
            case 4: printf("Enter the values for pos and data:\n");
                    scanf("%d",&pos);
                    scanf("%d",&val);
                    Insert_at_Pos(pos,val);
                    break;
            case 8: display();
                    break;
                
            case 9: printf("Exited\n");
                    exit(1);
                    break;
        }

    }while(ch!=8);
    

}
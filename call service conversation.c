#include<stdio.h>

main()
{
    int choise;
    printf("\n enter the any choice : ");
    scanf("%d",&choise);
    switch(choise)
    {
        case 1: printf("Hello sir ! How may i help you?");
                break;
        case 2: printf("Is this the same mobile number on which you are facing network issues?");
                break;
        case 3: printf("Could you please confirm me your mobile number?");
                break;
        case 4: printf("Your number is 98*****432?Is this okay ?");
                break;
        case 5: printf("Yes sir, tell me what issues you are facing?");
                break;
        case 6: printf("I would like to tell you, sir, that you need to change certain settings of your phone because there is no issue from our end.");
                break;
        case 7: printf("Sure sir, I will guide you for that. Go to your settings, select network, and select 3G if you’ve chosen 4G because your sim is not supporting 4G. That’s why you are facing problems while calling.");
                break;
        case 8: printf("Please visit your nearest store. They will provide you the 4G sim for the same.");
                break;
        case 9: printf("Sir, would you like to know about the new offers?");
                break;
        case 10: printf("Thank you for calling. Have a great day ahead.");
                break;
        default : printf("invalid number");
    }
}
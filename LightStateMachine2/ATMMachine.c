#include <stdio.h>
#include <stdlib.h>

//Different state of ATM machine
typedef enum
{
    Idle_State,
    Card_Inserted_State,
    Pin_Eentered_State,
    Option_Selected_State,
    Amount_Entered_State,
} eSystemState;
//Different type events
typedef enum
{
    Card_Insert_Event,
    Pin_Enter_Event,
    Option_Selection_Event,
    Amount_Enter_Event,
    Amount_Dispatch_Event
} eSystemEvent;
//Prototype of eventhandlers
eSystemState AmountDispatchHandler(void)
{
    return Idle_State;
}
eSystemState EnterAmountHandler(void)
{
    return Amount_Entered_State;
}
eSystemState OptionSelectionHandler(void)
{
    return Option_Selected_State;
}
eSystemState EnterPinHandler(void)
{
    return Pin_Eentered_State;
}
eSystemState InsertCardHandler(void)
{
    return Card_Inserted_State;
}

void printChoiceList() {
    printf("Enter 1 for Card_Insert_Event:\n");
    printf("Enter 2 for Pin_Enter_Event:\n");
    printf("Enter 3 for Option_Selection_Event:\n");
    printf("Enter 4 for Amount_Enter_Event:\n");
    printf("Enter 5 for Amount_Dispatch_Event:\n");
    printf("Enter 0 to quit:\n");
}

eSystemEvent* readEvent() {

    int choice;
    printChoiceList();
    scanf("%d", &choice);
    eSystemEvent event;
    //scanf("%d", &age);
    //scanf("%lf", &price);
    // fgets(str, 100, stdin); get whole line of text
    //printf("Your event is %s\n", str);

    switch (choice) {
        case 1:
            event = Card_Insert_Event;
            break;
        case 2:
            event = Pin_Enter_Event;
            break;
        case 3:
            event = Option_Selection_Event;
            break;
        case 4:
            event = Amount_Enter_Event;
            break;
        case 5:
            event = Amount_Dispatch_Event;
            break;
        default:
            exit(0);
    }

    printf("%u selected\n", event);
    return event;
    
}
int main(int argc, char *argv[])
{
    eSystemState eNextState = Idle_State;
    eSystemEvent eNewEvent;
    while(1)
    {
        //Read system Events
        eSystemEvent eNewEvent = readEvent();
        printf("Input is: %s\n", eNewEvent);

        switch(eNextState)
        {
        case Idle_State:
        {
            if(Card_Insert_Event == eNewEvent)
            {
                eNextState = InsertCardHandler();
            }
        }
        break;
        case Card_Inserted_State:
        {
            if(Pin_Enter_Event == eNewEvent)
            {
                eNextState = EnterPinHandler();
            }
        }
        break;
        case Pin_Eentered_State:
        {
            if(Option_Selection_Event == eNewEvent)
            {
                eNextState = OptionSelectionHandler();
            }
        }
        break;
        case Option_Selected_State:
        {
            if(Amount_Enter_Event == eNewEvent)
            {
                eNextState = EnterAmountHandler();
            }
        }
        break;
        case Amount_Entered_State:
        {
            if(Amount_Dispatch_Event == eNewEvent)
            {
                eNextState = AmountDispatchHandler();
            }
        }
        break;
        default:
            break;
        }
    }
    return 0;
}
#include <cs50.h>
#include <stdio.h>

int main(){
    int change;
    do
    {
        change = get_int("Enter Change: ");
    }while(change < 0);

    int reqQuart = change / 25;
    int reqDime = (change - reqQuart*25) / 10;
    int reqNickel = (change - reqQuart*25 - reqDime*10) / 5;
    int reqPenny = change - reqQuart*25 - reqDime*10 - reqNickel*5;

    printf("%i\n", reqQuart + reqDime + reqNickel + reqPenny);
}

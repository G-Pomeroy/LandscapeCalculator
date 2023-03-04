#include <iostream>

double sqFtResult(int plotWidth, int plotLength){
    int total;
    total = plotWidth * plotLength;
    return(total);
}

double subCostTotal(double sqFt, double grassCost){
    double total;
    total = sqFt * grassCost;
    return(total);
}

double totalFinal(double subCost, double treeTotal){
    double total;
    total = subCost + treeTotal;
    return (total);
}

double treeAdd(double treeNum){
    double total;
    total = treeNum * 100;
    return (total);
}

const char * grassType(int grassNum){
    if(grassNum == 1){
        return "Fescue";
    } else if(grassNum == 2){
        return "Bentgrass";
    } else if(grassNum == 3){
        return "Campus";
    }
}

int main() {

        int houseNum, treeNum, grassNum, plotWidth, plotLength;
        double  sqFt, treeTotal,grassCost, totalCost,subCost;
//        char grassFescue[] = "Fescue", grassBentgrass[] = "Bentgrass", grassCampus[] = "Campus";

        printf("Landscape Calculator\n");
        printf("Please enter your house number: \n");
        scanf("%d",&houseNum);

        printf("Please enter your plot length (feet): \n");
        scanf("%d", &plotLength);


        printf("Please enter your plot width (feet): \n");
        scanf("%d", &plotWidth);



        printf("Please enter your desired number of trees: \n");
        scanf(" %d", &treeNum);

        treeTotal = treeAdd(treeNum);

            printf("Please select desired grass: Type 1 for Fescue, 2 for Bentgrass, and 3 for Campus\n");
            scanf("%d", &grassNum);

            switch (grassNum) {
                case 1:
                    //Fescue
                    grassCost = 0.05;
                    break;
                case 2:
                    //Bentgrass
                    grassCost = 0.02;
                    break;
                case 3:
                    //Campus
                    grassCost = 0.01;
                    break;
                default:
                    printf("Please choose a type of grass");

            }

    sqFt = sqFtResult(plotLength,plotWidth);
    subCost = subCostTotal(sqFt, grassCost);
    totalCost = totalFinal(subCost,treeTotal);

        if (sqFt > 5000) {
            totalCost += 1500.00;
        } else {
            totalCost += 1000.00;
        }

        printf("Enter House Number: %d\n",houseNum);
        printf("Enter property width (feet): %d\n",plotWidth);
        printf("Enter property length (feet): %d\n",plotLength);
        printf("Enter type of grass (Fescue, Bentgrass, Campus): %s\n", grassType(grassNum));
        printf("Enter the number of trees: %d\n",treeNum);
        printf("Total cost for house number: %d is: $%.2f",houseNum, totalCost);

    return 0;
}



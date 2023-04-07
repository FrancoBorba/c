#include<stdio.h>

int main(){
    float horas , ganho , bruto, liquido, inss,fgts , descontos , imposto;

    printf("Quantas horas mensais\n");
    scanf("%f",&horas);
    printf("Quanto recebe por hora?\n");
    scanf("%f",&ganho);

    bruto = ganho*horas;

    if(bruto < 2500){

        imposto = 0;
        inss = bruto*(0.10);
        fgts = bruto*(0.11);
        descontos = inss + fgts;
        liquido = bruto - descontos;
        printf(" Salario bruto= %f\n Ir= %f\n INSS = %f\n FGTS = %f\n Total de Descontos= %f\n Salario Liquido= %f\n", bruto, imposto,inss,fgts,descontos,liquido);
                    }
    if( (bruto>2500) && (bruto <=3500)){
        
        imposto = bruto*(0.05);
        inss = bruto*(0.10);
        fgts = bruto*(0.11);
        descontos = inss + fgts + imposto;
        liquido = bruto - descontos;
        printf(" Salario bruto= %f\n Ir= %f\n INSS = %f\n FGTS = %f\n Total de Descontos= %f\n Salario Liquido= %f\n", bruto, imposto,inss,fgts,descontos,liquido);
                                        }

    if((bruto>3500) && (bruto <= 5500)){

        imposto = bruto*(0.10);
        inss = bruto*(0.10);
        fgts = bruto*(0.11);
        descontos = inss + fgts + imposto;
        liquido = bruto - descontos;
        printf(" Salario bruto= %f\n Ir= %f\n INSS = %f\n FGTS = %f\n Total de Descontos= %f\n Salario Liquido= %f\n", bruto, imposto,inss,fgts,descontos,liquido);
                                        }
    if(bruto> 5500){
        imposto = bruto*(0.20);
        inss = bruto*(0.10);
        fgts = bruto*(0.11);
        descontos = inss + fgts + imposto;
        liquido = bruto - descontos;
        printf(" Salario bruto= %f\n Ir= %f\n INSS = %f\n FGTS = %f\n Total de Descontos= %f\n Salario Liquido= %f\n", bruto, imposto,inss,fgts,descontos,liquido);
                    }

    return 0;
}


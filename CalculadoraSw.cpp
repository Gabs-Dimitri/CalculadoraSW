#include <iostream>
#include <string>
#include <locale>

using namespace std;

void case1(){
    string mob1;
    int spdbase = 0, spd = 0;
    int x = 0;
    cout << "Digite o nome do mob: ";
    cin >> mob1;
    cout << "Digite a spd base: ";
    cin >> spdbase;
    cout << "Digite a spd adicional: ";
    cin >> spd;
    cout << endl;
    cout << "                                 Tabela                                   " << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    cout << "|     Mob      |    33%    |    24%    |    19%    |    10%    |    Torre    |" << endl;
    cout << "|    " << mob1 << "    |    " << 
        (spdbase*0.33 + spdbase*0.15 + spdbase + spd) << "    |     " <<
        (spdbase*0.24 + spdbase*0.15 + spdbase + spd) << "    |     " <<   
        (spdbase*0.19 + spdbase*0.15 + spdbase + spd) << "    |     " << 
        (spdbase*0.10 + spdbase*0.15 + spdbase + spd) << "    |     " << 
        (spdbase*0.15 + spdbase + spd) << "    |";
    cout << endl;    
    cout << "------------------------------------------------------------------------------";
}

void case2(){
    string mob1, mob2;
    int spdbase1 = 0, spd1 = 0, spdbase2 = 0, spd2 = 0;
    cout << "Digite o nome do primeiro mob: ";
    cin >> mob1;
    cout << "Digite a spd base do primeiro mob: ";
    cin >> spdbase1;
    cout << "Digite a spd adicional do primeiro mob: ";
    cin >> spd1;
    cout << "Digite o nome do segundo mob: ";
    cin >> mob2;
    cout << "Digite a spd base do segundo mob: ";
    cin >> spdbase2;
    cout << "Digite a spd adicional do segundo mob: ";
    cin >> spd2; 
    cout << endl;
    cout << "                                 Tabela                                   " << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    cout << "|     Mob      |    33%    |    24%    |    19%    |    10%    |    Torre    |" << endl;
    cout << "| " << mob1 << " |    " << 
        (spdbase1*0.33 + spdbase1*0.15 + spdbase1 + spd1) << "    |     " <<
        (spdbase1*0.24 + spdbase1*0.15 + spdbase1 + spd1) << "    |     " <<   
        (spdbase1*0.19 + spdbase1*0.15 + spdbase1 + spd1) << "    |     " << 
        (spdbase1*0.10 + spdbase1*0.15 + spdbase1 + spd1) << "    |     " << 
        (spdbase1*0.15 + spdbase1 + spd1) << "    |";
    cout << endl;
    cout << "| " << mob2 << " |    " << 
        (spdbase2*0.33 + spdbase2*0.15 + spdbase2 + spd2) << "    |     " <<
        (spdbase2*0.24 + spdbase2*0.15 + spdbase2 + spd2) << "    |     " <<   
        (spdbase2*0.19 + spdbase2*0.15 + spdbase2 + spd2) << "    |     " << 
        (spdbase2*0.10 + spdbase2*0.15 + spdbase2 + spd2) << "    |     " << 
        (spdbase2*0.15 + spdbase2 + spd2) << "    |";
    cout << endl;    
    cout << "------------------------------------------------------------------------------";
}

void case3(){
    string mob1, mob2, mob3;
    int spdbase1 = 0, spd1 = 0, spdbase2 = 0, spd2 = 0, spdbase3 = 0, spd3 = 0;
    cout << "Digite o nome do primeiro mob: ";
    cin >> mob1;
    cout << "Digite a spd base do primeiro mob: ";
    cin >> spdbase1;
    cout << "Digite a spd adicional do primeiro mob: ";
    cin >> spd1;
    cout << "Digite o nome do segundo mob: ";
    cin >> mob2;
    cout << "Digite a spd base do segundo mob: ";
    cin >> spdbase2;
    cout << "Digite a spd adicional do segundo mob: ";
    cin >> spd2;
    cout << "Digite o nome do terceiro mob: ";
    cin >> mob3;
    cout << "Digite a spd base do terceiro mob: ";
    cin >> spdbase3;
    cout << "Digite a spd adicional do terceiro mob: ";
    cin >> spd3; 
    cout << endl;
    cout << "                                 Tabela                                   " << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    cout << "|     Mob      |    33%    |    24%    |    19%    |    10%    |    Torre    |" << endl;
    cout << "| " << mob1 << " |    " << 
        (spdbase1*0.33 + spdbase1*0.15 + spdbase1 + spd1) << "    |     " <<
        (spdbase1*0.24 + spdbase1*0.15 + spdbase1 + spd1) << "    |     " <<   
        (spdbase1*0.19 + spdbase1*0.15 + spdbase1 + spd1) << "    |     " << 
        (spdbase1*0.10 + spdbase1*0.15 + spdbase1 + spd1) << "    |     " << 
        (spdbase1*0.15 + spdbase1 + spd1) << "    |";
    cout << endl;
    cout << "| " << mob2 << " |    " << 
        (spdbase2*0.33 + spdbase2*0.15 + spdbase2 + spd2) << "    |     " <<
        (spdbase2*0.24 + spdbase2*0.15 + spdbase2 + spd2) << "    |     " <<   
        (spdbase2*0.19 + spdbase2*0.15 + spdbase2 + spd2) << "    |     " << 
        (spdbase2*0.10 + spdbase2*0.15 + spdbase2 + spd2) << "    |     " << 
        (spdbase2*0.15 + spdbase2 + spd2) << "    |";
    cout << endl;
    cout << "| " << mob3 << " |    " << 
        (spdbase3*0.33 + spdbase3*0.15 + spdbase3 + spd3) << "    |     " <<
        (spdbase3*0.24 + spdbase3*0.15 + spdbase3 + spd3) << "    |     " <<   
        (spdbase3*0.19 + spdbase3*0.15 + spdbase3 + spd3) << "    |     " << 
        (spdbase3*0.10 + spdbase3*0.15 + spdbase3 + spd3) << "    |     " << 
        (spdbase3*0.15 + spdbase3 + spd3) << "    |";
    cout << endl;     
    cout << "------------------------------------------------------------------------------";
}

void case4(){
    string mob1, mob2, mob3, mob4;
    int spdbase1 = 0, spd1 = 0, spdbase2 = 0, spd2 = 0, spdbase3 = 0, spd3 = 0, spdbase4 = 0, spd4 = 0;
    cout << "Digite o nome do primeiro mob: ";
    cin >> mob1;
    cout << "Digite a spd base do primeiro mob: ";
    cin >> spdbase1;
    cout << "Digite a spd adicional do primeiro mob: ";
    cin >> spd1;
    cout << "Digite o nome do segundo mob: ";
    cin >> mob2;
    cout << "Digite a spd base do segundo mob: ";
    cin >> spdbase2;
    cout << "Digite a spd adicional do segundo mob: ";
    cin >> spd2;
    cout << "Digite o nome do terceiro mob: ";
    cin >> mob3;
    cout << "Digite a spd base do terceiro mob: ";
    cin >> spdbase3;
    cout << "Digite a spd adicional do terceiro mob: ";
    cin >> spd3; 
    cout << "Digite o nome do quarto mob: ";
    cin >> mob4;
    cout << "Digite a spd base do quarto mob: ";
    cin >> spdbase4;
    cout << "Digite a spd adicional do quarto mob: ";
    cin >> spd4;
    cout << endl;
    cout << "                                 Tabela                                   " << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    cout << "|     Mob      |    33%    |    24%    |    19%    |    10%    |    Torre    |" << endl;
    cout << "| " << mob1 << " |    " << 
        (spdbase1*0.33 + spdbase1*0.15 + spdbase1 + spd1) << "    |     " <<
        (spdbase1*0.24 + spdbase1*0.15 + spdbase1 + spd1) << "    |     " <<   
        (spdbase1*0.19 + spdbase1*0.15 + spdbase1 + spd1) << "    |     " << 
        (spdbase1*0.10 + spdbase1*0.15 + spdbase1 + spd1) << "    |     " << 
        (spdbase1*0.15 + spdbase1 + spd1) << "    |";
    cout << endl;
    cout << "| " << mob2 << " |    " << 
        (spdbase2*0.33 + spdbase2*0.15 + spdbase2 + spd2) << "    |     " <<
        (spdbase2*0.24 + spdbase2*0.15 + spdbase2 + spd2) << "    |     " <<   
        (spdbase2*0.19 + spdbase2*0.15 + spdbase2 + spd2) << "    |     " << 
        (spdbase2*0.10 + spdbase2*0.15 + spdbase2 + spd2) << "    |     " << 
        (spdbase2*0.15 + spdbase2 + spd2) << "    |";
    cout << endl;
    cout << "| " << mob3 << " |    " << 
        (spdbase3*0.33 + spdbase3*0.15 + spdbase3 + spd3) << "    |     " <<
        (spdbase3*0.24 + spdbase3*0.15 + spdbase3 + spd3) << "    |     " <<   
        (spdbase3*0.19 + spdbase3*0.15 + spdbase3 + spd3) << "    |     " << 
        (spdbase3*0.10 + spdbase3*0.15 + spdbase3 + spd3) << "    |     " << 
        (spdbase3*0.15 + spdbase3 + spd3) << "    |";
    cout << endl; 
    cout << "| " << mob4 << " |    " << 
        (spdbase4*0.33 + spdbase4*0.15 + spdbase4 + spd4) << "    |     " <<
        (spdbase4*0.24 + spdbase4*0.15 + spdbase4 + spd4) << "    |     " <<   
        (spdbase4*0.19 + spdbase4*0.15 + spdbase4 + spd4) << "    |     " << 
        (spdbase4*0.10 + spdbase4*0.15 + spdbase4 + spd4) << "    |     " << 
        (spdbase4*0.15 + spdbase4 + spd4) << "    |";
    cout << endl;    
    cout << "------------------------------------------------------------------------------";
}

void case5(){
    string mob1, mob2, mob3, mob4, mob5;
    int spdbase1 = 0, spd1 = 0, spdbase2 = 0, spd2 = 0, spdbase3 = 0, spd3 = 0, spdbase4 = 0, spd4 = 0,
        spdbase5 = 0, spd5 = 0;
    cout << "Digite o nome do primeiro mob: ";
    cin >> mob1;
    cout << "Digite a spd base do primeiro mob: ";
    cin >> spdbase1;
    cout << "Digite a spd adicional do primeiro mob: ";
    cin >> spd1;
    cout << "Digite o nome do segundo mob: ";
    cin >> mob2;
    cout << "Digite a spd base do segundo mob: ";
    cin >> spdbase2;
    cout << "Digite a spd adicional do segundo mob: ";
    cin >> spd2;
    cout << "Digite o nome do terceiro mob: ";
    cin >> mob3;
    cout << "Digite a spd base do terceiro mob: ";
    cin >> spdbase3;
    cout << "Digite a spd adicional do terceiro mob: ";
    cin >> spd3; 
    cout << "Digite o nome do quarto mob: ";
    cin >> mob4;
    cout << "Digite a spd base do quarto mob: ";
    cin >> spdbase4;
    cout << "Digite a spd adicional do quarto mob: ";
    cin >> spd4;
    cout << "Digite o nome do quinto mob: ";
    cin >> mob5;
    cout << "Digite a spd base do quinto mob: ";
    cin >> spdbase5;
    cout << "Digite a spd adicional do quinto mob: ";
    cin >> spd5;
    cout << endl;
    cout << "                                 Tabela                                   " << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    cout << "|     Mob      |    33%    |    24%    |    19%    |    10%    |    Torre    |" << endl;
    cout << "| " << mob1 << " |    " << 
        (spdbase1*0.33 + spdbase1*0.15 + spdbase1 + spd1) << "    |     " <<
        (spdbase1*0.24 + spdbase1*0.15 + spdbase1 + spd1) << "    |     " <<   
        (spdbase1*0.19 + spdbase1*0.15 + spdbase1 + spd1) << "    |     " << 
        (spdbase1*0.10 + spdbase1*0.15 + spdbase1 + spd1) << "    |     " << 
        (spdbase1*0.15 + spdbase1 + spd1) << "    |";
    cout << endl;
    cout << "| " << mob2 << " |    " << 
        (spdbase2*0.33 + spdbase2*0.15 + spdbase2 + spd2) << "    |     " <<
        (spdbase2*0.24 + spdbase2*0.15 + spdbase2 + spd2) << "    |     " <<   
        (spdbase2*0.19 + spdbase2*0.15 + spdbase2 + spd2) << "    |     " << 
        (spdbase2*0.10 + spdbase2*0.15 + spdbase2 + spd2) << "    |     " << 
        (spdbase2*0.15 + spdbase2 + spd2) << "    |";
    cout << endl;
    cout << "| " << mob3 << " |    " << 
        (spdbase3*0.33 + spdbase3*0.15 + spdbase3 + spd3) << "    |     " <<
        (spdbase3*0.24 + spdbase3*0.15 + spdbase3 + spd3) << "    |     " <<   
        (spdbase3*0.19 + spdbase3*0.15 + spdbase3 + spd3) << "    |     " << 
        (spdbase3*0.10 + spdbase3*0.15 + spdbase3 + spd3) << "    |     " << 
        (spdbase3*0.15 + spdbase3 + spd3) << "    |";
    cout << endl; 
    cout << "| " << mob4 << " |    " << 
        (spdbase4*0.33 + spdbase4*0.15 + spdbase4 + spd4) << "    |     " <<
        (spdbase4*0.24 + spdbase4*0.15 + spdbase4 + spd4) << "    |     " <<   
        (spdbase4*0.19 + spdbase4*0.15 + spdbase4 + spd4) << "    |     " << 
        (spdbase4*0.10 + spdbase4*0.15 + spdbase4 + spd4) << "    |     " << 
        (spdbase4*0.15 + spdbase4 + spd4) << "    |";
    cout << endl; 
    cout << "| " << mob5 << " |    " << 
        (spdbase5*0.33 + spdbase5*0.15 + spdbase5 + spd5) << "    |     " <<
        (spdbase5*0.24 + spdbase5*0.15 + spdbase5 + spd5) << "    |     " <<   
        (spdbase5*0.19 + spdbase5*0.15 + spdbase5 + spd5) << "    |     " << 
        (spdbase5*0.10 + spdbase5*0.15 + spdbase5 + spd5) << "    |     " << 
        (spdbase5*0.15 + spdbase5 + spd5) << "    |";
    cout << endl;   
    cout << "------------------------------------------------------------------------------";
}

void case6(){
    string mob1, mob2, mob3, mob4, mob5, mob6;
    int spdbase1 = 0, spd1 = 0, spdbase2 = 0, spd2 = 0, spdbase3 = 0, spd3 = 0, spdbase4 = 0, spd4 = 0,
        spdbase5 = 0, spd5 = 0, spdbase6 = 0, spd6 = 0;
    cout << "Digite o nome do primeiro mob: ";
    cin >> mob1;
    cout << "Digite a spd base do primeiro mob: ";
    cin >> spdbase1;
    cout << "Digite a spd adicional do primeiro mob: ";
    cin >> spd1;
    cout << "Digite o nome do segundo mob: ";
    cin >> mob2;
    cout << "Digite a spd base do segundo mob: ";
    cin >> spdbase2;
    cout << "Digite a spd adicional do segundo mob: ";
    cin >> spd2;
    cout << "Digite o nome do terceiro mob: ";
    cin >> mob3;
    cout << "Digite a spd base do terceiro mob: ";
    cin >> spdbase3;
    cout << "Digite a spd adicional do terceiro mob: ";
    cin >> spd3; 
    cout << "Digite o nome do quarto mob: ";
    cin >> mob4;
    cout << "Digite a spd base do quarto mob: ";
    cin >> spdbase4;
    cout << "Digite a spd adicional do quarto mob: ";
    cin >> spd4;
    cout << "Digite o nome do quinto mob: ";
    cin >> mob5;
    cout << "Digite a spd base do quinto mob: ";
    cin >> spdbase5;
    cout << "Digite a spd adicional do quinto mob: ";
    cin >> spd5;
    cout << "Digite o nome do sexto mob: ";
    cin >> mob6;
    cout << "Digite a spd base do sexto mob: ";
    cin >> spdbase6;
    cout << "Digite a spd adicional do sexto mob: ";
    cin >> spd6;
    cout << endl;
    cout << "                                 Tabela                                   " << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    cout << "|     Mob      |    33%    |    24%    |    19%    |    10%    |    Torre    |" << endl;
    cout << "| " << mob1 << " |    " << 
        (spdbase1*0.33 + spdbase1*0.15 + spdbase1 + spd1) << "    |     " <<
        (spdbase1*0.24 + spdbase1*0.15 + spdbase1 + spd1) << "    |     " <<   
        (spdbase1*0.19 + spdbase1*0.15 + spdbase1 + spd1) << "    |     " << 
        (spdbase1*0.10 + spdbase1*0.15 + spdbase1 + spd1) << "    |     " << 
        (spdbase1*0.15 + spdbase1 + spd1) << "    |";
    cout << endl;
    cout << "| " << mob2 << " |    " << 
        (spdbase2*0.33 + spdbase2*0.15 + spdbase2 + spd2) << "    |     " <<
        (spdbase2*0.24 + spdbase2*0.15 + spdbase2 + spd2) << "    |     " <<   
        (spdbase2*0.19 + spdbase2*0.15 + spdbase2 + spd2) << "    |     " << 
        (spdbase2*0.10 + spdbase2*0.15 + spdbase2 + spd2) << "    |     " << 
        (spdbase2*0.15 + spdbase2 + spd2) << "    |";
    cout << endl;
    cout << "| " << mob3 << " |    " << 
        (spdbase3*0.33 + spdbase3*0.15 + spdbase3 + spd3) << "    |     " <<
        (spdbase3*0.24 + spdbase3*0.15 + spdbase3 + spd3) << "    |     " <<   
        (spdbase3*0.19 + spdbase3*0.15 + spdbase3 + spd3) << "    |     " << 
        (spdbase3*0.10 + spdbase3*0.15 + spdbase3 + spd3) << "    |     " << 
        (spdbase3*0.15 + spdbase3 + spd3) << "    |";
    cout << endl; 
    cout << "| " << mob4 << " |    " << 
        (spdbase4*0.33 + spdbase4*0.15 + spdbase4 + spd4) << "    |     " <<
        (spdbase4*0.24 + spdbase4*0.15 + spdbase4 + spd4) << "    |     " <<   
        (spdbase4*0.19 + spdbase4*0.15 + spdbase4 + spd4) << "    |     " << 
        (spdbase4*0.10 + spdbase4*0.15 + spdbase4 + spd4) << "    |     " << 
        (spdbase4*0.15 + spdbase4 + spd4) << "    |";
    cout << endl; 
    cout << "| " << mob5 << " |    " << 
        (spdbase5*0.33 + spdbase5*0.15 + spdbase5 + spd5) << "    |     " <<
        (spdbase5*0.24 + spdbase5*0.15 + spdbase5 + spd5) << "    |     " <<   
        (spdbase5*0.19 + spdbase5*0.15 + spdbase5 + spd5) << "    |     " << 
        (spdbase5*0.10 + spdbase5*0.15 + spdbase5 + spd5) << "    |     " << 
        (spdbase5*0.15 + spdbase5 + spd5) << "    |";
    cout << endl; 
    cout << "| " << mob6 << " |    " << 
        (spdbase6*0.33 + spdbase6*0.15 + spdbase6 + spd6) << "    |     " <<
        (spdbase6*0.24 + spdbase6*0.15 + spdbase6 + spd6) << "    |     " <<   
        (spdbase6*0.19 + spdbase6*0.15 + spdbase6 + spd6) << "    |     " << 
        (spdbase6*0.10 + spdbase6*0.15 + spdbase6 + spd6) << "    |     " << 
        (spdbase6*0.15 + spdbase6 + spd6) << "    |";
    cout << endl;   
    cout << "------------------------------------------------------------------------------";
}

int main(){
    int op;
    cout << "Bem vindo! Digite a opcao desejada" << endl;
    cout << "1: Calculadora para 1 mob" << endl;
    cout << "2: Calculadora para 2 mobs" << endl;
    cout << "3: Calculadora para 3 mobs" << endl;
    cout << "4: Calculadora para 4 mobs" << endl;
    cout << "5: Calculadora para 5 mobs" << endl;
    cout << "6: Calculadora para 6 mobs" << endl;
    cin >> op;
    switch (op)
    {
    case 1:
        cout << "Calculadora para 1 mob! Digite o nome sem espaco!" << endl;
        case1();    
        break;    
    case 2:
        cout << "Calculadora para 2 mobs! Digite os nomes sem espaco!" << endl;
        case2();
        break;
    case 3: 
        cout << "Calculadora para 3 mobs! Digite os nomes sem espaco!" << endl;
        case3();
        break;
    case 4:
        cout << "Calculadora para 4 mobs! Digite os nomes sem espaco!" << endl;
        case4();
        break;
    case 5:
        cout << "Calculadora para 5 mobs! Digite os nomes sem espaco!" << endl;
        case5();
        break;
    case 6:
        cout << "Calculadora para 6 mobs! Digite os nomes sem espaco!" << endl;
        case6();
        break;
    default:
        cout << "Numero nao encontrado!";
        break;
    }
    
}
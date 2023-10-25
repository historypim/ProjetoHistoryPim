#include <iostream>
#include <fstream>
#include <string>


using namespace std;

void getObra(){
	
	string linha;
	
	ifstream meuArquivo ("TacaCopaMundo.txt"); // define o arquivo
	
	if (meuArquivo.is_open())
	{
		while (! meuArquivo.eof() ) //enquanto nao chegar ao fim do arquivo
		{
			getline (meuArquivo,linha); // obter linha
                             
			cout << linha << endl; // escreve a linha
		}
		meuArquivo.close();
	}

	else cout << "Nao foi possivel ler o arquivo"; 	
	
};

int setCsv(){
	ofstream file;
	
    file.open("exemplo.csv");
    file << "Nome, Nascimento, Sexo" << endl;
    file << "John, 10/02/2000, M" << endl;
    file << "Janaina, 30/08/2004, F" << endl;
    file.close();
    
    return 0;
};


int main(int argc, char** argv) {
	int menu;
	
	
	printf("......................\n");
	printf("Qual menu voce deseja acessar?\n");
	printf("1)Compra\n");
	printf("2)Vendas\n");
	printf("3)Questionario\n");
	printf("......................\n");
	
	scanf("%d",& menu);
	
	if(menu == 1){
		printf("A Funcionando\n");
	}
	
	if(menu == 2){
		printf("B Funcionando\n");
	}
	
	if(menu == 3){
		printf("C Funcionando\n");
	}
	
	
	setCsv();
	getObra();
	
	cout << "\n\n";
	
	system("pause");
	
	return 0;
}

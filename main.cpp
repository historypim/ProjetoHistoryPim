#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <bits/stdc++.h>
#include <sstream>


using namespace std;

// Limpar Espaço - Inicio
const std::string WHITESPACE = " \n\r\t\f\v";
 
std::string ltrim(const std::string &s)
{
    size_t start = s.find_first_not_of(WHITESPACE);
    return (start == std::string::npos) ? "" : s.substr(start);
};
 
std::string rtrim(const std::string &s)
{
    size_t end = s.find_last_not_of(WHITESPACE);
    return (end == std::string::npos) ? "" : s.substr(0, end + 1);
};
 
std::string trim(const std::string &s) {
    return rtrim(ltrim(s));
};
// Limpar Espaço - Fim

void getObra(int codigoObra){	
	
	// system executa comandos do DOS (Console)
	// Limpa a tela do console
	system("cls");
	
	string linha;	
	
	ifstream meuArquivo; // define o arquivo
	
	if(codigoObra == 1)				
		meuArquivo.open("100AnosArteModerna.txt", std::ifstream::in);
	
	if(codigoObra == 2)				
		meuArquivo.open("150AnosSantosDummont.txt", std::ifstream::in);
	
	if(codigoObra == 3)				
		meuArquivo.open("JogosOlimpicosParis.txt", std::ifstream::in);
	
	if(codigoObra == 4)				
		meuArquivo.open("Vangogh.txt", std::ifstream::in);
	
	if (meuArquivo.is_open())
	{
		while (! meuArquivo.eof() ) //enquanto nao chegar ao fim do arquivo
		{
			getline (meuArquivo,linha); // obter linha
                             
			cout << "\n\n" + linha + "\n\n"<< endl; // escreve a linha
		}
		meuArquivo.close();
	}
	else 
	{
		cout << "Nao foi possivel ler o arquivo";
	}
	
	// Pausa até apertar Enter	 	
	system("PAUSE");
	
	// Limpa a tela
	system("cls");
	
	// Encerra o programa
	system ("exit");
};

void ExibirVendas(){
	
	system("cls");
	
	// Tem que ter esse espaco entre os sinais de maior: > >
	vector<vector<string> > conteudo;
	vector<string> textoLinha;
	string linha, texto;
	
	int numeroColuna = 0;
	
	// Manipula Vendas
	fstream minhasVendas;
	
	// Abre csv Vendas
	minhasVendas.open("Vendas.csv", ios::in);
	
	if(minhasVendas.is_open()) {
		
		while(getline(minhasVendas, linha)){
			
			// limpa texto linha
			textoLinha.clear();
			
			stringstream str(trim(linha));
			
			while(getline(str, texto, ','))	{
				
				textoLinha.push_back(trim(texto) + " | ");
			}
				
			conteudo.push_back(textoLinha);			
		}
	}
	else
		cout << "Nao foi possivel ler o arquivo";
		
	for(int i= 0; i < conteudo.size(); i++){
		for(int j = 0; j < conteudo[i].size(); j++){
			cout << conteudo [i][j];
			
			if(numeroColuna == 4){
					cout << "\n";
					numeroColuna = 0;
				}
				
			numeroColuna++;
		}
		
		//cout << "\n";
	}
	
	// Fecha o Arquivo
	minhasVendas.close();
	
	cout << "\n\n";
	system("PAUSE");
	
	system("ProjetoHistoryPim.exe");
};

void salvaIngresso(string nome, string cpf, string tipoIngresso, int quantidade, float valor){
	
	string texto;
	std::ostringstream sQuantidade, sValor;	
	
	sQuantidade << quantidade;
	sValor << valor;
			
	// Manipula Vendas
	ofstream minhasVendas;
	
	// Abre csv Vendas
	minhasVendas.open("Vendas.csv", ios::app);
	
	if(minhasVendas.is_open()) {
		texto = nome + "," + cpf + "," + tipoIngresso + "," + sQuantidade.str() + "," + sValor.str() + ".00\n";
		minhasVendas << texto;
		minhasVendas.close();
	}
	else
		cout << "Nao foi possivel ler o arquivo";
	
	cout << "Ingresso vendido para " + nome + "\n\n";
	
	system("PAUSE");
	
    system("ProjetoHistoryPim.exe");
};

void menu()
{
	// Limpa a tela
	system("cls");
	
	printf("\n\n......................\n\n");
	printf("Qual opcao voce deseja acessar?\n\n");
	printf("1) Compra Ingresso\n");
	printf("2) Exibir Vendas\n");
	printf("3) Questionario\n");
	//printf("4) Van Gogh\n");
	printf("5) Sair\n");
	printf("\n\n......................\n\n");	
	
};

void CompraInteira(){
	
	string nomeComprador = "", cpf = "", tipoIngresso = "";
	int confirmar, quantidade;
	float valor;
	
	tipoIngresso = "INTEIRA";
	valor = 50.00;
		
	system("cls");
	
	cout << "Digite o Nome: ";		
	cin >> nomeComprador;	
	
	cout << "\nDigite o Cpf: ";	
	cin >> cpf;
	
	cout << "\nDigite a quantidade: ";	
	cin >> quantidade;	
	
	cout << "\nPressione 1 para Finalizar a compra ou 2 para Cancelar ";	
	
	scanf("%d", &confirmar);	
	
	if(confirmar == 1)
	{		
		cout << "\nCompra finalizada com sucesso!\n\n";
		
		salvaIngresso(nomeComprador, cpf, tipoIngresso, quantidade, valor);
				
	}
	else{
		system("ProjetoHistoryPim.exe");
	}
	
};

void CompraIngresso(){
	
	system("cls");
	
	int tipoIngresso;
	int opcaoIngressoInvalido;
	
	cout << "Selecione o tipo de Entrada: \n\n";
	
	cout << "1 - Inteira \t R$ 50,00 \n";
	cout << "2 - Meia \t R$ 25,00 \n";
	cout << "3 - Isento \t R$ 0,00 \n\n";
	cout << "4 - Voltar \n\n";
	
	scanf("%d", &tipoIngresso);
	
	 switch(tipoIngresso) {
      case 1:{
      	// Comprar Ingresso
        CompraInteira();
		//getObra(1);
		break;
	  }
	  default:
        printf("Opção inválida\n");
        //opcaoIngressoInvalido= 1;
        break;
    }
};

int main(int argc, char** argv) {
	int opcaoMenu;
  	int opcaoInvalido;	
	
	//setCsv();		
	
	// Totem
	// 1 - 100 Anos de Arte Moderna
	// 2 - 150 Anos de Santos Dummont
	// 3 - Jogos Olimpicos de Paris
	// 4 - Van Gogh
	getObra(1);
	
	// Venda
	do {
    menu();
    scanf("%d", &opcaoMenu);
    opcaoInvalido= 0;

    switch(opcaoMenu) {
      case 1:{
      	// Comprar Ingresso
        CompraIngresso();
		//getObra(1);
		break;
	  }
	  case 2:{
      	// Exibir Vendas
        ExibirVendas();
		break;
	  }
	  case 3:{
      	// Jogos Olimpicos 2024
        getObra(3);
		break;
	  }
	  case 4:{
      	// Van Gogh
        getObra(4);
		break;
	  }
	  case 5:
        printf("Comprar Ingresso");
        break;
      case 6:
      	// Sair
        system("exit");
        break;
      case 7:
        printf("Questionario");
        break;
      default:
        printf("Opção inválida\n");
        opcaoInvalido= 1;
        break;
    }
  } while (opcaoInvalido);	
	
	
	return 0;
}

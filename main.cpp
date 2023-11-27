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

void get100AnosArteModerna(){
	
	char nome[100], email[100], telefone[15], resposta[1000];
    int experiencia, conhecimento, comunicacoes, imagens;
    

    
    printf("Pesquisa sobre a Exposicao '100 Anos da arte moderna");
    printf("Obrigado por visitar nossa exposicao. Valorizamos sua opiniao e sua privacidade.\n");
    printf("Esta pesquisa e voluntaria e suas respostas serao usadas apenas para pesquisa e aprimoramento do museu.\n\n");

    printf("1. Informacaes Pessoais (Opcional):\n");
    printf("Nome: ");
//    fgets(nome, sizeof(nome), stdin);
	cin >> nome;
    printf("E-mail: ");
//    fgets(email, sizeof(email), stdin);
	cin >> email;
    printf("Telefone: ");
//    fgets(telefone, sizeof(telefone), stdin);
 	cin >> telefone;

    printf("\n2. Experiencia na Exposicao:\n");
    printf("Avalie sua experiencia na exposição de 1 a 5, onde 1  a pior e 5 e a melhor pontuacao:\n");
    printf("1 - 2 - 3 - 4 - 5\n");
    printf("Sua resposta: ");
    scanf("%d", &experiencia);
//	cin >> experiencia;
    
    printf("\n3. O que mais voce gostou na exposicao?\n");
//    getchar();  // Limpar o buffer do teclado
//    fgets(resposta, sizeof(resposta), stdin);
	cin >> resposta;
    
    printf("\n4. O que poderia ser melhorado ou adicionado a exposicao?\n");
//    fgets(resposta, sizeof(resposta), stdin);
	cin >> resposta;
    
    printf("\n5. Conhecimento Adquirido:\n");
    printf("A exposicao aumentou seu conhecimento sobre a vida e as contribuicoes de Santos Dumont?\n");
    printf("1 - Sim\n2 - Nao\n");
    printf("Sua resposta: ");
//    scanf("%d", &conhecimento);
	cin >> conhecimento;

    printf("\n6. Consentimento para Comunicações Futuras:\n");
    printf("Deseja receber comunicacoes futuras do museu?\n");
    printf("1 - Concordo em receber comunicacoes futuras do museu\n2 - Nao quero receber comunicacoes futuras do museu\n");
    printf("Sua resposta: ");
//    scanf("%d", &comunicacoes);
	cin >> comunicacoes;

    printf("\n7. Uso de Imagens:\n");
    printf("Concorda com o uso de imagens em material promocional do museu?\n");
    printf("1 - Concordo com o uso das imagens em material promocional do museu\n2 - Não concordo com o uso das imagens em material promocional do museu\n");
    printf("Sua resposta: ");
    scanf("%d", &imagens);
//	cin >> imagens;

    printf("\n8. Política de Privacidade:\n");
    
    
//    printf("Para obter informacoes detalhadas sobre como coletamos, usamos e protegemos seus dados pessoais, consulte nossa politica de privacidade no seguinte link: [Inserir Link para a Política de Privacidade].\n\n");

//    printf("Declaração de Consentimento:\n");
//    printf("Ao fornecer suas informações pessoais e marcar as opções acima, você concorda com a coleta e o uso de seus dados pessoais conforme descrito neste questionário e na nossa política de privacidade.\n");
    
//    printf("\nData: [ ] Assinatura: [ ]\n\n");
//    printf("Obrigado por compartilhar suas opiniões. Seu feedback é valioso para nós e nos ajuda a melhorar nossas exposições futuras.\n");	
    
    system("PAUSE");
};

void getQuestionario150Anos(){
	
	char nome[100], email[100], telefone[15], resposta[1000];
    int experiencia, conhecimento, comunicacoes, imagens;
    

    
    printf("Pesquisa sobre a Exposicao '150 Anos de Santos Dumont'\n");
    printf("Obrigado por visitar nossa exposicao. Valorizamos sua opiniao e sua privacidade.\n");
    printf("Esta pesquisa e voluntaria e suas respostas serao usadas apenas para pesquisa e aprimoramento do museu.\n\n");

    printf("1. Informacaes Pessoais (Opcional):\n");
    printf("Nome: ");
//    fgets(nome, sizeof(nome), stdin);
	cin >> nome;
    printf("E-mail: ");
//    fgets(email, sizeof(email), stdin);
	cin >> email;
    printf("Telefone: ");
//    fgets(telefone, sizeof(telefone), stdin);
 	cin >> telefone;

    printf("\n2. Experiencia na Exposicao:\n");
    printf("Avalie sua experiencia na exposição de 1 a 5, onde 1  a pior e 5 e a melhor pontuacao:\n");
    printf("1 - 2 - 3 - 4 - 5\n");
    printf("Sua resposta: ");
    scanf("%d", &experiencia);
//	cin >> experiencia;
    
    printf("\n3. O que mais voce gostou na exposicao?\n");
//    getchar();  // Limpar o buffer do teclado
//    fgets(resposta, sizeof(resposta), stdin);
	cin >> resposta;
    
    printf("\n4. O que poderia ser melhorado ou adicionado a exposicao?\n");
//    fgets(resposta, sizeof(resposta), stdin);
	cin >> resposta;
    
    printf("\n5. Conhecimento Adquirido:\n");
    printf("A exposicao aumentou seu conhecimento sobre a vida e as contribuicoes de Santos Dumont?\n");
    printf("1 - Sim\n2 - Nao\n");
    printf("Sua resposta: ");
//    scanf("%d", &conhecimento);
	cin >> conhecimento;

    printf("\n6. Consentimento para Comunicações Futuras:\n");
    printf("Deseja receber comunicacoes futuras do museu?\n");
    printf("1 - Concordo em receber comunicacoes futuras do museu\n2 - Nao quero receber comunicacoes futuras do museu\n");
    printf("Sua resposta: ");
//    scanf("%d", &comunicacoes);
	cin >> comunicacoes;

    printf("\n7. Uso de Imagens:\n");
    printf("Concorda com o uso de imagens em material promocional do museu?\n");
    printf("1 - Concordo com o uso das imagens em material promocional do museu\n2 - Não concordo com o uso das imagens em material promocional do museu\n");
    printf("Sua resposta: ");
    scanf("%d", &imagens);
//	cin >> imagens;

    printf("\n8. Política de Privacidade:\n");
    
    
//    printf("Para obter informacoes detalhadas sobre como coletamos, usamos e protegemos seus dados pessoais, consulte nossa politica de privacidade no seguinte link: [Inserir Link para a Política de Privacidade].\n\n");

//    printf("Declaração de Consentimento:\n");
//    printf("Ao fornecer suas informações pessoais e marcar as opções acima, você concorda com a coleta e o uso de seus dados pessoais conforme descrito neste questionário e na nossa política de privacidade.\n");
    
//    printf("\nData: [ ] Assinatura: [ ]\n\n");
//    printf("Obrigado por compartilhar suas opiniões. Seu feedback é valioso para nós e nos ajuda a melhorar nossas exposições futuras.\n");	
    
    system("PAUSE");
};

void getVangogh(){
	
	char nome[100], email[100], telefone[15], resposta[1000];
    int experiencia, conhecimento, comunicacoes, imagens;
    

    
    printf("Pesquisa sobre a Exposicao 'Van gogh'\n");
    printf("Obrigado por visitar nossa exposicao. Valorizamos sua opiniao e sua privacidade.\n");
    printf("Esta pesquisa e voluntaria e suas respostas serao usadas apenas para pesquisa e aprimoramento do museu.\n\n");

    printf("1. Informacaes Pessoais (Opcional):\n");
    printf("Nome: ");
//    fgets(nome, sizeof(nome), stdin);
	cin >> nome;
    printf("E-mail: ");
//    fgets(email, sizeof(email), stdin);
	cin >> email;
    printf("Telefone: ");
//    fgets(telefone, sizeof(telefone), stdin);
 	cin >> telefone;

    printf("\n2. Experiencia na Exposicao:\n");
    printf("Avalie sua experiencia na exposição de 1 a 5, onde 1  a pior e 5 e a melhor pontuacao:\n");
    printf("1 - 2 - 3 - 4 - 5\n");
    printf("Sua resposta: ");
    scanf("%d", &experiencia);
//	cin >> experiencia;
    
    printf("\n3. O que mais voce gostou na exposicao?\n");
//    getchar();  // Limpar o buffer do teclado
//    fgets(resposta, sizeof(resposta), stdin);
	cin >> resposta;
    
    printf("\n4. O que poderia ser melhorado ou adicionado a exposicao?\n");
//    fgets(resposta, sizeof(resposta), stdin);
	cin >> resposta;
    
    printf("\n5. Conhecimento Adquirido:\n");
    printf("A exposicao aumentou seu conhecimento sobre a vida e as contribuicoes de Santos Dumont?\n");
    printf("1 - Sim\n2 - Nao\n");
    printf("Sua resposta: ");
//    scanf("%d", &conhecimento);
	cin >> conhecimento;

    printf("\n6. Consentimento para Comunicações Futuras:\n");
    printf("Deseja receber comunicacoes futuras do museu?\n");
    printf("1 - Concordo em receber comunicacoes futuras do museu\n2 - Nao quero receber comunicacoes futuras do museu\n");
    printf("Sua resposta: ");
//    scanf("%d", &comunicacoes);
	cin >> comunicacoes;

    printf("\n7. Uso de Imagens:\n");
    printf("Concorda com o uso de imagens em material promocional do museu?\n");
    printf("1 - Concordo com o uso das imagens em material promocional do museu\n2 - Não concordo com o uso das imagens em material promocional do museu\n");
    printf("Sua resposta: ");
    scanf("%d", &imagens);
//	cin >> imagens;

    printf("\n8. Política de Privacidade:\n");
    
    
//    printf("Para obter informacoes detalhadas sobre como coletamos, usamos e protegemos seus dados pessoais, consulte nossa politica de privacidade no seguinte link: [Inserir Link para a Política de Privacidade].\n\n");

//    printf("Declaração de Consentimento:\n");
//    printf("Ao fornecer suas informações pessoais e marcar as opções acima, você concorda com a coleta e o uso de seus dados pessoais conforme descrito neste questionário e na nossa política de privacidade.\n");
    
//    printf("\nData: [ ] Assinatura: [ ]\n\n");
//    printf("Obrigado por compartilhar suas opiniões. Seu feedback é valioso para nós e nos ajuda a melhorar nossas exposições futuras.\n");	
    
    system("PAUSE");
};

void getJogosOlimpicosParis(){
	
	char nome[100], email[100], telefone[15], resposta[1000];
    int experiencia, conhecimento, comunicacoes, imagens;
    

    
    printf("Pesquisa sobre a Exposicao 'Jogos Olimpicos'\n");
    printf("Obrigado por visitar nossa exposicao. Valorizamos sua opiniao e sua privacidade.\n");
    printf("Esta pesquisa e voluntaria e suas respostas serao usadas apenas para pesquisa e aprimoramento do museu.\n\n");

    printf("1. Informacaes Pessoais (Opcional):\n");
    printf("Nome: ");
//    fgets(nome, sizeof(nome), stdin);
	cin >> nome;
    printf("E-mail: ");
//    fgets(email, sizeof(email), stdin);
	cin >> email;
    printf("Telefone: ");
//    fgets(telefone, sizeof(telefone), stdin);
 	cin >> telefone;

    printf("\n2. Experiencia na Exposicao:\n");
    printf("Avalie sua experiencia na exposição de 1 a 5, onde 1  a pior e 5 e a melhor pontuacao:\n");
    printf("1 - 2 - 3 - 4 - 5\n");
    printf("Sua resposta: ");
    scanf("%d", &experiencia);
//	cin >> experiencia;
    
    printf("\n3. O que mais voce gostou na exposicao?\n");
//    getchar();  // Limpar o buffer do teclado
//    fgets(resposta, sizeof(resposta), stdin);
	cin >> resposta;
    
    printf("\n4. O que poderia ser melhorado ou adicionado a exposicao?\n");
//    fgets(resposta, sizeof(resposta), stdin);
	cin >> resposta;
    
    printf("\n5. Conhecimento Adquirido:\n");
    printf("A exposicao aumentou seu conhecimento sobre a vida e as contribuicoes de Santos Dumont?\n");
    printf("1 - Sim\n2 - Nao\n");
    printf("Sua resposta: ");
//    scanf("%d", &conhecimento);
	cin >> conhecimento;

    printf("\n6. Consentimento para Comunicações Futuras:\n");
    printf("Deseja receber comunicacoes futuras do museu?\n");
    printf("1 - Concordo em receber comunicacoes futuras do museu\n2 - Nao quero receber comunicacoes futuras do museu\n");
    printf("Sua resposta: ");
//    scanf("%d", &comunicacoes);
	cin >> comunicacoes;

    printf("\n7. Uso de Imagens:\n");
    printf("Concorda com o uso de imagens em material promocional do museu?\n");
    printf("1 - Concordo com o uso das imagens em material promocional do museu\n2 - Não concordo com o uso das imagens em material promocional do museu\n");
    printf("Sua resposta: ");
    scanf("%d", &imagens);
//	cin >> imagens;

    printf("\n8. Política de Privacidade:\n");
    
    
//    printf("Para obter informacoes detalhadas sobre como coletamos, usamos e protegemos seus dados pessoais, consulte nossa politica de privacidade no seguinte link: [Inserir Link para a Política de Privacidade].\n\n");

//    printf("Declaração de Consentimento:\n");
//    printf("Ao fornecer suas informações pessoais e marcar as opções acima, você concorda com a coleta e o uso de seus dados pessoais conforme descrito neste questionário e na nossa política de privacidade.\n");
    
//    printf("\nData: [ ] Assinatura: [ ]\n\n");
//    printf("Obrigado por compartilhar suas opiniões. Seu feedback é valioso para nós e nos ajuda a melhorar nossas exposições futuras.\n");	
    
    system("PAUSE");
};

void getObra(int codigoObra){	
	
	// system executa comandos do DOS (Console)
	// Limpa a tela do console
	system("cls");
	
	string linha;	
	
	ifstream meuArquivo; // define o arquivo
	
	if(codigoObra == 0){
				
		meuArquivo.open("Inicial.txt", std::ifstream::in);
		
	}
		
	if(codigoObra == 4){
	
		meuArquivo.open("100AnosArteModerna.txt");		
	}
	
	if(codigoObra == 5){	
		
		meuArquivo.open("150AnosSantosDummont.txt");
	}
	
	if(codigoObra == 6){
		
		meuArquivo.open("JogosOlimpicosParis.txt", std::ifstream::in);
		
	}
	
	if(codigoObra == 7){
		
		meuArquivo.open("Vangogh.txt", std::ifstream::in);
		
	}
	
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
	//system ("exit");
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
//	printf("3) Questionario\n");
	printf("4) Descricao 100 Anos de Arte Moderna\n");
	printf("5) Descricao 150 Anos de Santos Dumont\n");
	printf("6) Descricao Olimpiadas Paris\n");
	printf("7) Descricao Van Gogh\n");
	//printf("4) Van Gogh\n");
	printf("8) Sair\n");
	printf("\n\n......................\n\n");	
	
};

void CompraInteira(){
	
	string nomeComprador = "", cpf = "", tipoIngresso = "";
	int confirmar, quantidade;
	float valor;
	
	tipoIngresso = "INTEIRA";
	valor = 50.00;
		
	system("cls");
	
	cout << ">>> INGRESSO INTEIRO <<<\n\n";
	
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

void CompraMeia(){
	
	string nomeComprador = "", cpf = "", tipoIngresso = "";
	int confirmar, quantidade;
	float valor;
	
	tipoIngresso = "MEIA";
	valor = 25.00;
		
	system("cls");
	
	cout << ">>> INGRESSO MEIA <<<\n\n";
	
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

void CompraIsento(){
	
	string nomeComprador = "", cpf = "", tipoIngresso = "";
	int confirmar, quantidade;
	float valor;
	
	tipoIngresso = "ISENTO";
	valor = 0.00;
		
	system("cls");
	
	cout << ">>> INGRESSO ISENTO <<<\n\n";
	
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
      	// Comprar Ingresso Inteiro
        CompraInteira();
		break;
	  }
	  case 2:{
      	// Comprar Ingresso Meia
        CompraMeia();
		break;
	  }
	  case 3:{
      	// Comprar Ingresso Isento
        CompraIsento();
		break;
	  }
	  case 4:{
      	// Voltar
        system("ProjetoHistoryPim.exe");
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
		
	// Totem
	// 0 - Inicial
	// 4 - 100 Anos de Arte Moderna
	// 5 - 150 Anos de Santos Dummont
	// 6 - Jogos Olimpicos de Paris
	// 7 - Van Gogh
	getObra(0);
	
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
//	  case 3:{
//      	// Jogos Olimpicos 2024
//        getObra(3);
//		break;
//           }
	  case 4:{
      	// 4 - 100 Anos de Arte Moderna
        getObra(4);
        get100AnosArteModerna();
		break;
	  }
	  case 5:
	  	// 5 - 150 Anos de Santos Dummont
        getObra(5);
        getQuestionario150Anos();
        break;
      case 6:
      	// 6 - Jogos Olimpicos de Paris
      	getObra(6);
      	getJogosOlimpicosParis();
        break;
      case 7:
      	// 7 - Van Gogh
        getObra(7);
        getVangogh();
        break;
   	  case 8:
        // Sair
        system("exit");
        break;
      default:
        printf("Opção inválida\n");
        opcaoInvalido= 1;
        break;
    }
  } while (opcaoInvalido);	
	
	
	return 0;
}

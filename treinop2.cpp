# inclui  <iostream> _ _
usando  namespace  std ;

int  principal (){
	setlocale (LC_ALL, " português " );
	string nome, tamanho, recheioum, recheiodois, presente, formadepegar, adicional, formaDePagamento;
	int quantiadevos;
	
	// Introdução
	cout << " Olá, bem vindo à loja da Dona Maria, digite seu nome: \n " ;
	cin >> nome;
	
	
	// Tamanho do ovo
	cout << " \n " << nome << " , escolha o tamanho do seu ovo: " ;
	cout << " \n Pequeno - R$7,80 " ;
	cout << " \n Médio - R$12,90 " ;
	cout << " \n Grande - R$23,95 \n " ;
	
	cin >> tamanho;
	
	while (tamanho != " Grande " && tamanho != " Médio " && tamanho != " Pequeno " ){
		tamanho. claro ();
		cout << " \n Tamanho inválido, digite novamente \n " ;
		cin >> tamanho;
	}
	
	
	// Recheio do ovo
	cout << " \n Escolha o recheio do seu ovo: " ;
	cout << " \nChocolatePreto - R$9,67 " ;
	cout << " \nChocolateBranco - R$4,50 " ;
	cout << " \ nChocolateAoLeite - R$9,32 \n " ;
	cin >> recheioum;
	
	while (recheioum != " ChocolatePreto " && recheioum != " ChocolateBranco " && recheioum != " ChocolateAoLeite " ){
		cout << recheioum;
		recheioum. claro ();
		cout << " \n Recheio inválido, digite novamente \n " ;
		cin >> recheioum;
	}
	
	
	// Segundo recheio do ovo
	cout << " \n Gostaria de escolher outro recheio? Todos os recheios saem com 50% de desconto. " ;
	cout << " \nChocolatePreto - R$4,83 " ;
	cout << " \nChocolateBranco - R$2,25 " ;
	cout << " \ nChocolateAoLeite - R$4,66 \n " ;
	cout << " \n Caso não queira dois recheios, envie n. \n " ;
	cin >> recheiodois;
	
	while (recheiodois != " ChocolatePreto " && recheiodois != " ChocolateBranco " && recheiodois != " ChocolateAoLeite " && recheiodois != " n " ){
		recheiodois. claro ();
		cout << " \n Recheio inválido, digite novamente \n " ;
		cin >> recheiodois;
	}
	
	
	// Presente
	cout << " \n Irá ser presente? (Acréscimo de R$2,50, responda com Sim ou Não) \n " ;
	cin >> presente;
	
	while (presente != " Sim " && presente != " Nao " ){
		presente. claro ();
		cout << " \n Inválido, digite novamente \n " ;
		cin >> presente;
	}
	
	if (presente == " Sim " ){
		cout << " \n Vamos embalar o ovo " ;
	} senão {
		cout << " \n O ovo será deixado em sua caixa " ;
	}
	
	
	// Retirada ou entrega
	cout << " \n Retirada ou Entrega? (Entrega adiciona R$5,00 ao total) \n " ;
	cin >> formadepegar;
	
	while (formadepegar != " Retirada " && formadepegar != " Entrega " ){
		formapegar. claro ();
		cout << " \n Inválido, digite novamente \n " ;
		cin >> formadepegar;
	}
	
	if (formadepegar == " Retirada " ){
		cout << " \n Te informaremos quando o ovo estiver pronto. " ;
	} senão {
		cout << " \n Te informaremos quando o ovo sair para entrega. " ;
	}
	
	
	// Quantidade de ovos
	cout << " \n Quantos ovos você irá comprar? \n " ;
	cin >> valordevos;
	
	while (quantiadeovos < 1 ){
		presente. claro ();
		cout << " \n O número que você digitou é inválido, digite novamente \n " ;
		cin >> valordevos;
	}
	
	
	// Adicionais
	cout << " \n Gostaria de colocar mais no ovo? " ;
	cout << " \n KitKat - R$4,67 - Digite KitKat " ;
	cout << " \n MM'S - R$5,43 - Digite MM " ;
	cout << " \n Caso não queira, digite n \n " ;
	cin >> adicional;
	
	while (adicionais != " KitKat " && adicional != " MM " && adicional != " n " ){
		adicional. claro ();
		cout << " \n Adicional inválido, digite novamente \n " ;
		cin >> adicional;
	}
	
	
	// Forma de pagamento
	cout << " \n Irá pagar no cartão de crédito ou pix? (Digite 'Credito' ou 'Pix') \n " ;
	cin >> formaDePagamento;
	
	
	// Preços dos ovos
	duplo precoPequeno = 7,80 ;
	double precoMedio = 12,90 ;
	duplo precoGrande = 23,95 ;
	
	
	// Valor do tamanho do ovo
	double valorOvo;
	if (tamanho == " Pequeno " ){
	    valorOvo = precoPequeno;
	} else  if (tamanho == " Médio " ){
	    valorOvo = precoMedio;
	} else  if (tamanho == " Grande " ){
	    valorOvo = precoGrande;
	}
	
	
	// Valor dos recheios
	double valorRecheioUm, valorRecheioDois = 0 ;
	if (recheioum == " ChocolatePreto " ){
	    valorRecheioUm = 9,67 ;
	} else  if (recheioum == " ChocolateBranco " ){
	    valorRecheioUm = 4,50 ;
	} else  if (recheioum == " ChocolateAoLeite " ){
	    valorRecheioUm = 9,32 ;
	}
	
	
	if (recheiodois == " Chocolate Preto " ){
	    valorRecheioDois = 4.835 ;
	} else  if (recheiodois == " ChocolateBranco " ){
	    valorRecheioDois = 2,25 ;
	} else  if (recheiodois == " ChocolateAoLeite " ){
	    valorRecheioDois = 4,66 ;
	}
	
	
	// Desconto do segundo recheio
	if (valorRecheioDois > 0 ){
	    valorRecheioUm *= 0.5 ;
	}
	
	
	// Valor adicional do presente
	double valorPresente = 0 ;
	if (presente == " Sim " ){
	    valorPresente = 2,5 ;
	}
	
	
	// Valor da entrega
	double valorEntrega = 0 ;
	if (formadepegar == " Entrega " ){
	    valorEntrega = 5 ;
	}
	
	
	// Valor dos adicionais
	double valoradicionais = 0 ;
	if (adicionais == " KitKat " ){
		valoradicionais = 4,67 ;
	} else  if (adicionais == " MM " ){
		valoradicionais = 5,43 ;
	}
	
	
	// valor total
	double totalapagar = valorOvo + valorRecheioUm + valorRecheioDois + valorPresente + valorEntrega + valorAdicionais;
	
	
	// Valor da forma de pagamento
	if (formaDePagamento == " Crédito " ){
		totalapagar += 3.3 ;
	} else  if (formaDePagamento == " Pix " ){
		totalapagar *= 0,9 ;
	}
	
	
	totalapagar *= quantiadevos;
	
	cout << " \n Detalhes de compra: " ;
	cout << " \n Valor do tamanho: R$ " << valorOvo;
	cout << " \n Primeiro recheio: R$ " << valorRecheioUm;
	cout << " \n Segundo recheio: R$ " << valorRecheioDois;
	cout << " \n Valor do presente: R$ " << valorPresente;
	cout << " \n Valor da entrega: R$ " << valorEntrega;
	cout << " \n Valor dos adicionais: R$ " << valorAdicionais;
	cout << " \n Quantidade de ovos: x " << quantidadedeovos;
	cout << " \n Forma de pagamento: " << formaDePagamento;
	cout << " \n O total a pagar é de R$ " << totalapagar;
}

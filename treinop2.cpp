# inclui  <iostream> _ _
usando  namespace  std ;

int  principal (){
	setlocale (LC_ALL, " portugu�s " );
	string nome, tamanho, recheioum, recheiodois, presente, formadepegar, adicional, formaDePagamento;
	int quantiadevos;
	
	// Introdu��o
	cout << " Ol�, bem vindo � loja da Dona Maria, digite seu nome: \n " ;
	cin >> nome;
	
	
	// Tamanho do ovo
	cout << " \n " << nome << " , escolha o tamanho do seu ovo: " ;
	cout << " \n Pequeno - R$7,80 " ;
	cout << " \n M�dio - R$12,90 " ;
	cout << " \n Grande - R$23,95 \n " ;
	
	cin >> tamanho;
	
	while (tamanho != " Grande " && tamanho != " M�dio " && tamanho != " Pequeno " ){
		tamanho. claro ();
		cout << " \n Tamanho inv�lido, digite novamente \n " ;
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
		cout << " \n Recheio inv�lido, digite novamente \n " ;
		cin >> recheioum;
	}
	
	
	// Segundo recheio do ovo
	cout << " \n Gostaria de escolher outro recheio? Todos os recheios saem com 50% de desconto. " ;
	cout << " \nChocolatePreto - R$4,83 " ;
	cout << " \nChocolateBranco - R$2,25 " ;
	cout << " \ nChocolateAoLeite - R$4,66 \n " ;
	cout << " \n Caso n�o queira dois recheios, envie n. \n " ;
	cin >> recheiodois;
	
	while (recheiodois != " ChocolatePreto " && recheiodois != " ChocolateBranco " && recheiodois != " ChocolateAoLeite " && recheiodois != " n " ){
		recheiodois. claro ();
		cout << " \n Recheio inv�lido, digite novamente \n " ;
		cin >> recheiodois;
	}
	
	
	// Presente
	cout << " \n Ir� ser presente? (Acr�scimo de R$2,50, responda com Sim ou N�o) \n " ;
	cin >> presente;
	
	while (presente != " Sim " && presente != " Nao " ){
		presente. claro ();
		cout << " \n Inv�lido, digite novamente \n " ;
		cin >> presente;
	}
	
	if (presente == " Sim " ){
		cout << " \n Vamos embalar o ovo " ;
	} sen�o {
		cout << " \n O ovo ser� deixado em sua caixa " ;
	}
	
	
	// Retirada ou entrega
	cout << " \n Retirada ou Entrega? (Entrega adiciona R$5,00 ao total) \n " ;
	cin >> formadepegar;
	
	while (formadepegar != " Retirada " && formadepegar != " Entrega " ){
		formapegar. claro ();
		cout << " \n Inv�lido, digite novamente \n " ;
		cin >> formadepegar;
	}
	
	if (formadepegar == " Retirada " ){
		cout << " \n Te informaremos quando o ovo estiver pronto. " ;
	} sen�o {
		cout << " \n Te informaremos quando o ovo sair para entrega. " ;
	}
	
	
	// Quantidade de ovos
	cout << " \n Quantos ovos voc� ir� comprar? \n " ;
	cin >> valordevos;
	
	while (quantiadeovos < 1 ){
		presente. claro ();
		cout << " \n O n�mero que voc� digitou � inv�lido, digite novamente \n " ;
		cin >> valordevos;
	}
	
	
	// Adicionais
	cout << " \n Gostaria de colocar mais no ovo? " ;
	cout << " \n KitKat - R$4,67 - Digite KitKat " ;
	cout << " \n MM'S - R$5,43 - Digite MM " ;
	cout << " \n Caso n�o queira, digite n \n " ;
	cin >> adicional;
	
	while (adicionais != " KitKat " && adicional != " MM " && adicional != " n " ){
		adicional. claro ();
		cout << " \n Adicional inv�lido, digite novamente \n " ;
		cin >> adicional;
	}
	
	
	// Forma de pagamento
	cout << " \n Ir� pagar no cart�o de cr�dito ou pix? (Digite 'Credito' ou 'Pix') \n " ;
	cin >> formaDePagamento;
	
	
	// Pre�os dos ovos
	duplo precoPequeno = 7,80 ;
	double precoMedio = 12,90 ;
	duplo precoGrande = 23,95 ;
	
	
	// Valor do tamanho do ovo
	double valorOvo;
	if (tamanho == " Pequeno " ){
	    valorOvo = precoPequeno;
	} else  if (tamanho == " M�dio " ){
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
	if (formaDePagamento == " Cr�dito " ){
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
	cout << " \n O total a pagar � de R$ " << totalapagar;
}

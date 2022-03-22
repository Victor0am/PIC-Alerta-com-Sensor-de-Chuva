# O nosso processo de montagem

De início, queríamos fazer uma janela  quee fechava automaticamente usando um sensor de chuva e abria novamente quando o sensor tivesse seco. Os materiais usados eram:

<p>
  
  <img align="right" src="imagens/05_02_Componentes.jpg" height="30%" width="50%" alt="Spoiler do circuito" horizontal-align="center">
  
  <ul>
    <li> 1  Arduino UNO; </il>
    <li> 1  Cabo do Arduíno; </il>
    <li> 2  Relés 5 Volts 5 Pinos; </il>
    <li> 1  Sensor de Chuva; </il>
    <li> 3  Botões NA; </il>
    <li> 2  Transistores BC548 ou BC337 ou BC547 NPN; </il>
    <li> 5  Resistores 10KΩ / 1/4W; </il>
    <li> 2  Resistores 1KΩ / 1/4W; </il>
    <li> 2  Diodos 1N4007 ou 1N4001; </il>
    <li> 2  LED´s; </il>
    <li> 1  Fonte de Alimentação 5V e uma compatível com o motor que for usado; </il>
    <li> 1  Protoboard; </il>
    <li> 1  Unidade leitora de CD ou 1 motor; </il>
    <li> 2  Metros de fio 0,5 mm; </il>
    <li> 1  Parafuso com porca; </il>
    <li> 2  Chaves fim de curso. </il>
  </ul>
 
</p>



<br/>
<br/>
<br/>
<br/>
<br/>
<br/>
<br/>
<br/>


Ao invés de usar uma janela comum, fizemos uma janela usando madeira:

<p align="center" width="100%">
  <img src="imagens/Madeira_Cortada.jpeg" height="50%" width="50%" alt="Spoiler do circuito" horizontal-align="center">
</p>

<p align="center" width="100%">
  <img src="imagens/Exemplo_de_como_ficaria_janela.jpeg" height="50%" width="50%" alt="Spoiler do circuito" horizontal-align="center">
</p>

<p align="center" width="100%">
  <img src="imagens/Montagem_completa_da_janela.jpg" height="50%" width="50%" alt="Spoiler do circuito" horizontal-align="center">
</p>


Desmontamos a leitora de CD (clique na imagem abaixo para ver o video no youtube mostrando a leitora desmontada):

[![Leitora de CD](http://img.youtube.com/vi/qOR3gVlzI5w/0.jpg)](http://www.youtube.com/watch?v=qOR3gVlzI5w)

Colocamos o fim de curso na leitora:

<p align="center" width="100%">
  <img src="imagens/fim_de_curso_leitora.jpg" height="50%" width="50%" alt="Leitora com fim de Curso" horizontal-align="center">
</p>

E conectamos fios na leitora para conectá-la ao circuito:

<p align="center" width="100%">
  <img src="imagens/08_02_Fios_na_leitora.jpg" height="50%" width="50%" alt="Spoiler do circuito" horizontal-align="center">
</p>

Para o circuito ter alimentação adaptamos um carregador de celular:

<p align="center" width="100%">
  <img src="imagens/08_02_Alimentação_5V.jpg" height="50%" width="50%" alt="Spoiler do circuito" horizontal-align="center">
</p>


Então, montamos o projeto de acordo com o esquemático:

<p align="center" width="100%">
  <img src="imagens/esquematico.jpg" height="50%" width="50%" alt="Spoiler do circuito" horizontal-align="center">
</p>


E o circuito montado na protoboard ficou:

<p align="center" width="100%">
  <img src="imagens/08_02_Inicio_montagem_protoboard.jpg" height="50%" width="50%" alt="Spoiler do circuito" horizontal-align="center">
</p>

<p align="center" width="100%">
  <img src="imagens/08_02_Inicio_montagem.jpg" height="50%" width="50%" alt="Spoiler do circuito" horizontal-align="center">
</p>


Encaixamos os fins de curso e o parafuso na leitora de CD: 

<p align="center" width="100%">
  <img src="imagens/20_02_Encaixe_dos_fim_de_curso_e_parafuso.jpg" height="50%" width="50%" alt="Spoiler do circuito" horizontal-align="center">
</p>


Porém, no meio da montagem faltaram jumpers e o circuito ficou assim:

<p align="center" width="100%">
  <img src="imagens/20_02_Zoom_(JUMPERS_ACABARAM).jpg" height="50%" width="50%" alt="Spoiler do circuito" horizontal-align="center">
</p>

<p align="center" width="100%">
  <img src="imagens/20_02_Protoboard_(JUMPERS_ACABARAM).jpg" height="50%" width="50%" alt="Spoiler do circuito" horizontal-align="center">
</p>


Aí, depois que conseguimos mais jumpers foi finalizada a montagem do circuito na protoboard:

<p align="center" width="100%">
  <img src="imagens/23_02_Montagem_98.jpg" height="50%" width="50%" alt="Spoiler do circuito" horizontal-align="center">
</p>


Por enquanto o projeto está assim, é possível ver o nosso primeiro teste clicando na imagem abaixo:

[![Primeiro teste do circuito](http://img.youtube.com/vi/uPhd9lKzm1s/0.jpg)](http://www.youtube.com/watch?v=uPhd9lKzm1s)

Como é possível ver no vídeo, não conseguimos fazer tudo funcionar do jeito que deveria, então tivemos que fazer algo para tentar resolver o problema. Primeiramente checamos o funcionamento dos componentes e das partes do código para entender o que não estava funcionando.

<p align="center" width="100%">
  <img src="imagens/testando_os_componentes.jpg" height="50%" width="50%" alt="Testando os componentes" horizontal-align="center">
</p>

Tentamos trocar os dois relés por uma alternativa mais simples usando apenas um relé do arduíno.

<p align="center" width="100%">
  <img src="imagens/mudando_o_rele.jpg" height="50%" width="50%" alt="Relé novo" horizontal-align="center">
</p>

Porém, isso não deu certo então resolvemos mudar o projeto para, ao invés de fechar a janela automaticamente, o projeto avisar quando detectasse chuva com um buzzer, e para abrir e fechar a leitora de CD foi contruído um switch. Para isso, seguimos o esquemático:

<p align="center" width="100%">
  <img src="imagens/esquematic.jpeg" height="50%" width="50%" alt="Chave inversora de corrente" horizontal-align="center">
</p>

A nova lista de materiais é:

- 1 Arduino Uno
- 1 Protoboard
- 1 Leitora de CD desmontada
- 1 Buzzer
- 2 LED's
- 2 Resistores 220Ohms
- 1 Resistor 10k Ohms 
- 1 Chave fim de curso
- 1 Sensor de chuva
- 1 Arduino
- Jumpers macho-macho e macho-femea

Então o circuito ficou assim:

<p align="center" width="100%">
  <img src="imagens/protoboard_novo.jpg" height="50%" width="50%" alt="Chave inversora de corrente" horizontal-align="center">
</p>

O switch construído foi esse:

<p align="center" width="100%">
  <img src="imagens/chave_janela.jpg" height="50%" width="50%" alt="Chave inversora de corrente" horizontal-align="center">
</p>

E para melhor funcionamento, fizemos outra janela.

<p align="center" width="100%">
  <img src="imagens/nova_janela.jpg" height="50%" width="50%" alt="Spoiler do circuito" horizontal-align="center">
</p>

<p align="center" width="100%">
  <img src="imagens/colando_a_nova_janela.jpg" height="50%" width="50%" alt="Spoiler do circuito" horizontal-align="center">
</p>

<p align="center" width="100%">
  <img src="imagens/cortando_a_nova_janela.jpg" height="50%" width="50%" alt="Spoiler do circuito" horizontal-align="center">
</p>

O projeto finalizado ficou assim:

<p align="center" width="100%">
  <img src="imagens/janela_pronta.jpg" height="50%" width="50%" alt="Spoiler do circuito" horizontal-align="center">
</p>





## Para voltar para o readme clique [aqui](README.md)

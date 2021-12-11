// Proyecto1_HistoriaNarrada.cpp 
// Kevin de Jes�s Vel�zquez Cabrera
// Crear una historia narrada en consola, mediante la cual por las decisiones tomadas
// por el usuario la historia lleve por caminos diferentes

#include <iostream>
#include <locale.h> // Biblioteca de Idioma
using namespace std;

void title (string title)
{
	int i;
	int val;
	val = title.length(); // Obtenemos el valor del largo de title
	val = val + 20; // Agrega 10 espacios m�s de cada lado
	for (i = 0; i <= val; i++)
	{
		cout << "*";
	}
	cout << "\n \n";

	for (i=0; i <= val; i++)
	{
		cout << " ";
		if (i == 5)
		{
			cout << title;
		}
		cout << " ";
	}
	cout << "\n";
	for (i = 0; i <= val; i++)
	{
		cout << "*";
	}
	cout << "\n \n \n";
} // Funci�n para el T�tulo

int main()
{
	setlocale(LC_CTYPE, "Spanish"); // Se selecciona el idioma a Espa�ol
	string respuesta;
	//string respuesta_in;
	bool bandera = false; // Bool de control que permite al final repetir el bucle del programa
	// int n;

	do
	{
		title("The Heaven Dream"); // Se llama a la funci�n del T�tulo para que se imprima
		cout << "\n \n";
		cout << "Preparate para una experiencia en donde tus decisiones impactan la historia." << endl;
		cout << "\n \n";
		cout << "Decide sabiamente el camino y maravillate con la narrativa." << endl;
		cout << "\n \n";
		cout << "Instrucciones:" << endl;
		cout << "En cada decisi�n deber�s escribir como respuesta \"S�\" si deseas afirmar o \"No\" si deaseas negar." << endl;
		cout << "\n";
		cout << "De ser necesario, en la consola desl�zate siempre hacia arriba para no perderte aspectos de la trama." << endl;
		cout << "\n \n";
		cout << "Deseas continuar??" << endl;
		cin >> respuesta;

		if (respuesta == "S\241"|| respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
		{
			system("cls"); // Comando para limpiar la pantalla
			cout << "Lunes por la ma�ana..." << endl;
			cout << "\n";
			cout << "La alarma est� sonando..." << endl;
			cout << "\n";
			cout << "Beeep Beeep Beeep..." << endl;
			cout << "\n";
			cout << "Te decides levantar??" << endl;
			cin >> respuesta;

			if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
			{
				system("cls"); // Comando para limpiar la pantalla
				cout << "Te levantas de la cama, pero sabes que algo no est� bien... " << endl;
				cout << "\n";
				cout << "Por simples reflejos te preparas para iniciar tu d�a..." << endl;
				cout << "\n";
				cout << "Pero te preguntas, �qu� es lo que haces realmente cuando te levantas?..." << endl;
				cout << "\n";
				cout << "Te diriges hacia al ba�o para tratar de reconocerte a trav�s del espejo, pero..." << endl;
				cout << "\n";
				cout << "El intercomunicador suena..." << endl;
				cout << "\n";
				cout << "Lara es la que llama..." << endl;
				cout << "\n";
				cout << "Contestar??" << endl;
				cin >> respuesta;

				if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
				{
					system("cls"); // Comando para limpiar la pantalla
					cout << "�Lara: Hey Sam, no olvides pasar por Susan hoy..." << endl;
					cout << "\n";
					cout << "�Lara: ... de verdad le sorprendi� que hayas aparecido... " << endl;
					cout << "\n";
					cout << "�Lara: ... s�lo espero �sta vez cumplas tu promesa... " << endl;
					cout << "\n";
					cout << "�Lara: ... como sea, no la cagues, ya no habr�n m�s oportunidades..." << endl;
					cout << "\n";
					cout << "Llamada terminada..." << endl;
					cout << "\n";
					cout << "Desorientado y confundido te acercas a lo que parece una mesa..." << endl;
					cout << "\n";
					cout << "Encuentras una nota en la mesa..." << endl;
					cout << "\n";
					cout << "Nota: Sala de juntas. 11:00 AM. Edificio Bxtr." << endl;
					cout << "\n";
					cout << "Dejas la nota sobre la mesa..." << endl;
					cout << "\n";
					cout << "Te acercas a la ventana para tratar de reconocer aqu�l lugar que parece extra�o..." << endl;
					cout << "\n";
					cout << "..." << endl;
					cout << "\n";
					cout << "Autos pasan frente a ti, pero no procesas el c�mo, miras hacia abajo y est�s en la suite de un edificio..." << endl;
					cout << "\n";
					cout << "Ciertamente no es el lugar que conoces..." << endl;
					cout << "\n";
					cout << "Salir del recinto??" << endl;
					cin >> respuesta;

					if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
					{
						system("cls"); // Comando para limpiar la pantalla
						cout << "Sales del recinto y te acercas a la recepci�n..." << endl;
						cout << "\n";
						cout << "�Recepcionista: Buen d�a Sam, es una ma�ana fr�a en WestHeaven, no le parece." << endl;
						cout << "\n";
						cout << "Actuas como si conocieras a la recepcionista desde siempre..." << endl;
						cout << "\n";
						cout << "Preguntas por el destino del Edificio Bxtr..." << endl;
						cout << "\n";
						cout << "�Recepcionista: Edificio Bxtr??... " << endl;
						cout << "\n";
						cout << "�Recepcionista: ... debe ser el que ha estado en boca de todos �ltimamente..." << endl;
						cout << "\n";
						cout << "�Recepcionista: ... puede tomar un taxi desde aqu�, el edificio se encuentra al Norte de WestHeaven." << endl;
						cout << "\n";
						cout << "Tomar el taxi??" << endl;
						cin >> respuesta;

						if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
						{
							system("cls"); // Comando para limpiar la pantalla
							cout << "Subes a un taxi." << endl;
							cout << "\n";
							cout << "El conductor enciende el veh�culo..." << endl;
							cout << "\n";
							cout << "Los propulsores empiezan a hacer ruido..." << endl;
							cout << "\n";
							cout << "El taxi comienza a levantarse del suelo..." << endl;
							cout << "\n";
							cout << "Te sostienes de la puerta..." << endl;
							cout << "\n";
							cout << "Impresionado y nervioso te encuentras al sentir la aceleraci�n inicial que mantine tu cuerpo pegado al asiento." << endl;
							cout << "\n";
							cout << "Cada metro que recorres sobre el taxi es inconcebible." << endl;
							cout << "\n";
							cout << "Eres testigo de lo que parece una ilusi�n. Arquitectura descomunal, tranv�as de levitaci�n magn�tica, autos voladores." << endl;
							cout << "\n";
							cout << "Acerc�ndose por la vista frontal, un edificio se asoma..." << endl;
							cout << "\n";
							cout << "�Conductor: Al complejo a donde se dirige se�or, deber� tener mucho cuidado..." << endl;
							cout << "\n";
							cout << "�Conductor: ... es cierto que de ese edificio han salido grandes inventos que nos han beneficiado..." << endl;
							cout << "\n";
							cout << "�Conductor: ... pero tambi�n es conocido que guardan en ese lugar secretos... " << endl;
							cout << "\n";
							cout << "�Conductor: ... secretos oscuros que nos podr�an poner en peligro a todos en WestHeaven." << endl;
							cout << "\n";
							cout << "�Conductor: Bueno se�or Sam, este es el Edificio Bxtr." << endl;
						}
						else
						{
							system("cls"); // Comando para limpiar la pantalla
							cout << "No has tomado el taxi. Sales del edificio y caminas por las calles desconocidas." << endl;
							cout << "\n";
							cout << "Mientras paseas curiosamente, eres interrumpido..." << endl;
							cout << "\n";
							cout << "Eres empujado r�pidamente por un sujeto que va sobre un deslizador a�reo." << endl;
							cout << "\n";
							cout << "De alguna manera, ese dispositivo te es familiar, lo conoces..." << endl;
							cout << "\n";
							cout << "... aunque solamente lo hab�as imaginado por aquella vieja pel�cula." << endl;
							cout << "\n";
							cout << "Sigues con la mirada al sujeto con la \"hoverboard\" hasta que se detiene en un establecimiento." << endl;
							cout << "\n";
							cout << "El sujeto se baja de la \"hoverboard\" y la deja afuera del establecimiento." << endl;
							cout << "\n";
							cout << "Corres velozmente hacia el lugar y te subes en la \"hoverboard\"..." << endl;
							cout << "\n";
							cout << "Te cuesta un poco mantener el equilibrio..." << endl;
							cout << "\n";
							cout << "Pero tu adrenalina controla tu v�rtigo..." << endl;
							cout << "\n";
							cout << "Comienzas a zurcar sobre el aire, mientras contemplas esa ciudad de ensue�o." << endl;
							cout << "\n";
							cout << "Despu�s de un rato. Llegas al Edificio Bxtr." << endl;
						}
						cout << "\n";
						cout << "Entras por enfrente??" << endl;
						cin >> respuesta;

						if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
						{
							system("cls"); // Comando para limpiar la pantalla
							cout << "Te diriges hacia la puerta principal." << endl;
							cout << "\n";
							cout << "Un guardia en la entrada pide que te identifiques." << endl;
							cout << "\n";
							cout << "Registras en tus bolsas por alguna ID." << endl;
							cout << "\n";
							cout << "Se acerca un segundo guardia." << endl;
							cout << "\n";
							cout << "�Segundo guardia: Por qu� lo detines Bob??" << endl;
							cout << "\n";
							cout << "�Segundo guardia: Acaso eso no te parece m�s que una ID??" << endl;
							cout << "\n";
							cout << "El guardia se�ala a una foto en la rececpci�n..." << endl;
							cout << "\n";
							cout << "Qui�n est� en la foto eres t�." << endl;
							cout << "\n";
							cout << "�Primer guardia: Disculpe se�or Sam. Es mi primer semana y nunca lo hab�a visto en persona." << endl;
							cout << "\n";
							cout << "Pasas sin m�s demoras y te diriges hacia el elevador." << endl;
							cout << "\n";
							cout << "Presionas el bot�n que te dirige hacia la sala de juntas??" << endl;
							cin >> respuesta;

							if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
							{
								system("cls"); // Comando para limpiar la pantalla
								cout << "Entras en la sala de juntas." << endl;
								cout << "\n";
								cout << "Hay gente esperando a que inicie la reuni�n. Se escuhan murmullos." << endl;
								cout << "\n";
								cout << "Pero cuando todos notan tu presencia guardan silencio." << endl;
								cout << "\n";
								cout << "Un individuo entra ansioso a la sala..." << endl;
								cout << "\n";
								cout << "... se acomoda su vestimenta deslineada..." << endl;
								cout << "\n";
								cout << "�Individuo: Como sabr�n, desde hace un par de semanas detectamos una anomal�a gravitacional..." << endl;
								cout << "\n";
								cout << "�Individuo: ... a unos 100,000 km de la Luna. A�n no sabemos c�mo se form�... " << endl;
								cout << "\n";
								cout << "�Individuo: ... pero la hip�tesis inicial suger�a que era un cuerpo negro atravesanso una trayectoria inusual..." << endl;
								cout << "\n";
								cout << "�Individuo: ... por lo que no hab�a manera de detectar la radiaci�n emitida." << endl;
								cout << "\n";
								cout << "�Individuo: Sin embargo en los reportes analizados ayer por la noche detectaron radiaci�n gamma..." << endl;
								cout << "\n"; 
								cout << "�Individuo: ... por lo que la hip�tesis original queda descartada." << endl;
								cout << "\n";
								cout << "Se escuchan murmullos en la multitud." << endl;
								cout << "\n";
								cout << "�Individuo: Silencio, por favor. El d�a de hoy contamos con la presecnia del Doctor Sam." << endl;
								cout << "\n";
								cout << "Actuas indiferente." << endl;
								cout << "\n";
								cout << "�Individuo: Doctor tiene algo qu� decir??" << endl;
								cin >> respuesta;

								if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
								{
									system("cls"); // Comando para limpiar la pantalla
									cout << "Te paras frente a la multitud." << endl;
									cout << "\n";
									cout << "Tomas un respiro profundo para iniciar a hablar..." << endl;
									cout << "\n";
									cout << "..." << endl;
									cout << "Todo empieza a temblar..." << endl;
									cout << "\n";
									cout << "TRRR TRRR TRRR" << endl;
									cout << "\n";
									cout << "Se escucha una fuente de radio pulsante, similar al sonido de los pulsares..." << endl;
									cout << "\n";
									cout << "Las alarmas del lugar comienzan a sonar y las luces rojas de emergencia se encienden y apagan..." << endl;
									cout << "\n"; 
									cout << "TWEEEE TWEEE TWEEE" << endl;
									cout << "\n";
									cout << "La desesperaci�n y el caos reinan en el complejo." << endl;
									cout << "\n";
									cout << "Tratas de tranquilizar a algunas personas, pero todos quieren salir..." << endl;
									cout << "\n";
									cout << "Escuchas que te llaman a lo lejos..." << endl;
									cout << "\n";
									cout << "No puedes distinguir de d�nde viene el llamado..." << endl;
									cout << "\n";
									cout << "Sientes una mano firme que te agarra por el hombro y te da la vuelta..." << endl;
									cout << "\n";
									cout << "�Persona Misteriosa: Sam!! Deprisa!! tenemos que ir a la sala C..." << endl;
									cout << "\n";
									cout << "Acompa�as a la persona misteriosa??" << endl;
									cin >> respuesta;

									if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
									{
										system("cls"); // Comando para limpiar la pantalla
										cout << "Te diriges hacia al sal�n C junto con la Persona Misteriosa..." << endl;
										cout << "\n";
										cout << "Bajan por las escaleras de emergencia..." << endl;
										cout << "\n";
										cout << "Justo enfrente de las escaleras se encuentra esta sala. Identificada con la letra C..." << endl;
										cout << "\n";
										cout << "La entrada est� restringida, por lo que la Persona Misteriosa usa sus biometr�as para tener acceso." << endl;
										cout << "\n";
										cout << "***Sistema Concedido***" << endl;
										cout << "\n";
										cout << "***Bienvenida Dr Lara***" << endl;
										cout << "\n";
										cout << "Entras a la sala C con Lara." << endl;
										cout << "\n";
										cout << "�Lara (Preocupada y Angustiada): Sam, la anomal�a gravitacional..." << endl;
										cout << "\n";
										cout << "�Lara: ... estabas en lo cierto..." << endl;
										cout << "\n";
										cout << "�Lara: ... no era un cuerpo negro como todos pensaban." << endl;
										cout << "\n";
										cout << "�Lara: Es un puente Einstein-Rosen..." << endl;
										cout << "\n";
										cout << "�Lara: El pulsar que escuchamos..." << endl;
										cout << "\n";
										cout << "�Lara (Sorprendida): ... Son ellos Sam!!" << endl;
										cout << "\n";
										cout << "�Lara: Por eso no quer�an publicar tu investigaci�n" << endl;
										cout << "\n";
										cout << "TWR TWR TWR TWR" << endl;
										cout << "\n";
										cout << "�Lara: Sam!!??" << endl;
										cout << "\n";
										cout << "�Lara: Sam!! Qu� te pasa??" << endl;
										cout << "\n";
										cout << "Te desvaneces por unos instantantes y caes hacia Lara por inercia." << endl;
																				
									}
									else
									{
										// No acompa�as a PM
										system("cls"); // Comando para limpiar la pantalla
										cout << "Te niegas a acompa�ar a esta Persona Misteriosa." << endl;
										cout << "\n";
										cout << "Caminas hacia el otro lado pero esta Persona Misteriosa insiste." << endl; 
										cout << "\n";
										cout << "Del otro lado del pasillo unos hombres de negro se aproximan..." << endl;
										cout << "\n";
										cout << "�MIB: Alto!! Det�nganse ustedes dos!!" << endl;
										cout << "\n";
										cout << "�Persona Misteriosa: Sam deprisa, tienes que ir conmigo." << endl;
										cout << "\n";
										cout << "No te queda m�s opci�n que seguirla." << endl;
										cout << "\n";
										cout << "�Persona Misteriosa: Si esos hombres llegaron hasta este pasillo..." << endl;
										cout << "\n";
										cout << "�Persona Misteriosa: ... entonces la sala C ha sido comprometida." << endl;
										cout << "\n";
										cout << "Se dirigen hacia un laboratorio inferior del Edificio Bxtr" << endl;
										cout << "\n";
										cout << "Llegan al laboratorio pero todo es un desastre..." << endl;
										cout << "\n";
										cout << "�Persona Misteriosa: Sam enciende tu computadora y publica tu investigaci�n..." << endl;
										cout << "\n";
										cout << "�Persona Misteriosa: Solo as� tal vez tengamos una oportunidad... " << endl;
										cout << "\n";
										cout << "�Persona Misteriosa: La anomal�a gravitacional, siempre tuviste la raz�n." << endl;
										cout << "\n";
										cout << "�Persona Misteriosa: Si tan s�lo todos te hubieramos escuchado, estar�amos mejor preparados." << endl;
										cout << "\n";
										cout << "�Perona Misteriosa: Lo siento por apartar a Susan de t�, cre� que..." << endl;
										cout << "\n";
										cout << "TWR TWR TWR TWR" << endl;
										cout << "\n";
										cout << "El pulso electromagn�tico parece afectarte..." << endl;
									}
									cout << "\n";
									cout << "Te encuentras desorientado..." << endl;
									cout << "\n";
									cout << "Necesitas salir del Edificio Bxtr." << endl;
									cout << "\n";
									cout << "Salir del Edificio Bxtr??" << endl;
									cin >> respuesta;

									// Final 1
									if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
									{
										system("cls"); // Comando para limpiar la pantalla
										cout << "En las calles de WestHeaven..." << endl;
										cout << "\n";
										cout << "TWR TWR TWR TWR" << endl;
										cout << "\n";
										cout << "El pulso electromagn�tico est� todav�a presente, m�s intenso..." << endl;
										cout << "\n";
										cout << "... pero esta vez no te causa mucha desorientaci�n." << endl;
										cout << "\n";
										cout << "Miras hacia el cielo y se empieza a oscurecer..." << endl;
										cout << "\n";
										cout << "TWR TWR TWR TWR" << endl;
										cout << "\n";
										cout << "El pulso electromagn�tico incrementa..." << endl;
										cout << "\n";
										cout << "Todo ese pulso, eran ellos..." << endl;
										cout << "\n";
										cout << "Sus naves est�n altamente magnetizadas y rotan a altas velocidades..." << endl;
										cout << "\n";
										cout << "...lo que hace que emitan pulsos constantes electromagn�ticos." << endl;
										cout << "\n";
										cout << "De una nave nodriza es inyectada una c�psula hacia tu posici�n." << endl;
										cout << "\n";
										cout << "�Lara: Sam qu� est� pasando??" << endl;
										cout << "\n";
										cout << "De la c�psula sale un ser..." << endl;
										cout << "\n";
										cout << "Su morfolog�a es incierta, las luces de su nave junto con el humo nublan su visi�n." << endl;
										cout << "\n";
										cout << "Se dirige hacia ti..." << endl;
										cout << "\n";
										cout << "�Lara: Sam??" << endl;
										cout << "\n";
										cout << "�Ser Extraplanetario: SoHvaD 'e' Damevchu'..." << endl;
										cout << "\n";
										cout << "�Ser Extraplanetario: ... bAtlh malojnlSChoH." << endl;
										cout << "\n";
										cout << "Traducir??" << endl;
										cin >> respuesta;

										if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
										{
											system("cls"); // Comando para limpiar la pantalla
											cout << "\n";
											cout << "�Ser Extraplanetario: Has hecho muy bien tu misi�n, Heraldo..." << endl;
											cout << "\n";
											cout << "��Ser Extraplanetario: ... Finalmente nos has conseguido un nuevo hogar." << endl;
											cout << "\n";
											title("GAME OVER");
											cout << "\n";
											cout << "Desea continuar??" << endl;
											cin >> respuesta;
											
										}
									}
									// Final 2
									else
									{
										system("cls"); // Comando para limpiar la pantalla
										cout << "Te recuperas del efecto del pulso electromagn�tico..." << endl;
										cout << "\n";
										cout << "�Lara: Necesitamos ir a la enfermer�a para que te recuperes de estos pulsos." << endl;
										cout << "\n";
										cout << "Corren por los pasillos, las luces y alarmas de emergencia no cesan." << endl;
										cout << "\n";
										cout << "Al doblar por el pasillo se encuentran de frente con los Hombres de Negro." << endl;
										cout << "\n";
										cout << "Pero estos no los ven ya que est�n de espaldas." << endl;
										cout << "\n";
										cout << "TWR TWR TWR TWR" << endl;
										cout << "\n";
										cout << "Otro pulso electromagn�tico te desestabiliza y es m�s punzante, por lo que caes al suelo." << endl;
										cout << "\n";
										cout << "�Lara: Sam, no ahora, no ahora, arriba Sam." << endl;
										cout << "\n";
										cout << "Uno de los Hombres de Negro los avista y alerta a los dem�s..." << endl;
										cout << "\n";
										cout << "MIB 1: Se fueron por esto pasillo!!" << endl;
										cout << "\n";
										cout << "Lara te ayuda a levantarte y lentamente intentan escapar" << endl;
										cout << "\n";
										cout << "Otro Hombre de Negro los ve y dispara" << endl;
										cout << "\n";
										cout << "PUMM" << endl;
										cout << "\n";
										cout << "MIB 1: Qu� haces?? Son doctores y est�n desarmados." << endl;
										cout << "\n";
										cout << "MIB 2: Son mi misi�n. A todos los agentes, ala sur. Ya!!" << endl;
										cout << "\n";
										cout << "Lara intenta ayudarte pero has sufrido demasiados pulsos electromagn�ticos, ya no puedes caminar m�s." << endl;
										cout << "\n";
										cout << "Te despides de ella y le dices que cuide bien de Susan." << endl;
										cout << "\n";
										cout << "�Lara: No te dejar� as� Sam." << endl;
										cout << "\n";
										cout << "Un Hombre de Negro llega hasta tu posici�n y te detiene." << endl;
										cout << "\n";
										cout << "MIB 1: Maldita escoria, por fin te tenemos..." << endl;
										cout << "\n";
										cout << "MIB 2: Cre�mos tu fachada, pero nos condonaste a todos..." << endl;
										cout << "\n";
										cout << "MIB 2: Incluso a Susan. C�mo pudiste hacerle esto a ella??!!" << endl;
										cout << "\n";
										cout << "Te sacan del Edificio Bxtr como prisionero y escuchas los gritos de Lara." << endl;
										cout << "\n";
										cout << "WestHeaven est� invadida." << endl;
										cout << "\n";
										cout << "Hay naves en el cielo, est�n altamente magnetizadas y rotan a altas velocidades..." << endl;
										cout << "\n";
										cout << "...lo que hace que emitan pulsos constantes electromagn�ticos." << endl;
										cout << "\n";
										cout << "Sin embargo estos pulsos electromagn�ticos se detienen en cuanto sales del complejo." << endl; 
										cout << "\n";
										cout << "MIB 1: Presten atenci�n todos!! ..." << endl;
										cout << "\n";
										cout << "MIB 1: El famoso Doctor Sam Richards nos minti�..." << endl;
										cout << "\n";
										cout << "MIB 1: Se hizo pasar por uno de nosotros y ahora enfrentar� las consecuencias..." << endl;
										cout << "\n";
										cout << "MIB 2: Gracias a los impulsos electromagn�ticos de las mismas naves que nos quieren invadir..." << endl;
										cout << "\n";
										cout << "MIB 2: Se han debilitado y son vulnerables..." << endl;
										cout << "\n";
										cout << "MIB 2: Esto es lo que pasa cuando se meten con WestHeaven..." << endl;
										cout << "\n";
										cout << "�Lara: Nooo Sam!!" << endl;
										cout << "\n";
										title("GAME OVER");
										cout << "\n";
										cout << "Desea continuar??" << endl;
										cin >> respuesta;

									}
								}
								else
								{
									// Decir nada
									system("cls"); // Comando para limpiar la pantalla
									cout << "�Individuo: Bien parece que en esta ocasi�n, el Doctor Sam ha decidido ser t�mido..." << endl;
									cout << "\n";
									cout << "�Individuo: ... al no querer compartir sus hallazgos con los colegas." << endl;
									cout << "\n";
									cout << "�Individuo: Como dec�a, tenemos que seguir investigando la anomal�a gravitacional..." << endl;
									cout << "\n";
									cout << "�Individuo: ... para..." << endl;
									// Pasa lo mismo que en la decisi�n anterior
									cout << "Todo empieza a temblar..." << endl;
									cout << "\n";
									cout << "TRRR TRRR TRRR" << endl;
									cout << "\n";
									cout << "Se escucha una fuente de radio pulsante, similar al sonido de los pulsares..." << endl;
									cout << "\n";
									cout << "Las alarmas del lugar comienzan a sonar y las luces rojas de emergencia se encienden y apagan..." << endl;
									cout << "\n";
									cout << "TWEEEE TWEEE TWEEE" << endl;
									cout << "\n";
									cout << "La desesperaci�n y el caos reinan en el complejo." << endl;
									cout << "\n";
									cout << "Tratas de tranquilizar a algunas personas, pero todos quieren salir..." << endl;
									cout << "\n";
									cout << "A una de esas personas que tratas de tranquilizar reconoces su voz..." << endl;
									cout << "\n";
									cout << "Es Lara y decide quedarse contigo." << endl;
									// Cambiamos el rumbo
									cout << "TWR TWR TWR TWR" << endl;
									cout << "\n";
									cout << "El pulso electromagn�tico parece afectarte..." << endl;
									cout << "\n";
									cout << "Te encuentras desorientado..." << endl;
									cout << "\n";
									cout << "Necesitas salir del Edificio Bxtr." << endl;
									cout << "\n";
									cout << "Salir del Edificio Bxtr??" << endl;
									cin >> respuesta;
									// Volvemos a la historia principal
									
									// Final 1
									if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
									{
										system("cls"); // Comando para limpiar la pantalla
										cout << "En las calles de WestHeaven..." << endl;
										cout << "\n";
										cout << "TWR TWR TWR TWR" << endl;
										cout << "\n";
										cout << "El pulso electromagn�tico est� todav�a presente, m�s intenso..." << endl;
										cout << "\n";
										cout << "... pero esta vez no te causa mucha desorientaci�n." << endl;
										cout << "\n";
										cout << "Miras hacia el cielo y se empieza a oscurecer..." << endl;
										cout << "\n";
										cout << "TWR TWR TWR TWR" << endl;
										cout << "\n";
										cout << "El pulso electromagn�tico incrementa..." << endl;
										cout << "\n";
										cout << "Todo ese pulso, eran ellos..." << endl;
										cout << "\n";
										cout << "Sus naves est�n altamente magnetizadas y rotan a altas velocidades..." << endl;
										cout << "\n";
										cout << "...lo que hace que emitan pulsos constantes electromagn�ticos." << endl;
										cout << "\n";
										cout << "De una nave nodriza es inyectada una c�psula hacia tu posici�n." << endl;
										cout << "\n";
										cout << "�Lara: Sam qu� est� pasando??" << endl;
										cout << "\n";
										cout << "De la c�psula sale un ser..." << endl;
										cout << "\n";
										cout << "Su morfolog�a es incierta, las luces de su nave junto con el humo nublan su visi�n." << endl;
										cout << "\n";
										cout << "Se dirige hacia ti..." << endl;
										cout << "\n";
										cout << "�Lara: Sam??" << endl;
										cout << "\n";
										cout << "�Ser Extraplanetario: SoHvaD 'e' Damevchu'..." << endl;
										cout << "\n";
										cout << "�Ser Extraplanetario: ... bAtlh malojnlSChoH." << endl;
										cout << "\n";
										cout << "Traducir??" << endl;
										cin >> respuesta;

										if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
										{
											system("cls"); // Comando para limpiar la pantalla
											cout << "\n";
											cout << "�Ser Extraplanetario: Has hecho muy bien tu misi�n, Heraldo..." << endl;
											cout << "\n";
											cout << "��Ser Extraplanetario: ... Finalmente nos has conseguido un nuevo hogar." << endl;
											cout << "\n";
											title("GAME OVER");
											cout << "\n";
											cout << "Desea continuar??" << endl;
											cin >> respuesta;

										}
									}
										// Final 2
									else
									{
										system("cls"); // Comando para limpiar la pantalla
										cout << "Te recuperas del efecto del pulso electromagn�tico..." << endl;
										cout << "\n";
										cout << "�Lara: Necesitamos ir a la enfermer�a para que te recuperes de estos pulsos." << endl;
										cout << "\n";
										cout << "Corren por los pasillos, las luces y alarmas de emergencia no cesan." << endl;
										cout << "\n";
										cout << "Al doblar por el pasillo se encuentran de frente con los Hombres de Negro." << endl;
										cout << "\n";
										cout << "Pero estos no los ven ya que est�n de espaldas." << endl;
										cout << "\n";
										cout << "TWR TWR TWR TWR" << endl;
										cout << "\n";
										cout << "Otro pulso electromagn�tico te desestabiliza y es m�s punzante, por lo que caes al suelo." << endl;
										cout << "\n";
										cout << "�Lara: Sam, no ahora, no ahora, arriba Sam." << endl;
										cout << "\n";
										cout << "Uno de los Hombres de Negro los avista y alerta a los dem�s..." << endl;
										cout << "\n";
										cout << "MIB 1: Se fueron por esto pasillo!!" << endl;
										cout << "\n";
										cout << "Lara te ayuda a levantarte y lentamente intentan escapar." << endl;
										cout << "\n";
										cout << "Otro Hombre de Negro los ve y dispara." << endl;
										cout << "\n";
										cout << "PUMM" << endl;
										cout << "\n";
										cout << "MIB 1: Qu� haces?? Son doctores y est�n desarmados." << endl;
										cout << "\n";
										cout << "MIB 2: Son mi misi�n. A todos los agentes, ala sur. Ya!!" << endl;
										cout << "\n";
										cout << "Lara intenta ayudarte pero has sufrido demasiados pulsos electromagn�ticos, ya no puedes caminar m�s." << endl;
										cout << "\n";
										cout << "Te despides de ella y le dices que cuide bien de Susan." << endl;
										cout << "\n";
										cout << "�Lara: No te dejar� as� Sam." << endl;
										cout << "\n";
										cout << "Un Hombre de Negro llega hasta tu posici�n y te detiene." << endl;
										cout << "\n";
										cout << "MIB 1: Maldita escoria, por fin te tenemos..." << endl;
										cout << "\n";
										cout << "MIB 2: Cre�mos tu fachada, pero nos condonaste a todos..." << endl;
										cout << "\n";
										cout << "MIB 2: Incluso a Susan. C�mo pudiste hacerle esto a ella??!!" << endl;
										cout << "\n";
										cout << "Te sacan del Edificio Bxtr como prisionero y escuchas los gritos de Lara." << endl;
										cout << "\n";
										cout << " WestHeaven est� invadida." << endl;
										cout << "\n";
										cout << "Hay naves en el cielo, est�n altamente magnetizadas y rotan a altas velocidades..." << endl;
										cout << "\n";
										cout << "...lo que hace que emitan pulsos constantes electromagn�ticos." << endl;
										cout << "\n";
										cout << "Sin embargo estos pulsos electromagn�ticos se detienen en cuanto sales del complejo." << endl; 
										cout << "\n";
										cout << "MIB 1: Presten atenci�n todos!! ..." << endl;
										cout << "\n";
										cout << "MIB 1: El famoso Doctor Sam Richards nos minti�..." << endl;
										cout << "\n";
										cout << "MIB 1: Se hizo pasar por uno de nosotros y ahora enfrentar� las consecuencias..." << endl;
										cout << "\n";
										cout << "MIB 2: Gracias a los impulsos electromagn�ticos de las mismas naves que nos quieren invadir..." << endl;
										cout << "\n";
										cout << "MIB 2: Se han debilitado y son vulnerables..." << endl;
										cout << "\n";
										cout << "MIB 2: Esto es lo que pasa cuando se meten con WestHeaven..." << endl;
										cout << "\n";
										cout << "�Lara: Nooo Sam!!" << endl;
										cout << "\n";
										title("GAME OVER");
										cout << "\n";
										cout << "Desea continuar??" << endl;
										cin >> respuesta;

									}
								}
							}
							else
							{
								// No presionas el bot�n que va a la sala de juntas
								system("cls"); // Comando para limpiar la pantalla
								cout << "Presionas el bot�n del elevador que se dirige al laboratorio." << endl;
								cout << "\n";
								cout << "Sales del elevador y llegas al laboratorio..." << endl;
								cout << "\n";
								cout << "El lugar est� hecho un desastre..." << endl;
								cout << "\n";
								cout << "Lo �nico apreciable de la pila de documentos es una foto." << endl;
								cout << "\n";
								cout << "Analizas la foto, la sacas del marco y al reverso..." << endl;
								cout << "\n";
								cout << "La foto tiene una nota, la cual dice:" << endl;
								cout << "\n";
								cout << "Entre todo el Universo y el cosmos, en el �nico lugar en donde me he perdido, es en tus ojos..." << endl;
								cout << "\n";
								cout << "... Susan 3645." << endl;
								cout << "\n";
								cout << "Recuerdas la llamada temprano con Lara..." << endl;
								cout << "\n";
								cout << "Una �ltima oportunidad." << endl; 
								cout << "\n";
								cout << "As� que decides irte del Edificio Bxtr." << endl;
								cout << "\n";
								cout << "Continuar??" << endl;
								cin >> respuesta;

								if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
								{
									system("cls"); // Comando para limpiar la pantalla
									cout << "Llegas a un departamento." << endl;
									cout << "\n";
									cout << "Tocas el timbre..." << endl;
									cout << "\n";
									cout << "DING DONG" << endl;
									cout << "\n";
									cout << "Susan abre la puerta, emocionada al verte, te abraza." << endl;
									cout << "\n";
									cout << "�Susan: Cre� que no vendr�as, la �ltima vez, esper� en la ventana pero nunca llegaste." << endl;
									cout << "\n";
									cout << "Te dispones a disfrutar el cumplea�os de Susan." << endl;
									cout << "\n";
									title("GAME OVER");
									cout << "\n";
									cout << "Continuar??" << endl;
									cin >> respuesta;

								}
							}
						}
						else
						{
							// Explora el recinto
							system("cls"); // Comando para limpiar la pantalla
							cout << "Decidiste entrar por la puerta trasera de servicios." << endl;
							cout << "\n";
							cout << "Encuentras unas escaleras de emergencia y desciendes." << endl;
							cout << "\n";
							cout << "Justo al termino de las escaleras notas una puerta bloqueada. As� que no puedes entrar." << endl;
							cout << "\n";
							cout << "Por lo que rodeas el complejo y encuentras un elevador. Sin embargo ya bajaste las escaleras..." << endl;
							cout << "\n";
							cout << "... deber�as estar en la planta m�s baja, �no es as�?... " << endl;
							cout << "\n";
							cout << "Entras al elevdador..." << endl;
							cout << "\n";
							cout << "Presionas el bot�n que dirige hacia el laboratorio inferior." << endl;
							cout << "\n";
							cout << "Sales del elavador y entras al laboratorio..." << endl;
							cout << "\n";
							cout << "... no hay nadie, el laboratorio est� vac�o." << endl;
							cout << "\n";
							cout << "Caminas hacia un escritorio, est� desordenado..." << endl;
							cout << "\n";
							cout << "Hay una computadora." << endl;
							cout << "\n";
							cout << "Utilizar computadora??" << endl;
							cin >> respuesta;

							if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
							{
								system("cls"); // Comando para limpiar la pantalla
								cout << "Buscas tu nombre en la base de datos..." << endl;
								cout << "\n";
								cout << "Pero ni siquiera sabes tu apellido..." << endl;
								cout << "\n";
								cout << "Cierras el buscador..." << endl;
								cout << "\n";
								cout << "Hay un esquema de un art�culo mostrado en pantalla..." << endl;
								cout << "\n";
								cout << "... parece que alguien ha estado ocupado analizando la Luna..." << endl;
								cout << "\n";
								cout << "Pero, por qu� en un centro tan avanzado, simplemente se conforman con estudiar la Luna??" << endl;
								cout << "\n";
								cout << "Lees el documento..." << endl;
								cout << "\n";
								cout << "... Anomal�a Gravitacional..." << endl;
								cout << "\n";
								cout << "... Cuerpo Negro..." << endl;
								cout << "\n";
								cout << "... Radiaci�n Gamma..." << endl;
								cout << "\n";
								cout << "... Puente Einstein-Rosen..." << endl;
								cout << "\n";
								cout << "Definitivamente el taxista ten�a raz�n de que en el Edificio Bxtr se guardan secretos." << endl;
								cout << "\n";
								cout << "En el art�culo est� una foto tuya con una descripci�n..." << endl;
								cout << "\n";
								cout << "La imagen dice:" << endl;
								cout << "\n";
								cout << "El famoso Doctor Sam Richards ha detectado una anomal�a gravitacional ubicada a 100,000 km de distancia de la Luna..." << endl;
								cout << "\n";
								cout << "... los primeros an�lisis han sugerido que se trata de la presencia de un cuerpo negro." << endl;
								cout << "\n";
								cout << "Entra una cientr�fica al laboratorio..." << endl;
								cout << "\n";
								cout << "�Cient�fica: Veo que te pones al tanto, no Sam??" << endl;
								cout << "\n";
								cout << "�Cient�fica: Acerca de eso, tenemos que hablar de tu investigaci�n..." << endl;
								cout << "\n";
								cout << "�Cient�fica: Debemos de hablar en un lugar seguro, vamos al sal�n C" << endl;
								// Volvemos a la historia principal
								cout << "\n";
								cout << "Te diriges junto con la cient�fica hacia este lugar seguro." << endl;
								cout << "\n";
								cout << "La entrada est� restringida, por lo que la Cient�fica usa sus biometr�as para tener acceso." << endl;
								cout << "\n";
								cout << "***Sistema Concedido***" << endl;
								cout << "\n";
								cout << "***Bienvenida Dr Lara***" << endl;
								cout << "\n";
								cout << "Entras a la sala C con Lara." << endl;
								cout << "\n";
								cout << "�Lara (Preocupada y Angustiada): Sam, la anomal�a gravitacional..." << endl;
								cout << "\n";
								cout << "�Lara: ... estabas en lo cierto..." << endl;
								cout << "\n";
								cout << "�Lara: ... no era un cuerpo negro como todos pensaban." << endl;
								cout << "\n";
								cout << "�Lara: Es un puente Einstein-Rosen..." << endl;
								cout << "\n";
								cout << "�Lara: El pulsar que escuchamos..." << endl;
								cout << "\n";
								cout << "�Lara (Sorprendida): ... Son ellos Sam!!" << endl;
								cout << "\n";
								cout << "�Lara: Por eso no quer�an publicar tu investigaci�n." << endl;
								cout << "\n";
								cout << "TWR TWR TWR TWR" << endl;
								cout << "\n";
								cout << "�Lara: Sam!!??" << endl;
								cout << "\n";
								cout << "�Lara: Sam!! Qu� te pasa??" << endl;
								cout << "\n";
								cout << "Te desvaneces por unos instantantes y caes hacia Lara por inercia." << endl;
								cout << "\n";
								cout << "Decides levantarte??" << endl;
								cin >> respuesta;

								if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
								{
									system("cls"); // Comando para limpiar la pantalla
									cout << "Despu�s de un rato inconsciente te levantas y lo primero que ves es a Lara..." << endl;
									cout << "\n";
									cout << "Hay algo reconfortante en ella." << endl;
									cout << "\n";
									cout << "Los estruendos electromagn�ticos se hacen presentes nuevamente..." << endl;
									cout << "\n";
									cout << "TWR TWR TWR TWR" << endl;
									cout << "\n";
									cout << "Pero los resistes..." << endl;
									cout << "\n";
									cout << "�Lara: Necesitamos ir a la enfermer�a para que te recuperes de estos pulsos." << endl;
									cout << "\n";
									cout << "Corren por los pasillos, las luces y alarmas de emergencia no cesan." << endl;
									cout << "\n";
									cout << "Al doblar por el pasillo se encuentran de frente con los Hombres de Negro." << endl;
									cout << "\n";
									cout << "Pero estos no los ven ya que est�n de espaldas." << endl;
									cout << "\n";
									cout << "TWR TWR TWR TWR" << endl;
									cout << "\n";
									cout << "Otro pulso electromagn�tico te desestabiliza y es m�s punzante, por lo que caes al suelo." << endl;
									cout << "\n";
									cout << "�Lara: Sam, no ahora, no ahora, arriba Sam." << endl;
									cout << "\n";
									cout << "Uno de los Hombres de Negro los avista y alerta a los dem�s..." << endl;
									cout << "\n";
									cout << "MIB 1: Se fueron por esto pasillo!!" << endl;
									cout << "\n";
									cout << "Lara te ayuda a levantarte y lentamente intentan escapar." << endl;
									cout << "\n";
									cout << "Otro Hombre de Negro los ve y dispara." << endl;
									cout << "\n";
									cout << "PUMM" << endl;
									cout << "\n";
									cout << "MIB 1: Qu� haces?? Son doctores y est�n desarmados." << endl;
									cout << "\n";
									cout << "MIB 2: Son mi misi�n. A todos los agentes, ala sur. Ya!!" << endl;
									cout << "\n";
									cout << "Lara intenta ayudarte pero has sufrido demasiados pulsos electromagn�ticos, ya no puedes caminar m�s." << endl;
									cout << "\n";
									cout << "Te despides de ella y le dices que cuide bien de Susan." << endl;
									cout << "\n";
									cout << "�Lara: No te dejar� as� Sam." << endl;
									cout << "\n";
									cout << "Un Hombre de Negro llega hasta tu posici�n y te detiene." << endl;
									cout << "\n";
									cout << "MIB 1: Maldita escoria, por fin te tenemos..." << endl;
									cout << "\n";
									cout << "MIB 2: Cre�mos tu fachada, pero nos condonaste a todos..." << endl;
									cout << "\n";
									cout << "MIB 2: Incluso a Susan. C�mo pudiste hacerle esto a ella??!!" << endl;
									cout << "\n";
									cout << "Te sacan del Edificio Bxtr como prisionero y escuchas los gritos de Lara." << endl;
									cout << "\n";
									cout << " WestHeaven est� invadida." << endl;
									cout << "\n";
									cout << "Hay naves en el cielo, est�n altamente magnetizadas y rotan a altas velocidades..." << endl;
									cout << "\n";
									cout << "...lo que hace que emitan pulsos constantes electromagn�ticos." << endl;
									cout << "\n";
									cout << "Sin embargo estos pulsos electromagn�ticos se detienen en cuanto sales del complejo." << endl;
									cout << "\n";
									cout << "MIB 1: Presten atenci�n todos!! ..." << endl;
									cout << "\n";
									cout << "MIB 1: El famoso Doctor Sam Richards nos minti�..." << endl;
									cout << "\n";
									cout << "MIB 1: Se hizo pasar por uno de nosotros y ahora enfrentar� las consecuencias..." << endl;
									cout << "\n";
									cout << "MIB 2: Gracias a los impulsos electromagn�ticos de las mismas naves que nos quieren invadir..." << endl;
									cout << "\n";
									cout << "MIB 2: Se han debilitado y son vulnerables..." << endl;
									cout << "\n";
									cout << "MIB 2: Esto es lo que pasa cuando se meten con WestHeaven..." << endl;
									cout << "\n";
									cout << "�Lara: Nooo Sam!!" << endl;
									cout << "\n";
									title("GAME OVER");
									cout << "\n";
									cout << "Desea continuar??" << endl;
									cin >> respuesta;
																	
								}
								else
								{
									system("cls"); // Comando para limpiar la pantalla
									cout << "Lara decide sacarte del Edificio Bxtr y te encuentras en sus brazos." << endl;
									cout << "\n";
									cout << "En las calles de WestHeaven..." << endl;
									cout << "\n";
									cout << "TWR TWR TWR TWR" << endl;
									cout << "\n";
									cout << "El pulso electromagn�tico est� todav�a presente, m�s intenso..." << endl;
									cout << "\n";
									cout << "... pero esta vez no te causa mucha desorientaci�n." << endl;
									cout << "\n";
									cout << "Miras hacia el cielo y se empieza a oscurecer..." << endl;
									cout << "\n";
									cout << "TWR TWR TWR TWR" << endl;
									cout << "\n";
									cout << "El pulso electromagn�tico incrementa..." << endl;
									cout << "\n";
									cout << "Todo ese pulso, son ellos..." << endl;
									cout << "\n";
									cout << "Sus naves est�n altamente magnetizadas y rotan a altas velocidades..." << endl;
									cout << "\n";
									cout << "...lo que hace que emitan pulsos constantes electromagn�ticos." << endl;
									cout << "\n";
									cout << "De una nave nodriza es inyectada una c�psula hacia tu posici�n." << endl;
									cout << "\n";
									cout << "�Lara: Sam qu� est� pasando??" << endl;
									cout << "\n";
									cout << "De la c�psula sale un ser..." << endl;
									cout << "\n";
									cout << "Su morfolog�a es incierta, las luces de su nave junto con el humo nublan su visi�n." << endl;
									cout << "\n";
									cout << "Se dirige hacia donde est�s tirado con Lara..." << endl;
									cout << "\n";
									cout << "�Lara: Sam??" << endl;
									cout << "\n";
									cout << "�Ser Extraplanetario: pe'lj chol ghaH..." << endl;
									cout << "\n";
									cout << "�Ser Extraplanetario: ... jaghll' SoH, 'e' DachID." << endl;
									cout << "\n";
									cout << "�Ser Extraplanetario: qaStaHvlS chomvam, hlrgh qanob..." << endl;
									cout << "\n";
									cout << "�Ser Extraplanetario: blneptaHvlS blleghpu'." << endl;
									cout << "\n";
									cout << "Traducir??" << endl;
									cin >> respuesta;

									if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
									{
										system("cls"); // Comando para limpiar la pantalla
										cout << "\n";
										cout << "�Ser Extraplanetario: Heraldo eres pat�tico..." << endl;
										cout << "\n";
										cout << "��Ser Extraplanetario: ... Has ca�do en los brazos de �sta mortal." << endl;
										cout << "\n";
										cout << "��Ser Extraplanetario: Nos prometiste un nuevo hogar pero te mezclaste con ellos..." << endl;
										cout << "\n";
										cout << "��Ser Extraplanetario: ... No mereces la vida." << endl;
										cout << "\n";
										title("GAME OVER");
										cout << "\n";
										cout << "Desea continuar??" << endl;
										cin >> respuesta;

									}
								}

							}
							else
							{
								system("cls"); // Comando para limpiar la pantalla
								cout << "Entra una persona al laboratorio" << endl;
								cout << "\n";
								cout << "�Cientr�fico: Doctor Richards qu� gusto verlo de nuevo en su escritorio..." << endl;
								cout << "\n";
								cout << "�Cient�fico: ... con respecto a lo analizado..." << endl;
								cout << "\n";
								cout << "�Cient�fico: ... ser� mejor no decir nada por el momento..." << endl;
								cout << "\n";
								cout << "�Cient�fico: ... a�n no sabemos con qu� estamos tratando." << endl;
								// Volvemos a lo principal
								cout << "\n";
								cout << "Cuando esta persona sale del laboratotio..." << endl;
								cout << "\n";
								cout << "Decides investigar de lo que estaba hablando." << endl;
								cout << "\n";
								cout << "As� que ahora usas la computadora" << endl;
								cout << "\n";
								cout << "Encuentras un esquema de un art�culo mostrado en pantalla..." << endl;
								cout << "\n";
								cout << "... parece que alguien ha estado ocupado analizando la Luna..." << endl;
								cout << "\n";
								cout << "Pero, por qu� en un centro tan avanzado, simplemente se conforman con estudiar la Luna??" << endl;
								cout << "\n";
								cout << "Lees el documento..." << endl;
								cout << "\n";
								cout << "... Anomal�a Gravitacional..." << endl;
								cout << "\n";
								cout << "... Cuerpo Negro..." << endl;
								cout << "\n";
								cout << "... Radiaci�n Gamma..." << endl;
								cout << "\n";
								cout << "... Puente Einstein-Rosen..." << endl;
								cout << "\n";
								cout << "Definitivamente el taxista ten�a raz�n de que en el Edificio Bxtr se guardan secretos." << endl;
								cout << "\n";
								cout << "En el art�culo est� una foto tuya con una descripci�n..." << endl;
								cout << "\n";
								cout << "La imagen dice:" << endl;
								cout << "\n";
								cout << "El famoso Doctor Sam Richards ha detectado una anomal�a gravitacional ubicada a 100,000 km de distancia de la Luna..." << endl;
								cout << "\n";
								cout << "... los primeros an�lisis han sugerido que se trata de la presencia de un cuerpo negro." << endl;
								cout << "\n";
								cout << "Entra una cientr�fica al laboratorio..." << endl;
								cout << "\n";
								cout << "�Cient�fica: Veo que te pones al tanto, no Sam??" << endl;
								cout << "\n";
								cout << "�Cient�fica: Acerca de eso, tenemos que hablar de tu investigaci�n..." << endl;
								cout << "\n";
								cout << "�Cient�fica: Publica tus resultados Sam." << endl;
								cout << "\n";
								cout << "Publicar tus resultados??" << endl;								
								cin >> respuesta;

								if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
								{
									system("cls"); // Comando para limpiar la pantalla
									cout << "Debido a tu investigaci�n se estudia m�s a fondo la anomal�a gravitacional." << endl;
									cout << "\n";
									cout << "Se ha detectado que la anomal�a era un puente Einstein-Rosen." << endl;
									cout << "\n";
									cout << "Por lo que se planean futuras misiones a trav�s del Espacio-Tiempo." << endl;
									cout << "\n";
									title("GAME OVER");
									cout << "\n";
									cout << "Continuar??" << endl;
									cin >> respuesta;

								}
								else
								{
									// Retomamos el Primer final con algunas modificacines m�nimas
									system("cls"); // Comando para limpiar la pantalla
									cout << "No has publicado tus resultados." << endl;
									cout << "\n";
									cout << "Sales del laboratorio y del Edificio Bxtr." << endl;
									cout << "\n";
									cout << "En las calles de WestHeaven..." << endl;
									cout << "\n";
									cout << "TWR TWR TWR TWR" << endl;
									cout << "\n";
									cout << "Se escuchan pulsos electromagn�ticos intensos..." << endl;
									cout << "\n";
									cout << "... esto provoca que a todos les sangren los o�dos, debido a los decibeles altos del impulso." << endl;
									cout << "\n";
									cout << "A todos menos a ti..." << endl;
									cout << "\n";
									cout << "Miras hacia el cielo y se empieza a oscurecer..." << endl;
									cout << "\n";
									cout << "TWR TWR TWR TWR" << endl;
									cout << "\n";
									cout << "El pulso electromagn�tico incrementa..." << endl;
									cout << "\n";
									cout << "Todos esos pulsos, son ellos..." << endl;
									cout << "\n";
									cout << "Sus naves est�n altamente magnetizadas y rotan a altas velocidades..." << endl;
									cout << "\n";
									cout << "...lo que hace que emitan pulsos constantes electromagn�ticos." << endl;
									cout << "\n";
									cout << "De una nave nodriza es inyectada una c�psula hacia tu posici�n." << endl;
									cout << "\n";
									cout << "�Lara: Sam qu� est� pasando??" << endl;
									cout << "\n";
									cout << "De la c�psula sale un ser..." << endl;
									cout << "\n";
									cout << "Su morfolog�a es incierta, las luces de su nave junto con el humo nublan su visi�n." << endl;
									cout << "\n";
									cout << "Se dirige hacia ti..." << endl;
									cout << "\n";
									cout << "�Ser Extraplanetario: SoHvaD 'e' Damevchu'..." << endl;
									cout << "\n";
									cout << "�Ser Extraplanetario: ... bAtlh malojnlSChoH." << endl;
									cout << "\n";
									cout << "Traducir??" << endl;
									cin >> respuesta;

									if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
									{
										system("cls"); // Comando para limpiar la pantalla
										cout << "\n";
										cout << "�Ser Extraplanetario: Has hecho muy bien tu misi�n, Heraldo..." << endl;
										cout << "\n";
										cout << "��Ser Extraplanetario: ... Finalmente nos has conseguido un nuevo hogar." << endl;
										cout << "\n";
										title("GAME OVER");
										cout << "\n";
										cout << "Desea continuar??" << endl;
										cin >> respuesta;
									}

								}
							}

						}
					}
					else
					{
						system("cls"); // Comando para limpiar la pantalla
						cout << "Exploras el complejo..." << endl;
						cout << "\n";
						cout << "Encuentras una foto en la sala..." << endl;
						cout << "\n";
						cout << "Susan??" << endl;
						cout << "\n";
						cout << "Checas el dispositivo de comunicaci�n para saber m�s de tu situaci�n..." << endl;
						cout << "\n";
						cout << "Pero est� bloqueado..." << endl;
						cout << "\n";
						cout << "Alguien llama por ti en la recepci�n." << endl;
						cout << "\n";
						cout << "�Recepcionista: Buen d�a se�or Sam, lamento el inoportunio..." << endl;
						cout << "\n";
						cout << "�Recepcionista: ... hay personas que lo buscan, no se han identificado..." << endl;
						cout << "\n";
						cout << "Las personas misteriosas entran al interior del edificio..." << endl;
						cout << "\n";
						cout << "Violan la seguridad del recinto..." << endl;
						cout << "\n";
						cout << "Tock Tock Tock TOCK TOCK TOCK" << endl;
						cout << "\n";
						cout << "No sabes lo que est� pasando, as� que por miedo corres hasta el cuarto y te escondes debajo de la cama." << endl;
						cout << "\n";
						cout << "Los que te buscan rompen la puerta y entran a la suite..." << endl;
						cout << "\n";
						cout << "�MIB: Dr Richards no haga esto m�s dif�cil..." << endl;
						cout << "\n";
						cout << "�MIB: ... usted firm� un contrato y tenemos derecho de silenciarlo si habre la boca de m�s." << endl;
						cout << "\n";
						cout << "Uno de los hombres te encuentra, alerta a los dem�s y te someten. Tratas de defenderte pero es in�til." << endl;
						cout << "\n";
						cout << "Te detienen y te sacan del complejo atado. Te suben a la fuerza a un veh�culo negro." << endl;
						cout << "\n";
						cout << "�MIB: Nuestros contratistas desean que su investigaci�n no se publique..." << endl;
						cout << "\n";
						cout << "�MIB: ... debe atenerse a las pol�ticas o creanos que podemos ser muy persuasivos." << endl;
						cout << "\n";
						cout << "... despu�s de todo sabemos de Susan." << endl;
						cout << "\n";
						cout << "Los Hombres de Negro te regresan a tu suite." << endl;
						cout << "\n";
						cout << "Son casi las 10:00 AM." << endl;
						cout << "\n";
						cout << "Te diriges hacia el Edificio Bxtr??" << endl;
						cin >> respuesta;

						// Retomamos Segundo Final con variaciones m�nimas
						if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
						{
							system("cls"); // Comando para limpiar la pantalla
							cout << "Una vez en el Edificio Bxtr..." << endl;
							cout << "\n";
							cout << "Escuchas estruendos..." << endl;
							cout << "\n";
							cout << "TWR TWR TWR TWR" << endl;
							cout << "\n";
							cout << "Los estruendos han provocado que las alarmas del edificio se disparen..." << endl;
							cout << "\n";
							cout << "Adem�s, los estruendos tienen un efecto nocivo para ti en forma de pulso electromagn�tico..." << endl;
							cout << "\n";
							cout << "Dentro de los pasillos del Edificio Bxtr te encuentras a alguien que te ayuda a recuperarte..." << endl;
							cout << "\n";
							cout << "Reconoces a esta persona por su voz, la escuchaste esta misma ma�ana." << endl;
							cout << "\n";
							cout << "�Lara: Necesitamos ir a la enfermer�a, no te puedes ni parar." << endl;
							cout << "\n";
							cout << "Corren por los pasillos, las luces y alarmas de emergencia no cesan." << endl;
							cout << "\n";
							cout << "Al doblar por el pasillo se encuentran de frente con los Hombres de Negro." << endl;
							cout << "\n";
							cout << "Pero estos no los ven ya que est�n de espaldas." << endl;
							cout << "\n";
							cout << "TWR TWR TWR TWR" << endl;
							cout << "\n";
							cout << "Otro pulso electromagn�tico te desestabiliza y es m�s punzante, por lo que caes al suelo." << endl;
							cout << "\n";
							cout << "�Lara: Sam, no ahora, no ahora, arriba Sam." << endl;
							cout << "\n";
							cout << "Uno de los Hombres de Negro los avista y alerta a los dem�s..." << endl;
							cout << "\n";
							cout << "MIB 1: Se fueron por esto pasillo!!" << endl;
							cout << "\n";
							cout << "Lara te ayuda a levantarte y lentamente intentan escapar." << endl;
							cout << "\n";
							cout << "Otro Hombre de Negro los ve y dispara." << endl;
							cout << "\n";
							cout << "PUMM" << endl;
							cout << "\n";
							cout << "MIB 1: Qu� haces?? Son doctores y est�n desarmados." << endl;
							cout << "\n";
							cout << "MIB 2: Son mi misi�n. A todos los agentes, ala sur. Ya!!" << endl;
							cout << "\n";
							cout << "Lara intenta ayudarte pero has sufrido demasiados pulsos electromagn�ticos, ya no puedes caminar m�s." << endl;
							cout << "\n";
							cout << "Te despides de ella y le dices que cuide bien de Susan." << endl;
							cout << "\n";
							cout << "�Lara: No te dejar� as� Sam." << endl;
							cout << "\n";
							cout << "Un Hombre de Negro llega hasta tu posici�n y te detiene." << endl;
							cout << "\n";
							cout << "MIB 1: Maldita escoria, por fin te tenemos..." << endl;
							cout << "\n";
							cout << "MIB 2: Cre�mos tu fachada, pero nos condonaste a todos..." << endl;
							cout << "\n";
							cout << "MIB 2: Incluso a Susan. C�mo pudiste hacerle esto a ella??!!" << endl;
							cout << "\n";
							cout << "Te sacan del Edificio Bxtr como prisionero y escuchas los gritos de Lara." << endl;
							cout << "\n";
							cout << " WestHeaven est� invadida." << endl;
							cout << "\n";
							cout << "Hay naves en el cielo, est�n altamente magnetizadas y rotan a altas velocidades..." << endl;
							cout << "\n";
							cout << "...lo que hace que emitan pulsos constantes electromagn�ticos." << endl;
							cout << "\n";
							cout << "Sin embargo estos pulsos electromagn�ticos se detienen en cuanto sales del complejo." << endl;
							cout << "\n";
							cout << "MIB 1: Presten atenci�n todos!! ..." << endl;
							cout << "\n";
							cout << "MIB 1: El famoso Doctor Sam Richards nos minti�..." << endl;
							cout << "\n";
							cout << "MIB 1: Se hizo pasar por uno de nosotros y ahora enfrentar� las consecuencias..." << endl;
							cout << "\n";
							cout << "MIB 2: Gracias a los impulsos electromagn�ticos de las mismas naves que nos quieren invadir..." << endl;
							cout << "\n";
							cout << "MIB 2: Se han debilitado y son vulnerables..." << endl;
							cout << "\n";
							cout << "MIB 2: Esto es lo que pasa cuando se meten con WestHeaven..." << endl;
							cout << "\n";
							cout << "�Lara: Nooo Sam!!" << endl;
							cout << "\n";
							title("GAME OVER");
							cout << "\n";
							cout << "Desea continuar??" << endl;
							cin >> respuesta;
							

						}
						else
						{
							system("cls"); // Comando para limpiar la pantalla
							cout << "Recuerdas la llamada temprano con Lara..." << endl;
							cout << "\n";
							cout << "Una �ltima oportunidad." << endl;
							cout << "\n";
							cout << "Por lo que te olvidas de la reuni�n y decides prepar tu d�a para estar con Susan." << endl;
							cout << "\n";
							cout << " ***Por la tarde ***" << endl;
							cout << "\n";
							cout << "Llegas a un departamento." << endl;
							cout << "\n";
							cout << "Tocas el timbre..." << endl;
							cout << "\n";
							cout << "DING DONG" << endl;
							cout << "\n";
							cout << "Susan abre la puerta, emocionada al verte, te abraza." << endl;
							cout << "\n";
							cout << "�Susan: Cre� que no vendr�as, la �ltima vez, esper� en la ventana pero nunca llegaste." << endl;
							cout << "\n";
							cout << "Te dispones a disfrutar el cumplea�os de Susan." << endl;
							cout << "\n";
							title("GAME OVER");
							cout << "\n";
							cout << "Continuar??" << endl;
							cin >> respuesta;
							
						}
					}
				}
				else
				{
					system("cls"); // Comando para limpiar la pantalla
					cout << "Dejas que suene el intercomunicador, puesto que no sabes qui�n es Lara." << endl;
					cout << "\n";
					cout << "Te acercas a la ventana para tratar de reconocer aqu�l lugar que parece extra�o..." << endl;
					cout << "\n";
					cout << "..." << endl;
					cout << "\n";
					cout << "Autos pasan frente a ti, pero no procesas el c�mo, miras hacia abajo y est�s en la suite de un edificio..." << endl;
					cout << "\n";
					cout << "Ciertamente no es el lugar que conoces..." << endl;
					cout << "\n";
					cout << "Sales del edificio y caminas por las calles desconocidas." << endl;
					cout << "\n";
					cout << "Mientras paseas curiosamente, eres interrumpido..." << endl;
					cout << "\n";
					cout << "Eres empujado r�pidamente por un sujeto que va sobre un deslizador a�reo." << endl;
					cout << "\n";
					cout << "De alguna manera, ese dispositivo te es familiar, lo conoces..." << endl;
					cout << "\n";
					cout << "... aunque solamente lo hab�as imaginado por aquella vieja pel�cula." << endl;
					cout << "\n";
					cout << "Sigues con la mirada al sujeto con la \"hoverboard\" hasta que se detiene en un establecimiento." << endl;
					cout << "\n";
					cout << "El sujeto se baja de la \"hoverboard\" y la deja afuera del establecimiento." << endl;
					cout << "\n";
					cout << "Corres velozmente hacia el lugar y te subes en la \"hoverboard\"..." << endl;
					cout << "\n";
					cout << "Te cuesta un poco mantener el equilibrio..." << endl;
					cout << "\n";
					cout << "Pero tu adrenalina controla tu v�rtigo..." << endl;
					cout << "\n";
					cout << "Comienzas a zurcar sobre el aire, mientras contemplas esa ciudad de ensue�o." << endl;
					cout << "\n";
					cout << "Eres testigo de lo que parece una ilusi�n. Arquitectura descomunal, tranv�as de levitaci�n magn�tica, autos voladores." << endl;
					cout << "\n";
					cout << "Quedas extasiado con este ambiente propuesto que sigues explorando WestHeaven." << endl;
					cout << "\n";
					title("GAME OVER");
					cout << "\n";
					cout << "Continuar??" << endl;
					cin >> respuesta;


				}

			}
			else
			{
				system("cls"); // Comando para limpiar la pantalla
				cout << "Te quedas dormido..." << endl;
				cout << "\n";
				cout << "Despu�s de unas horas..." << endl;
				cout << "\n";
				cout << "Sientes el sol en tus ojos, as� que por fin decides levantarte..." << endl;
				cout << "\n";
				cout << "Se te olvid� que era jueves a�n. Por lo que perdiste tus clases." << endl;
				cout << "\n";
				title("GAME OVER");
				cout << "\n";
				cout << "Continuar??" << endl;
				cin >> respuesta;
			}
		}
		else
		{
			system("cls"); // Comando para limpiar la pantalla
			cout << "Has decidido no adentrarte a la experiencia." << endl;
			cout << "\n";
			title("GAME OVER");
			cout << "\n";
			cout << "Continuar??" << endl;
			cin >> respuesta;

		}
		

		


		int n;
		system("cls"); // Comando para limpiar la pantalla
		cout << "Quieres volver a jugar?" << endl;
		cout << "Digita 1 para S�." << endl;
		cout << "Digita 2 para No." << endl;
		cin >> n;
		if (n == 2) //Asignamos para el entero 2 el valor para sair del bucle
		{
			bandera = true; // Si la bandera es cierta se termina el bucle del c�digo 
		}

	} while (bandera == false); // Fin de la estructura Do-While. Si la bandera es falsa el c�digo se repite en bucle

}

// Proyecto1_HistoriaNarrada.cpp 
// Kevin de Jesús Velázquez Cabrera
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
	val = val + 20; // Agrega 10 espacios más de cada lado
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
} // Función para el Título

int main()
{
	setlocale(LC_CTYPE, "Spanish"); // Se selecciona el idioma a Español
	string respuesta;
	//string respuesta_in;
	bool bandera = false; // Bool de control que permite al final repetir el bucle del programa
	// int n;

	do
	{
		title("The Heaven Dream"); // Se llama a la función del Título para que se imprima
		cout << "\n \n";
		cout << "Preparate para una experiencia en donde tus decisiones impactan la historia." << endl;
		cout << "\n \n";
		cout << "Decide sabiamente el camino y maravillate con la narrativa." << endl;
		cout << "\n \n";
		cout << "Instrucciones:" << endl;
		cout << "En cada decisión deberás escribir como respuesta \"Sí\" si deseas afirmar o \"No\" si deaseas negar." << endl;
		cout << "\n";
		cout << "De ser necesario, en la consola deslízate siempre hacia arriba para no perderte aspectos de la trama." << endl;
		cout << "\n \n";
		cout << "Deseas continuar??" << endl;
		cin >> respuesta;

		if (respuesta == "S\241"|| respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
		{
			system("cls"); // Comando para limpiar la pantalla
			cout << "Lunes por la mañana..." << endl;
			cout << "\n";
			cout << "La alarma está sonando..." << endl;
			cout << "\n";
			cout << "Beeep Beeep Beeep..." << endl;
			cout << "\n";
			cout << "Te decides levantar??" << endl;
			cin >> respuesta;

			if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
			{
				system("cls"); // Comando para limpiar la pantalla
				cout << "Te levantas de la cama, pero sabes que algo no está bien... " << endl;
				cout << "\n";
				cout << "Por simples reflejos te preparas para iniciar tu día..." << endl;
				cout << "\n";
				cout << "Pero te preguntas, ¿qué es lo que haces realmente cuando te levantas?..." << endl;
				cout << "\n";
				cout << "Te diriges hacia al baño para tratar de reconocerte a través del espejo, pero..." << endl;
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
					cout << "¬Lara: Hey Sam, no olvides pasar por Susan hoy..." << endl;
					cout << "\n";
					cout << "¬Lara: ... de verdad le sorprendió que hayas aparecido... " << endl;
					cout << "\n";
					cout << "¬Lara: ... sólo espero ésta vez cumplas tu promesa... " << endl;
					cout << "\n";
					cout << "¬Lara: ... como sea, no la cagues, ya no habrán más oportunidades..." << endl;
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
					cout << "Te acercas a la ventana para tratar de reconocer aquél lugar que parece extraño..." << endl;
					cout << "\n";
					cout << "..." << endl;
					cout << "\n";
					cout << "Autos pasan frente a ti, pero no procesas el cómo, miras hacia abajo y estás en la suite de un edificio..." << endl;
					cout << "\n";
					cout << "Ciertamente no es el lugar que conoces..." << endl;
					cout << "\n";
					cout << "Salir del recinto??" << endl;
					cin >> respuesta;

					if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
					{
						system("cls"); // Comando para limpiar la pantalla
						cout << "Sales del recinto y te acercas a la recepción..." << endl;
						cout << "\n";
						cout << "¬Recepcionista: Buen día Sam, es una mañana fría en WestHeaven, no le parece." << endl;
						cout << "\n";
						cout << "Actuas como si conocieras a la recepcionista desde siempre..." << endl;
						cout << "\n";
						cout << "Preguntas por el destino del Edificio Bxtr..." << endl;
						cout << "\n";
						cout << "¬Recepcionista: Edificio Bxtr??... " << endl;
						cout << "\n";
						cout << "¬Recepcionista: ... debe ser el que ha estado en boca de todos últimamente..." << endl;
						cout << "\n";
						cout << "¬Recepcionista: ... puede tomar un taxi desde aquí, el edificio se encuentra al Norte de WestHeaven." << endl;
						cout << "\n";
						cout << "Tomar el taxi??" << endl;
						cin >> respuesta;

						if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
						{
							system("cls"); // Comando para limpiar la pantalla
							cout << "Subes a un taxi." << endl;
							cout << "\n";
							cout << "El conductor enciende el vehículo..." << endl;
							cout << "\n";
							cout << "Los propulsores empiezan a hacer ruido..." << endl;
							cout << "\n";
							cout << "El taxi comienza a levantarse del suelo..." << endl;
							cout << "\n";
							cout << "Te sostienes de la puerta..." << endl;
							cout << "\n";
							cout << "Impresionado y nervioso te encuentras al sentir la aceleración inicial que mantine tu cuerpo pegado al asiento." << endl;
							cout << "\n";
							cout << "Cada metro que recorres sobre el taxi es inconcebible." << endl;
							cout << "\n";
							cout << "Eres testigo de lo que parece una ilusión. Arquitectura descomunal, tranvías de levitación magnética, autos voladores." << endl;
							cout << "\n";
							cout << "Acercándose por la vista frontal, un edificio se asoma..." << endl;
							cout << "\n";
							cout << "¬Conductor: Al complejo a donde se dirige señor, deberá tener mucho cuidado..." << endl;
							cout << "\n";
							cout << "¬Conductor: ... es cierto que de ese edificio han salido grandes inventos que nos han beneficiado..." << endl;
							cout << "\n";
							cout << "¬Conductor: ... pero también es conocido que guardan en ese lugar secretos... " << endl;
							cout << "\n";
							cout << "¬Conductor: ... secretos oscuros que nos podrían poner en peligro a todos en WestHeaven." << endl;
							cout << "\n";
							cout << "¬Conductor: Bueno señor Sam, este es el Edificio Bxtr." << endl;
						}
						else
						{
							system("cls"); // Comando para limpiar la pantalla
							cout << "No has tomado el taxi. Sales del edificio y caminas por las calles desconocidas." << endl;
							cout << "\n";
							cout << "Mientras paseas curiosamente, eres interrumpido..." << endl;
							cout << "\n";
							cout << "Eres empujado rápidamente por un sujeto que va sobre un deslizador aéreo." << endl;
							cout << "\n";
							cout << "De alguna manera, ese dispositivo te es familiar, lo conoces..." << endl;
							cout << "\n";
							cout << "... aunque solamente lo habías imaginado por aquella vieja película." << endl;
							cout << "\n";
							cout << "Sigues con la mirada al sujeto con la \"hoverboard\" hasta que se detiene en un establecimiento." << endl;
							cout << "\n";
							cout << "El sujeto se baja de la \"hoverboard\" y la deja afuera del establecimiento." << endl;
							cout << "\n";
							cout << "Corres velozmente hacia el lugar y te subes en la \"hoverboard\"..." << endl;
							cout << "\n";
							cout << "Te cuesta un poco mantener el equilibrio..." << endl;
							cout << "\n";
							cout << "Pero tu adrenalina controla tu vértigo..." << endl;
							cout << "\n";
							cout << "Comienzas a zurcar sobre el aire, mientras contemplas esa ciudad de ensueño." << endl;
							cout << "\n";
							cout << "Después de un rato. Llegas al Edificio Bxtr." << endl;
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
							cout << "¬Segundo guardia: Por qué lo detines Bob??" << endl;
							cout << "\n";
							cout << "¬Segundo guardia: Acaso eso no te parece más que una ID??" << endl;
							cout << "\n";
							cout << "El guardia señala a una foto en la rececpción..." << endl;
							cout << "\n";
							cout << "Quién está en la foto eres tú." << endl;
							cout << "\n";
							cout << "¬Primer guardia: Disculpe señor Sam. Es mi primer semana y nunca lo había visto en persona." << endl;
							cout << "\n";
							cout << "Pasas sin más demoras y te diriges hacia el elevador." << endl;
							cout << "\n";
							cout << "Presionas el botón que te dirige hacia la sala de juntas??" << endl;
							cin >> respuesta;

							if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
							{
								system("cls"); // Comando para limpiar la pantalla
								cout << "Entras en la sala de juntas." << endl;
								cout << "\n";
								cout << "Hay gente esperando a que inicie la reunión. Se escuhan murmullos." << endl;
								cout << "\n";
								cout << "Pero cuando todos notan tu presencia guardan silencio." << endl;
								cout << "\n";
								cout << "Un individuo entra ansioso a la sala..." << endl;
								cout << "\n";
								cout << "... se acomoda su vestimenta deslineada..." << endl;
								cout << "\n";
								cout << "¬Individuo: Como sabrán, desde hace un par de semanas detectamos una anomalía gravitacional..." << endl;
								cout << "\n";
								cout << "¬Individuo: ... a unos 100,000 km de la Luna. Aún no sabemos cómo se formó... " << endl;
								cout << "\n";
								cout << "¬Individuo: ... pero la hipótesis inicial sugería que era un cuerpo negro atravesanso una trayectoria inusual..." << endl;
								cout << "\n";
								cout << "¬Individuo: ... por lo que no había manera de detectar la radiación emitida." << endl;
								cout << "\n";
								cout << "¬Individuo: Sin embargo en los reportes analizados ayer por la noche detectaron radiación gamma..." << endl;
								cout << "\n"; 
								cout << "¬Individuo: ... por lo que la hipótesis original queda descartada." << endl;
								cout << "\n";
								cout << "Se escuchan murmullos en la multitud." << endl;
								cout << "\n";
								cout << "¬Individuo: Silencio, por favor. El día de hoy contamos con la presecnia del Doctor Sam." << endl;
								cout << "\n";
								cout << "Actuas indiferente." << endl;
								cout << "\n";
								cout << "¬Individuo: Doctor tiene algo qué decir??" << endl;
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
									cout << "La desesperación y el caos reinan en el complejo." << endl;
									cout << "\n";
									cout << "Tratas de tranquilizar a algunas personas, pero todos quieren salir..." << endl;
									cout << "\n";
									cout << "Escuchas que te llaman a lo lejos..." << endl;
									cout << "\n";
									cout << "No puedes distinguir de dónde viene el llamado..." << endl;
									cout << "\n";
									cout << "Sientes una mano firme que te agarra por el hombro y te da la vuelta..." << endl;
									cout << "\n";
									cout << "¬Persona Misteriosa: Sam!! Deprisa!! tenemos que ir a la sala C..." << endl;
									cout << "\n";
									cout << "Acompañas a la persona misteriosa??" << endl;
									cin >> respuesta;

									if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
									{
										system("cls"); // Comando para limpiar la pantalla
										cout << "Te diriges hacia al salón C junto con la Persona Misteriosa..." << endl;
										cout << "\n";
										cout << "Bajan por las escaleras de emergencia..." << endl;
										cout << "\n";
										cout << "Justo enfrente de las escaleras se encuentra esta sala. Identificada con la letra C..." << endl;
										cout << "\n";
										cout << "La entrada está restringida, por lo que la Persona Misteriosa usa sus biometrías para tener acceso." << endl;
										cout << "\n";
										cout << "***Sistema Concedido***" << endl;
										cout << "\n";
										cout << "***Bienvenida Dr Lara***" << endl;
										cout << "\n";
										cout << "Entras a la sala C con Lara." << endl;
										cout << "\n";
										cout << "¬Lara (Preocupada y Angustiada): Sam, la anomalía gravitacional..." << endl;
										cout << "\n";
										cout << "¬Lara: ... estabas en lo cierto..." << endl;
										cout << "\n";
										cout << "¬Lara: ... no era un cuerpo negro como todos pensaban." << endl;
										cout << "\n";
										cout << "¬Lara: Es un puente Einstein-Rosen..." << endl;
										cout << "\n";
										cout << "¬Lara: El pulsar que escuchamos..." << endl;
										cout << "\n";
										cout << "¬Lara (Sorprendida): ... Son ellos Sam!!" << endl;
										cout << "\n";
										cout << "¬Lara: Por eso no querían publicar tu investigación" << endl;
										cout << "\n";
										cout << "TWR TWR TWR TWR" << endl;
										cout << "\n";
										cout << "¬Lara: Sam!!??" << endl;
										cout << "\n";
										cout << "¬Lara: Sam!! Qué te pasa??" << endl;
										cout << "\n";
										cout << "Te desvaneces por unos instantantes y caes hacia Lara por inercia." << endl;
																				
									}
									else
									{
										// No acompañas a PM
										system("cls"); // Comando para limpiar la pantalla
										cout << "Te niegas a acompañar a esta Persona Misteriosa." << endl;
										cout << "\n";
										cout << "Caminas hacia el otro lado pero esta Persona Misteriosa insiste." << endl; 
										cout << "\n";
										cout << "Del otro lado del pasillo unos hombres de negro se aproximan..." << endl;
										cout << "\n";
										cout << "¬MIB: Alto!! Deténganse ustedes dos!!" << endl;
										cout << "\n";
										cout << "¬Persona Misteriosa: Sam deprisa, tienes que ir conmigo." << endl;
										cout << "\n";
										cout << "No te queda más opción que seguirla." << endl;
										cout << "\n";
										cout << "¬Persona Misteriosa: Si esos hombres llegaron hasta este pasillo..." << endl;
										cout << "\n";
										cout << "¬Persona Misteriosa: ... entonces la sala C ha sido comprometida." << endl;
										cout << "\n";
										cout << "Se dirigen hacia un laboratorio inferior del Edificio Bxtr" << endl;
										cout << "\n";
										cout << "Llegan al laboratorio pero todo es un desastre..." << endl;
										cout << "\n";
										cout << "¬Persona Misteriosa: Sam enciende tu computadora y publica tu investigación..." << endl;
										cout << "\n";
										cout << "¬Persona Misteriosa: Solo así tal vez tengamos una oportunidad... " << endl;
										cout << "\n";
										cout << "¬Persona Misteriosa: La anomalía gravitacional, siempre tuviste la razón." << endl;
										cout << "\n";
										cout << "¬Persona Misteriosa: Si tan sólo todos te hubieramos escuchado, estaríamos mejor preparados." << endl;
										cout << "\n";
										cout << "¬Perona Misteriosa: Lo siento por apartar a Susan de tí, creí que..." << endl;
										cout << "\n";
										cout << "TWR TWR TWR TWR" << endl;
										cout << "\n";
										cout << "El pulso electromagnético parece afectarte..." << endl;
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
										cout << "El pulso electromagnético está todavía presente, más intenso..." << endl;
										cout << "\n";
										cout << "... pero esta vez no te causa mucha desorientación." << endl;
										cout << "\n";
										cout << "Miras hacia el cielo y se empieza a oscurecer..." << endl;
										cout << "\n";
										cout << "TWR TWR TWR TWR" << endl;
										cout << "\n";
										cout << "El pulso electromagnético incrementa..." << endl;
										cout << "\n";
										cout << "Todo ese pulso, eran ellos..." << endl;
										cout << "\n";
										cout << "Sus naves están altamente magnetizadas y rotan a altas velocidades..." << endl;
										cout << "\n";
										cout << "...lo que hace que emitan pulsos constantes electromagnéticos." << endl;
										cout << "\n";
										cout << "De una nave nodriza es inyectada una cápsula hacia tu posición." << endl;
										cout << "\n";
										cout << "¬Lara: Sam qué está pasando??" << endl;
										cout << "\n";
										cout << "De la cápsula sale un ser..." << endl;
										cout << "\n";
										cout << "Su morfología es incierta, las luces de su nave junto con el humo nublan su visión." << endl;
										cout << "\n";
										cout << "Se dirige hacia ti..." << endl;
										cout << "\n";
										cout << "¬Lara: Sam??" << endl;
										cout << "\n";
										cout << "¬Ser Extraplanetario: SoHvaD 'e' Damevchu'..." << endl;
										cout << "\n";
										cout << "¬Ser Extraplanetario: ... bAtlh malojnlSChoH." << endl;
										cout << "\n";
										cout << "Traducir??" << endl;
										cin >> respuesta;

										if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
										{
											system("cls"); // Comando para limpiar la pantalla
											cout << "\n";
											cout << "¬Ser Extraplanetario: Has hecho muy bien tu misión, Heraldo..." << endl;
											cout << "\n";
											cout << "¬¬Ser Extraplanetario: ... Finalmente nos has conseguido un nuevo hogar." << endl;
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
										cout << "Te recuperas del efecto del pulso electromagnético..." << endl;
										cout << "\n";
										cout << "¬Lara: Necesitamos ir a la enfermería para que te recuperes de estos pulsos." << endl;
										cout << "\n";
										cout << "Corren por los pasillos, las luces y alarmas de emergencia no cesan." << endl;
										cout << "\n";
										cout << "Al doblar por el pasillo se encuentran de frente con los Hombres de Negro." << endl;
										cout << "\n";
										cout << "Pero estos no los ven ya que están de espaldas." << endl;
										cout << "\n";
										cout << "TWR TWR TWR TWR" << endl;
										cout << "\n";
										cout << "Otro pulso electromagnético te desestabiliza y es más punzante, por lo que caes al suelo." << endl;
										cout << "\n";
										cout << "¬Lara: Sam, no ahora, no ahora, arriba Sam." << endl;
										cout << "\n";
										cout << "Uno de los Hombres de Negro los avista y alerta a los demás..." << endl;
										cout << "\n";
										cout << "MIB 1: Se fueron por esto pasillo!!" << endl;
										cout << "\n";
										cout << "Lara te ayuda a levantarte y lentamente intentan escapar" << endl;
										cout << "\n";
										cout << "Otro Hombre de Negro los ve y dispara" << endl;
										cout << "\n";
										cout << "PUMM" << endl;
										cout << "\n";
										cout << "MIB 1: Qué haces?? Son doctores y están desarmados." << endl;
										cout << "\n";
										cout << "MIB 2: Son mi misión. A todos los agentes, ala sur. Ya!!" << endl;
										cout << "\n";
										cout << "Lara intenta ayudarte pero has sufrido demasiados pulsos electromagnéticos, ya no puedes caminar más." << endl;
										cout << "\n";
										cout << "Te despides de ella y le dices que cuide bien de Susan." << endl;
										cout << "\n";
										cout << "¬Lara: No te dejaré así Sam." << endl;
										cout << "\n";
										cout << "Un Hombre de Negro llega hasta tu posición y te detiene." << endl;
										cout << "\n";
										cout << "MIB 1: Maldita escoria, por fin te tenemos..." << endl;
										cout << "\n";
										cout << "MIB 2: Creímos tu fachada, pero nos condonaste a todos..." << endl;
										cout << "\n";
										cout << "MIB 2: Incluso a Susan. Cómo pudiste hacerle esto a ella??!!" << endl;
										cout << "\n";
										cout << "Te sacan del Edificio Bxtr como prisionero y escuchas los gritos de Lara." << endl;
										cout << "\n";
										cout << "WestHeaven está invadida." << endl;
										cout << "\n";
										cout << "Hay naves en el cielo, están altamente magnetizadas y rotan a altas velocidades..." << endl;
										cout << "\n";
										cout << "...lo que hace que emitan pulsos constantes electromagnéticos." << endl;
										cout << "\n";
										cout << "Sin embargo estos pulsos electromagnéticos se detienen en cuanto sales del complejo." << endl; 
										cout << "\n";
										cout << "MIB 1: Presten atención todos!! ..." << endl;
										cout << "\n";
										cout << "MIB 1: El famoso Doctor Sam Richards nos mintió..." << endl;
										cout << "\n";
										cout << "MIB 1: Se hizo pasar por uno de nosotros y ahora enfrentará las consecuencias..." << endl;
										cout << "\n";
										cout << "MIB 2: Gracias a los impulsos electromagnéticos de las mismas naves que nos quieren invadir..." << endl;
										cout << "\n";
										cout << "MIB 2: Se han debilitado y son vulnerables..." << endl;
										cout << "\n";
										cout << "MIB 2: Esto es lo que pasa cuando se meten con WestHeaven..." << endl;
										cout << "\n";
										cout << "¬Lara: Nooo Sam!!" << endl;
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
									cout << "¬Individuo: Bien parece que en esta ocasión, el Doctor Sam ha decidido ser tímido..." << endl;
									cout << "\n";
									cout << "¬Individuo: ... al no querer compartir sus hallazgos con los colegas." << endl;
									cout << "\n";
									cout << "¬Individuo: Como decía, tenemos que seguir investigando la anomalía gravitacional..." << endl;
									cout << "\n";
									cout << "¬Individuo: ... para..." << endl;
									// Pasa lo mismo que en la decisión anterior
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
									cout << "La desesperación y el caos reinan en el complejo." << endl;
									cout << "\n";
									cout << "Tratas de tranquilizar a algunas personas, pero todos quieren salir..." << endl;
									cout << "\n";
									cout << "A una de esas personas que tratas de tranquilizar reconoces su voz..." << endl;
									cout << "\n";
									cout << "Es Lara y decide quedarse contigo." << endl;
									// Cambiamos el rumbo
									cout << "TWR TWR TWR TWR" << endl;
									cout << "\n";
									cout << "El pulso electromagnético parece afectarte..." << endl;
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
										cout << "El pulso electromagnético está todavía presente, más intenso..." << endl;
										cout << "\n";
										cout << "... pero esta vez no te causa mucha desorientación." << endl;
										cout << "\n";
										cout << "Miras hacia el cielo y se empieza a oscurecer..." << endl;
										cout << "\n";
										cout << "TWR TWR TWR TWR" << endl;
										cout << "\n";
										cout << "El pulso electromagnético incrementa..." << endl;
										cout << "\n";
										cout << "Todo ese pulso, eran ellos..." << endl;
										cout << "\n";
										cout << "Sus naves están altamente magnetizadas y rotan a altas velocidades..." << endl;
										cout << "\n";
										cout << "...lo que hace que emitan pulsos constantes electromagnéticos." << endl;
										cout << "\n";
										cout << "De una nave nodriza es inyectada una cápsula hacia tu posición." << endl;
										cout << "\n";
										cout << "¬Lara: Sam qué está pasando??" << endl;
										cout << "\n";
										cout << "De la cápsula sale un ser..." << endl;
										cout << "\n";
										cout << "Su morfología es incierta, las luces de su nave junto con el humo nublan su visión." << endl;
										cout << "\n";
										cout << "Se dirige hacia ti..." << endl;
										cout << "\n";
										cout << "¬Lara: Sam??" << endl;
										cout << "\n";
										cout << "¬Ser Extraplanetario: SoHvaD 'e' Damevchu'..." << endl;
										cout << "\n";
										cout << "¬Ser Extraplanetario: ... bAtlh malojnlSChoH." << endl;
										cout << "\n";
										cout << "Traducir??" << endl;
										cin >> respuesta;

										if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
										{
											system("cls"); // Comando para limpiar la pantalla
											cout << "\n";
											cout << "¬Ser Extraplanetario: Has hecho muy bien tu misión, Heraldo..." << endl;
											cout << "\n";
											cout << "¬¬Ser Extraplanetario: ... Finalmente nos has conseguido un nuevo hogar." << endl;
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
										cout << "Te recuperas del efecto del pulso electromagnético..." << endl;
										cout << "\n";
										cout << "¬Lara: Necesitamos ir a la enfermería para que te recuperes de estos pulsos." << endl;
										cout << "\n";
										cout << "Corren por los pasillos, las luces y alarmas de emergencia no cesan." << endl;
										cout << "\n";
										cout << "Al doblar por el pasillo se encuentran de frente con los Hombres de Negro." << endl;
										cout << "\n";
										cout << "Pero estos no los ven ya que están de espaldas." << endl;
										cout << "\n";
										cout << "TWR TWR TWR TWR" << endl;
										cout << "\n";
										cout << "Otro pulso electromagnético te desestabiliza y es más punzante, por lo que caes al suelo." << endl;
										cout << "\n";
										cout << "¬Lara: Sam, no ahora, no ahora, arriba Sam." << endl;
										cout << "\n";
										cout << "Uno de los Hombres de Negro los avista y alerta a los demás..." << endl;
										cout << "\n";
										cout << "MIB 1: Se fueron por esto pasillo!!" << endl;
										cout << "\n";
										cout << "Lara te ayuda a levantarte y lentamente intentan escapar." << endl;
										cout << "\n";
										cout << "Otro Hombre de Negro los ve y dispara." << endl;
										cout << "\n";
										cout << "PUMM" << endl;
										cout << "\n";
										cout << "MIB 1: Qué haces?? Son doctores y están desarmados." << endl;
										cout << "\n";
										cout << "MIB 2: Son mi misión. A todos los agentes, ala sur. Ya!!" << endl;
										cout << "\n";
										cout << "Lara intenta ayudarte pero has sufrido demasiados pulsos electromagnéticos, ya no puedes caminar más." << endl;
										cout << "\n";
										cout << "Te despides de ella y le dices que cuide bien de Susan." << endl;
										cout << "\n";
										cout << "¬Lara: No te dejaré así Sam." << endl;
										cout << "\n";
										cout << "Un Hombre de Negro llega hasta tu posición y te detiene." << endl;
										cout << "\n";
										cout << "MIB 1: Maldita escoria, por fin te tenemos..." << endl;
										cout << "\n";
										cout << "MIB 2: Creímos tu fachada, pero nos condonaste a todos..." << endl;
										cout << "\n";
										cout << "MIB 2: Incluso a Susan. Cómo pudiste hacerle esto a ella??!!" << endl;
										cout << "\n";
										cout << "Te sacan del Edificio Bxtr como prisionero y escuchas los gritos de Lara." << endl;
										cout << "\n";
										cout << " WestHeaven está invadida." << endl;
										cout << "\n";
										cout << "Hay naves en el cielo, están altamente magnetizadas y rotan a altas velocidades..." << endl;
										cout << "\n";
										cout << "...lo que hace que emitan pulsos constantes electromagnéticos." << endl;
										cout << "\n";
										cout << "Sin embargo estos pulsos electromagnéticos se detienen en cuanto sales del complejo." << endl; 
										cout << "\n";
										cout << "MIB 1: Presten atención todos!! ..." << endl;
										cout << "\n";
										cout << "MIB 1: El famoso Doctor Sam Richards nos mintió..." << endl;
										cout << "\n";
										cout << "MIB 1: Se hizo pasar por uno de nosotros y ahora enfrentará las consecuencias..." << endl;
										cout << "\n";
										cout << "MIB 2: Gracias a los impulsos electromagnéticos de las mismas naves que nos quieren invadir..." << endl;
										cout << "\n";
										cout << "MIB 2: Se han debilitado y son vulnerables..." << endl;
										cout << "\n";
										cout << "MIB 2: Esto es lo que pasa cuando se meten con WestHeaven..." << endl;
										cout << "\n";
										cout << "¬Lara: Nooo Sam!!" << endl;
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
								// No presionas el botón que va a la sala de juntas
								system("cls"); // Comando para limpiar la pantalla
								cout << "Presionas el botón del elevador que se dirige al laboratorio." << endl;
								cout << "\n";
								cout << "Sales del elevador y llegas al laboratorio..." << endl;
								cout << "\n";
								cout << "El lugar está hecho un desastre..." << endl;
								cout << "\n";
								cout << "Lo único apreciable de la pila de documentos es una foto." << endl;
								cout << "\n";
								cout << "Analizas la foto, la sacas del marco y al reverso..." << endl;
								cout << "\n";
								cout << "La foto tiene una nota, la cual dice:" << endl;
								cout << "\n";
								cout << "Entre todo el Universo y el cosmos, en el único lugar en donde me he perdido, es en tus ojos..." << endl;
								cout << "\n";
								cout << "... Susan 3645." << endl;
								cout << "\n";
								cout << "Recuerdas la llamada temprano con Lara..." << endl;
								cout << "\n";
								cout << "Una última oportunidad." << endl; 
								cout << "\n";
								cout << "Así que decides irte del Edificio Bxtr." << endl;
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
									cout << "¬Susan: Creí que no vendrías, la última vez, esperé en la ventana pero nunca llegaste." << endl;
									cout << "\n";
									cout << "Te dispones a disfrutar el cumpleaños de Susan." << endl;
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
							cout << "Justo al termino de las escaleras notas una puerta bloqueada. Así que no puedes entrar." << endl;
							cout << "\n";
							cout << "Por lo que rodeas el complejo y encuentras un elevador. Sin embargo ya bajaste las escaleras..." << endl;
							cout << "\n";
							cout << "... deberías estar en la planta más baja, ¿no es así?... " << endl;
							cout << "\n";
							cout << "Entras al elevdador..." << endl;
							cout << "\n";
							cout << "Presionas el botón que dirige hacia el laboratorio inferior." << endl;
							cout << "\n";
							cout << "Sales del elavador y entras al laboratorio..." << endl;
							cout << "\n";
							cout << "... no hay nadie, el laboratorio está vacío." << endl;
							cout << "\n";
							cout << "Caminas hacia un escritorio, está desordenado..." << endl;
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
								cout << "Hay un esquema de un artículo mostrado en pantalla..." << endl;
								cout << "\n";
								cout << "... parece que alguien ha estado ocupado analizando la Luna..." << endl;
								cout << "\n";
								cout << "Pero, por qué en un centro tan avanzado, simplemente se conforman con estudiar la Luna??" << endl;
								cout << "\n";
								cout << "Lees el documento..." << endl;
								cout << "\n";
								cout << "... Anomalía Gravitacional..." << endl;
								cout << "\n";
								cout << "... Cuerpo Negro..." << endl;
								cout << "\n";
								cout << "... Radiación Gamma..." << endl;
								cout << "\n";
								cout << "... Puente Einstein-Rosen..." << endl;
								cout << "\n";
								cout << "Definitivamente el taxista tenía razón de que en el Edificio Bxtr se guardan secretos." << endl;
								cout << "\n";
								cout << "En el artículo está una foto tuya con una descripción..." << endl;
								cout << "\n";
								cout << "La imagen dice:" << endl;
								cout << "\n";
								cout << "El famoso Doctor Sam Richards ha detectado una anomalía gravitacional ubicada a 100,000 km de distancia de la Luna..." << endl;
								cout << "\n";
								cout << "... los primeros análisis han sugerido que se trata de la presencia de un cuerpo negro." << endl;
								cout << "\n";
								cout << "Entra una cientrífica al laboratorio..." << endl;
								cout << "\n";
								cout << "¬Científica: Veo que te pones al tanto, no Sam??" << endl;
								cout << "\n";
								cout << "¬Científica: Acerca de eso, tenemos que hablar de tu investigación..." << endl;
								cout << "\n";
								cout << "¬Científica: Debemos de hablar en un lugar seguro, vamos al salón C" << endl;
								// Volvemos a la historia principal
								cout << "\n";
								cout << "Te diriges junto con la científica hacia este lugar seguro." << endl;
								cout << "\n";
								cout << "La entrada está restringida, por lo que la Científica usa sus biometrías para tener acceso." << endl;
								cout << "\n";
								cout << "***Sistema Concedido***" << endl;
								cout << "\n";
								cout << "***Bienvenida Dr Lara***" << endl;
								cout << "\n";
								cout << "Entras a la sala C con Lara." << endl;
								cout << "\n";
								cout << "¬Lara (Preocupada y Angustiada): Sam, la anomalía gravitacional..." << endl;
								cout << "\n";
								cout << "¬Lara: ... estabas en lo cierto..." << endl;
								cout << "\n";
								cout << "¬Lara: ... no era un cuerpo negro como todos pensaban." << endl;
								cout << "\n";
								cout << "¬Lara: Es un puente Einstein-Rosen..." << endl;
								cout << "\n";
								cout << "¬Lara: El pulsar que escuchamos..." << endl;
								cout << "\n";
								cout << "¬Lara (Sorprendida): ... Son ellos Sam!!" << endl;
								cout << "\n";
								cout << "¬Lara: Por eso no querían publicar tu investigación." << endl;
								cout << "\n";
								cout << "TWR TWR TWR TWR" << endl;
								cout << "\n";
								cout << "¬Lara: Sam!!??" << endl;
								cout << "\n";
								cout << "¬Lara: Sam!! Qué te pasa??" << endl;
								cout << "\n";
								cout << "Te desvaneces por unos instantantes y caes hacia Lara por inercia." << endl;
								cout << "\n";
								cout << "Decides levantarte??" << endl;
								cin >> respuesta;

								if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
								{
									system("cls"); // Comando para limpiar la pantalla
									cout << "Después de un rato inconsciente te levantas y lo primero que ves es a Lara..." << endl;
									cout << "\n";
									cout << "Hay algo reconfortante en ella." << endl;
									cout << "\n";
									cout << "Los estruendos electromagnéticos se hacen presentes nuevamente..." << endl;
									cout << "\n";
									cout << "TWR TWR TWR TWR" << endl;
									cout << "\n";
									cout << "Pero los resistes..." << endl;
									cout << "\n";
									cout << "¬Lara: Necesitamos ir a la enfermería para que te recuperes de estos pulsos." << endl;
									cout << "\n";
									cout << "Corren por los pasillos, las luces y alarmas de emergencia no cesan." << endl;
									cout << "\n";
									cout << "Al doblar por el pasillo se encuentran de frente con los Hombres de Negro." << endl;
									cout << "\n";
									cout << "Pero estos no los ven ya que están de espaldas." << endl;
									cout << "\n";
									cout << "TWR TWR TWR TWR" << endl;
									cout << "\n";
									cout << "Otro pulso electromagnético te desestabiliza y es más punzante, por lo que caes al suelo." << endl;
									cout << "\n";
									cout << "¬Lara: Sam, no ahora, no ahora, arriba Sam." << endl;
									cout << "\n";
									cout << "Uno de los Hombres de Negro los avista y alerta a los demás..." << endl;
									cout << "\n";
									cout << "MIB 1: Se fueron por esto pasillo!!" << endl;
									cout << "\n";
									cout << "Lara te ayuda a levantarte y lentamente intentan escapar." << endl;
									cout << "\n";
									cout << "Otro Hombre de Negro los ve y dispara." << endl;
									cout << "\n";
									cout << "PUMM" << endl;
									cout << "\n";
									cout << "MIB 1: Qué haces?? Son doctores y están desarmados." << endl;
									cout << "\n";
									cout << "MIB 2: Son mi misión. A todos los agentes, ala sur. Ya!!" << endl;
									cout << "\n";
									cout << "Lara intenta ayudarte pero has sufrido demasiados pulsos electromagnéticos, ya no puedes caminar más." << endl;
									cout << "\n";
									cout << "Te despides de ella y le dices que cuide bien de Susan." << endl;
									cout << "\n";
									cout << "¬Lara: No te dejaré así Sam." << endl;
									cout << "\n";
									cout << "Un Hombre de Negro llega hasta tu posición y te detiene." << endl;
									cout << "\n";
									cout << "MIB 1: Maldita escoria, por fin te tenemos..." << endl;
									cout << "\n";
									cout << "MIB 2: Creímos tu fachada, pero nos condonaste a todos..." << endl;
									cout << "\n";
									cout << "MIB 2: Incluso a Susan. Cómo pudiste hacerle esto a ella??!!" << endl;
									cout << "\n";
									cout << "Te sacan del Edificio Bxtr como prisionero y escuchas los gritos de Lara." << endl;
									cout << "\n";
									cout << " WestHeaven está invadida." << endl;
									cout << "\n";
									cout << "Hay naves en el cielo, están altamente magnetizadas y rotan a altas velocidades..." << endl;
									cout << "\n";
									cout << "...lo que hace que emitan pulsos constantes electromagnéticos." << endl;
									cout << "\n";
									cout << "Sin embargo estos pulsos electromagnéticos se detienen en cuanto sales del complejo." << endl;
									cout << "\n";
									cout << "MIB 1: Presten atención todos!! ..." << endl;
									cout << "\n";
									cout << "MIB 1: El famoso Doctor Sam Richards nos mintió..." << endl;
									cout << "\n";
									cout << "MIB 1: Se hizo pasar por uno de nosotros y ahora enfrentará las consecuencias..." << endl;
									cout << "\n";
									cout << "MIB 2: Gracias a los impulsos electromagnéticos de las mismas naves que nos quieren invadir..." << endl;
									cout << "\n";
									cout << "MIB 2: Se han debilitado y son vulnerables..." << endl;
									cout << "\n";
									cout << "MIB 2: Esto es lo que pasa cuando se meten con WestHeaven..." << endl;
									cout << "\n";
									cout << "¬Lara: Nooo Sam!!" << endl;
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
									cout << "El pulso electromagnético está todavía presente, más intenso..." << endl;
									cout << "\n";
									cout << "... pero esta vez no te causa mucha desorientación." << endl;
									cout << "\n";
									cout << "Miras hacia el cielo y se empieza a oscurecer..." << endl;
									cout << "\n";
									cout << "TWR TWR TWR TWR" << endl;
									cout << "\n";
									cout << "El pulso electromagnético incrementa..." << endl;
									cout << "\n";
									cout << "Todo ese pulso, son ellos..." << endl;
									cout << "\n";
									cout << "Sus naves están altamente magnetizadas y rotan a altas velocidades..." << endl;
									cout << "\n";
									cout << "...lo que hace que emitan pulsos constantes electromagnéticos." << endl;
									cout << "\n";
									cout << "De una nave nodriza es inyectada una cápsula hacia tu posición." << endl;
									cout << "\n";
									cout << "¬Lara: Sam qué está pasando??" << endl;
									cout << "\n";
									cout << "De la cápsula sale un ser..." << endl;
									cout << "\n";
									cout << "Su morfología es incierta, las luces de su nave junto con el humo nublan su visión." << endl;
									cout << "\n";
									cout << "Se dirige hacia donde estás tirado con Lara..." << endl;
									cout << "\n";
									cout << "¬Lara: Sam??" << endl;
									cout << "\n";
									cout << "¬Ser Extraplanetario: pe'lj chol ghaH..." << endl;
									cout << "\n";
									cout << "¬Ser Extraplanetario: ... jaghll' SoH, 'e' DachID." << endl;
									cout << "\n";
									cout << "¬Ser Extraplanetario: qaStaHvlS chomvam, hlrgh qanob..." << endl;
									cout << "\n";
									cout << "¬Ser Extraplanetario: blneptaHvlS blleghpu'." << endl;
									cout << "\n";
									cout << "Traducir??" << endl;
									cin >> respuesta;

									if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
									{
										system("cls"); // Comando para limpiar la pantalla
										cout << "\n";
										cout << "¬Ser Extraplanetario: Heraldo eres patético..." << endl;
										cout << "\n";
										cout << "¬¬Ser Extraplanetario: ... Has caído en los brazos de ésta mortal." << endl;
										cout << "\n";
										cout << "¬¬Ser Extraplanetario: Nos prometiste un nuevo hogar pero te mezclaste con ellos..." << endl;
										cout << "\n";
										cout << "¬¬Ser Extraplanetario: ... No mereces la vida." << endl;
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
								cout << "¬Cientrífico: Doctor Richards qué gusto verlo de nuevo en su escritorio..." << endl;
								cout << "\n";
								cout << "¬Científico: ... con respecto a lo analizado..." << endl;
								cout << "\n";
								cout << "¬Científico: ... será mejor no decir nada por el momento..." << endl;
								cout << "\n";
								cout << "¬Científico: ... aún no sabemos con qué estamos tratando." << endl;
								// Volvemos a lo principal
								cout << "\n";
								cout << "Cuando esta persona sale del laboratotio..." << endl;
								cout << "\n";
								cout << "Decides investigar de lo que estaba hablando." << endl;
								cout << "\n";
								cout << "Así que ahora usas la computadora" << endl;
								cout << "\n";
								cout << "Encuentras un esquema de un artículo mostrado en pantalla..." << endl;
								cout << "\n";
								cout << "... parece que alguien ha estado ocupado analizando la Luna..." << endl;
								cout << "\n";
								cout << "Pero, por qué en un centro tan avanzado, simplemente se conforman con estudiar la Luna??" << endl;
								cout << "\n";
								cout << "Lees el documento..." << endl;
								cout << "\n";
								cout << "... Anomalía Gravitacional..." << endl;
								cout << "\n";
								cout << "... Cuerpo Negro..." << endl;
								cout << "\n";
								cout << "... Radiación Gamma..." << endl;
								cout << "\n";
								cout << "... Puente Einstein-Rosen..." << endl;
								cout << "\n";
								cout << "Definitivamente el taxista tenía razón de que en el Edificio Bxtr se guardan secretos." << endl;
								cout << "\n";
								cout << "En el artículo está una foto tuya con una descripción..." << endl;
								cout << "\n";
								cout << "La imagen dice:" << endl;
								cout << "\n";
								cout << "El famoso Doctor Sam Richards ha detectado una anomalía gravitacional ubicada a 100,000 km de distancia de la Luna..." << endl;
								cout << "\n";
								cout << "... los primeros análisis han sugerido que se trata de la presencia de un cuerpo negro." << endl;
								cout << "\n";
								cout << "Entra una cientrífica al laboratorio..." << endl;
								cout << "\n";
								cout << "¬Científica: Veo que te pones al tanto, no Sam??" << endl;
								cout << "\n";
								cout << "¬Científica: Acerca de eso, tenemos que hablar de tu investigación..." << endl;
								cout << "\n";
								cout << "¬Científica: Publica tus resultados Sam." << endl;
								cout << "\n";
								cout << "Publicar tus resultados??" << endl;								
								cin >> respuesta;

								if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
								{
									system("cls"); // Comando para limpiar la pantalla
									cout << "Debido a tu investigación se estudia más a fondo la anomalía gravitacional." << endl;
									cout << "\n";
									cout << "Se ha detectado que la anomalía era un puente Einstein-Rosen." << endl;
									cout << "\n";
									cout << "Por lo que se planean futuras misiones a través del Espacio-Tiempo." << endl;
									cout << "\n";
									title("GAME OVER");
									cout << "\n";
									cout << "Continuar??" << endl;
									cin >> respuesta;

								}
								else
								{
									// Retomamos el Primer final con algunas modificacines mínimas
									system("cls"); // Comando para limpiar la pantalla
									cout << "No has publicado tus resultados." << endl;
									cout << "\n";
									cout << "Sales del laboratorio y del Edificio Bxtr." << endl;
									cout << "\n";
									cout << "En las calles de WestHeaven..." << endl;
									cout << "\n";
									cout << "TWR TWR TWR TWR" << endl;
									cout << "\n";
									cout << "Se escuchan pulsos electromagnéticos intensos..." << endl;
									cout << "\n";
									cout << "... esto provoca que a todos les sangren los oídos, debido a los decibeles altos del impulso." << endl;
									cout << "\n";
									cout << "A todos menos a ti..." << endl;
									cout << "\n";
									cout << "Miras hacia el cielo y se empieza a oscurecer..." << endl;
									cout << "\n";
									cout << "TWR TWR TWR TWR" << endl;
									cout << "\n";
									cout << "El pulso electromagnético incrementa..." << endl;
									cout << "\n";
									cout << "Todos esos pulsos, son ellos..." << endl;
									cout << "\n";
									cout << "Sus naves están altamente magnetizadas y rotan a altas velocidades..." << endl;
									cout << "\n";
									cout << "...lo que hace que emitan pulsos constantes electromagnéticos." << endl;
									cout << "\n";
									cout << "De una nave nodriza es inyectada una cápsula hacia tu posición." << endl;
									cout << "\n";
									cout << "¬Lara: Sam qué está pasando??" << endl;
									cout << "\n";
									cout << "De la cápsula sale un ser..." << endl;
									cout << "\n";
									cout << "Su morfología es incierta, las luces de su nave junto con el humo nublan su visión." << endl;
									cout << "\n";
									cout << "Se dirige hacia ti..." << endl;
									cout << "\n";
									cout << "¬Ser Extraplanetario: SoHvaD 'e' Damevchu'..." << endl;
									cout << "\n";
									cout << "¬Ser Extraplanetario: ... bAtlh malojnlSChoH." << endl;
									cout << "\n";
									cout << "Traducir??" << endl;
									cin >> respuesta;

									if (respuesta == "S\241" || respuesta == "Si" || respuesta == "s\241" || respuesta == "si" || respuesta == "simon")
									{
										system("cls"); // Comando para limpiar la pantalla
										cout << "\n";
										cout << "¬Ser Extraplanetario: Has hecho muy bien tu misión, Heraldo..." << endl;
										cout << "\n";
										cout << "¬¬Ser Extraplanetario: ... Finalmente nos has conseguido un nuevo hogar." << endl;
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
						cout << "Checas el dispositivo de comunicación para saber más de tu situación..." << endl;
						cout << "\n";
						cout << "Pero está bloqueado..." << endl;
						cout << "\n";
						cout << "Alguien llama por ti en la recepción." << endl;
						cout << "\n";
						cout << "¬Recepcionista: Buen día señor Sam, lamento el inoportunio..." << endl;
						cout << "\n";
						cout << "¬Recepcionista: ... hay personas que lo buscan, no se han identificado..." << endl;
						cout << "\n";
						cout << "Las personas misteriosas entran al interior del edificio..." << endl;
						cout << "\n";
						cout << "Violan la seguridad del recinto..." << endl;
						cout << "\n";
						cout << "Tock Tock Tock TOCK TOCK TOCK" << endl;
						cout << "\n";
						cout << "No sabes lo que está pasando, así que por miedo corres hasta el cuarto y te escondes debajo de la cama." << endl;
						cout << "\n";
						cout << "Los que te buscan rompen la puerta y entran a la suite..." << endl;
						cout << "\n";
						cout << "¬MIB: Dr Richards no haga esto más difícil..." << endl;
						cout << "\n";
						cout << "¬MIB: ... usted firmó un contrato y tenemos derecho de silenciarlo si habre la boca de más." << endl;
						cout << "\n";
						cout << "Uno de los hombres te encuentra, alerta a los demás y te someten. Tratas de defenderte pero es inútil." << endl;
						cout << "\n";
						cout << "Te detienen y te sacan del complejo atado. Te suben a la fuerza a un vehículo negro." << endl;
						cout << "\n";
						cout << "¬MIB: Nuestros contratistas desean que su investigación no se publique..." << endl;
						cout << "\n";
						cout << "¬MIB: ... debe atenerse a las políticas o creanos que podemos ser muy persuasivos." << endl;
						cout << "\n";
						cout << "... después de todo sabemos de Susan." << endl;
						cout << "\n";
						cout << "Los Hombres de Negro te regresan a tu suite." << endl;
						cout << "\n";
						cout << "Son casi las 10:00 AM." << endl;
						cout << "\n";
						cout << "Te diriges hacia el Edificio Bxtr??" << endl;
						cin >> respuesta;

						// Retomamos Segundo Final con variaciones mínimas
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
							cout << "Además, los estruendos tienen un efecto nocivo para ti en forma de pulso electromagnético..." << endl;
							cout << "\n";
							cout << "Dentro de los pasillos del Edificio Bxtr te encuentras a alguien que te ayuda a recuperarte..." << endl;
							cout << "\n";
							cout << "Reconoces a esta persona por su voz, la escuchaste esta misma mañana." << endl;
							cout << "\n";
							cout << "¬Lara: Necesitamos ir a la enfermería, no te puedes ni parar." << endl;
							cout << "\n";
							cout << "Corren por los pasillos, las luces y alarmas de emergencia no cesan." << endl;
							cout << "\n";
							cout << "Al doblar por el pasillo se encuentran de frente con los Hombres de Negro." << endl;
							cout << "\n";
							cout << "Pero estos no los ven ya que están de espaldas." << endl;
							cout << "\n";
							cout << "TWR TWR TWR TWR" << endl;
							cout << "\n";
							cout << "Otro pulso electromagnético te desestabiliza y es más punzante, por lo que caes al suelo." << endl;
							cout << "\n";
							cout << "¬Lara: Sam, no ahora, no ahora, arriba Sam." << endl;
							cout << "\n";
							cout << "Uno de los Hombres de Negro los avista y alerta a los demás..." << endl;
							cout << "\n";
							cout << "MIB 1: Se fueron por esto pasillo!!" << endl;
							cout << "\n";
							cout << "Lara te ayuda a levantarte y lentamente intentan escapar." << endl;
							cout << "\n";
							cout << "Otro Hombre de Negro los ve y dispara." << endl;
							cout << "\n";
							cout << "PUMM" << endl;
							cout << "\n";
							cout << "MIB 1: Qué haces?? Son doctores y están desarmados." << endl;
							cout << "\n";
							cout << "MIB 2: Son mi misión. A todos los agentes, ala sur. Ya!!" << endl;
							cout << "\n";
							cout << "Lara intenta ayudarte pero has sufrido demasiados pulsos electromagnéticos, ya no puedes caminar más." << endl;
							cout << "\n";
							cout << "Te despides de ella y le dices que cuide bien de Susan." << endl;
							cout << "\n";
							cout << "¬Lara: No te dejaré así Sam." << endl;
							cout << "\n";
							cout << "Un Hombre de Negro llega hasta tu posición y te detiene." << endl;
							cout << "\n";
							cout << "MIB 1: Maldita escoria, por fin te tenemos..." << endl;
							cout << "\n";
							cout << "MIB 2: Creímos tu fachada, pero nos condonaste a todos..." << endl;
							cout << "\n";
							cout << "MIB 2: Incluso a Susan. Cómo pudiste hacerle esto a ella??!!" << endl;
							cout << "\n";
							cout << "Te sacan del Edificio Bxtr como prisionero y escuchas los gritos de Lara." << endl;
							cout << "\n";
							cout << " WestHeaven está invadida." << endl;
							cout << "\n";
							cout << "Hay naves en el cielo, están altamente magnetizadas y rotan a altas velocidades..." << endl;
							cout << "\n";
							cout << "...lo que hace que emitan pulsos constantes electromagnéticos." << endl;
							cout << "\n";
							cout << "Sin embargo estos pulsos electromagnéticos se detienen en cuanto sales del complejo." << endl;
							cout << "\n";
							cout << "MIB 1: Presten atención todos!! ..." << endl;
							cout << "\n";
							cout << "MIB 1: El famoso Doctor Sam Richards nos mintió..." << endl;
							cout << "\n";
							cout << "MIB 1: Se hizo pasar por uno de nosotros y ahora enfrentará las consecuencias..." << endl;
							cout << "\n";
							cout << "MIB 2: Gracias a los impulsos electromagnéticos de las mismas naves que nos quieren invadir..." << endl;
							cout << "\n";
							cout << "MIB 2: Se han debilitado y son vulnerables..." << endl;
							cout << "\n";
							cout << "MIB 2: Esto es lo que pasa cuando se meten con WestHeaven..." << endl;
							cout << "\n";
							cout << "¬Lara: Nooo Sam!!" << endl;
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
							cout << "Una última oportunidad." << endl;
							cout << "\n";
							cout << "Por lo que te olvidas de la reunión y decides prepar tu día para estar con Susan." << endl;
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
							cout << "¬Susan: Creí que no vendrías, la última vez, esperé en la ventana pero nunca llegaste." << endl;
							cout << "\n";
							cout << "Te dispones a disfrutar el cumpleaños de Susan." << endl;
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
					cout << "Dejas que suene el intercomunicador, puesto que no sabes quién es Lara." << endl;
					cout << "\n";
					cout << "Te acercas a la ventana para tratar de reconocer aquél lugar que parece extraño..." << endl;
					cout << "\n";
					cout << "..." << endl;
					cout << "\n";
					cout << "Autos pasan frente a ti, pero no procesas el cómo, miras hacia abajo y estás en la suite de un edificio..." << endl;
					cout << "\n";
					cout << "Ciertamente no es el lugar que conoces..." << endl;
					cout << "\n";
					cout << "Sales del edificio y caminas por las calles desconocidas." << endl;
					cout << "\n";
					cout << "Mientras paseas curiosamente, eres interrumpido..." << endl;
					cout << "\n";
					cout << "Eres empujado rápidamente por un sujeto que va sobre un deslizador aéreo." << endl;
					cout << "\n";
					cout << "De alguna manera, ese dispositivo te es familiar, lo conoces..." << endl;
					cout << "\n";
					cout << "... aunque solamente lo habías imaginado por aquella vieja película." << endl;
					cout << "\n";
					cout << "Sigues con la mirada al sujeto con la \"hoverboard\" hasta que se detiene en un establecimiento." << endl;
					cout << "\n";
					cout << "El sujeto se baja de la \"hoverboard\" y la deja afuera del establecimiento." << endl;
					cout << "\n";
					cout << "Corres velozmente hacia el lugar y te subes en la \"hoverboard\"..." << endl;
					cout << "\n";
					cout << "Te cuesta un poco mantener el equilibrio..." << endl;
					cout << "\n";
					cout << "Pero tu adrenalina controla tu vértigo..." << endl;
					cout << "\n";
					cout << "Comienzas a zurcar sobre el aire, mientras contemplas esa ciudad de ensueño." << endl;
					cout << "\n";
					cout << "Eres testigo de lo que parece una ilusión. Arquitectura descomunal, tranvías de levitación magnética, autos voladores." << endl;
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
				cout << "Después de unas horas..." << endl;
				cout << "\n";
				cout << "Sientes el sol en tus ojos, así que por fin decides levantarte..." << endl;
				cout << "\n";
				cout << "Se te olvidó que era jueves aún. Por lo que perdiste tus clases." << endl;
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
		cout << "Digita 1 para Sí." << endl;
		cout << "Digita 2 para No." << endl;
		cin >> n;
		if (n == 2) //Asignamos para el entero 2 el valor para sair del bucle
		{
			bandera = true; // Si la bandera es cierta se termina el bucle del código 
		}

	} while (bandera == false); // Fin de la estructura Do-While. Si la bandera es falsa el código se repite en bucle

}

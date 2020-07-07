


//** *** EjemploSerial. ***
// demostracion del uso de instrucciones Serial.available() y Serila.readString()
// por: oflores @ 2015


//****************************************************************** 
//* Inicialización * 
//******************************************************************/ 
String miNombre;  
int edad; 
float estatura;  

//********************* ********************************************* 
//* Configuración * 
//******************************************************************/ 
void setup() 
{ 
	Serial.begin(9600);  
} 
//****************************************************************** 
//* Loop Principal * 
//******************************************************************/ 
void loop() 
{ 
	Serial.println("BIenvenido...");  
	Serial.println("Ingresa tu Nombre:"); 
	while(Serial.available()==0)  
	{

	}  
	miNombre=Serial.readString();
	Serial.println("Qué edad tienes?");
	while(Serial.available()==0) { }
	edad=Serial.parseInt();
	Serial.println("Que estatura tienes,en metros?");
	while(Serial.available()==0) { }
	estatura=Serial.parseFloat();
	Serial.print("Hola");
	Serial.print(miNombre);
	Serial.print(",tu tienes"); 
	Serial.print(edad); 
	Serial.println("años,");
	Serial.print("y tienes ");
	Serial.print(estatura); 
	Serial.println(" mts de alto.");
	Serial.println(""); 

} //FIN DEL CÓDIGO 

 

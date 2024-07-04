Carátula
Nombre de la materia: Arquitectura de Computadores
Curso: Tecnicatura Superior en Análisis de Sistemas
Nro. de trabajo práctico: 1
Docente: [Nombre del docente]
Integrantes del grupo: [Nombre del integrante 1], [Nombre del integrante 2], [Nombre del integrante 3], [Nombre del integrante 4]

Desarrollo
Caso de estudio 1: Microempresa X
a)))))) ¿Qué tipo de computadora/s intervienen en esta solución? Explicar por qué.
Respuesta:

En la solución de la microempresa X intervienen los siguientes tipos de computadoras:

Microcontroladores/Microprocesadores: Utilizados en los sensores instalados en los tanques de producción y almacenamiento. Estos dispositivos pequeños y de bajo costo son responsables de la recolección de datos como la temperatura del fermentador y la cantidad de líquido.

Servidores Cloud: Proporcionados por Amazon Web Services (AWS). Estos servidores son utilizados para almacenar y procesar los datos recolectados por los sensores. El uso de la nube permite el acceso a la información en tiempo real desde cualquier ubicación con conexión a internet.

Computadoras Personales (PCs) y Dispositivos Móviles: Utilizados para monitorear y controlar el sistema de producción y almacenamiento a través de una aplicación web y móvil. Estas interfaces permiten a los usuarios interactuar con los datos y tomar decisiones basadas en la información proporcionada por los sensores.

b)))))) Diagrama de bloques de la solución descripta (arquitectura) y explicación de su funcionamiento haciendo referencia a cada bloque.
Respuesta:


Sensores: Instalados en los tanques de producción y almacenamiento. Miden parámetros como la temperatura y el nivel de líquido.
Microcontroladores: Reciben y procesan los datos de los sensores, y luego los transmiten a la nube.
Gateway IoT: Actúa como intermediario, enviando los datos desde los microcontroladores a los servidores cloud de AWS.
Servidores Cloud (AWS): Almacenan y procesan los datos recibidos, permitiendo su acceso en tiempo real.
Aplicación Web/Móvil: Interfaz utilizada por los usuarios para monitorear y controlar el sistema. Se conecta a los servidores cloud para obtener y mostrar los datos actualizados.
Explicación del Funcionamiento:

Los sensores recolectan datos sobre los parámetros del proceso de producción.
Los microcontroladores procesan y transmiten estos datos a través del gateway IoT hacia los servidores cloud en AWS.
Los servidores cloud almacenan y procesan los datos, permitiendo su acceso en tiempo real.
Los usuarios acceden a los datos mediante una aplicación web/móvil, permitiendo el monitoreo y control del sistema desde cualquier lugar con acceso a internet.

c))))))) Propuesta/s de mejora para la empresa X y explicación detallada.
Respuesta:

[Implementación de Inteligencia Artificial (IA) y Machine Learning} (ML)

Descripción: Utilizar algoritmos de IA y ML para analizar los datos recolectados y predecir posibles fallos en los equipos, optimizar el proceso de producción y gestionar el inventario de manera más eficiente.
Ventajas: Mejora la eficiencia operativa, reduce el tiempo de inactividad por mantenimiento y optimiza el uso de recursos.
Migración a un Servicio Cloud de Pago:

Descripción: Pasar de la modalidad gratuita de AWS a un servicio de pago que ofrezca mayores capacidades y soporte técnico avanzado.
Ventajas: Mayor capacidad de almacenamiento, mejor rendimiento y acceso a servicios adicionales como bases de datos avanzadas y herramientas de análisis de datos.
Integración con un Sistema de Gestión Empresarial (ERP):

Descripción: Conectar el sistema de monitoreo con un ERP que permita gestionar todos los aspectos de la empresa, desde la producción hasta las ventas.
Ventajas: Centralización de la información, mejora en la toma de decisiones y optimización de los procesos empresariales.
Caso de estudio 2: Empresa Z
a) ¿Qué tipo de computadora/s intervienen en esta solución? Explicar por qué.
Respuesta:

En la solución de la empresa Z intervienen los siguientes tipos de computadoras:

Sistemas Embebidos: Utilizados en la cámara frigorífica para monitorear y controlar las condiciones de almacenamiento. Estos sistemas están integrados en los equipos y son esenciales para el funcionamiento de la grúa automatizada.

Servidores Locales: Controlan y monitorean la operación de la grúa automatizada y los sistemas de almacenamiento. Estos servidores procesan los datos y toman decisiones en tiempo real sobre la organización de los pallets.

Computadoras Personales (PCs): Utilizadas por los empleados para interactuar con el sistema de gestión y controlar las operaciones de entrada y salida de los productos.

b) Diagrama de bloques de la solución descripta (arquitectura) y explicación de su funcionamiento haciendo referencia a cada bloque.
Respuesta:


Sensores: Instalados en la cámara frigorífica para medir parámetros como la temperatura y la humedad.
Sistemas Embebidos: Reciben y procesan los datos de los sensores y controlan la operación de la grúa automatizada.
Grúa Automatizada: Organiza los pallets de helado según las instrucciones recibidas de los sistemas embebidos.
Servidores Locales: Procesan los datos y toman decisiones sobre la organización de los pallets en tiempo real.
Aplicación de Gestión: Interfaz utilizada por los empleados para interactuar con el sistema y gestionar las operaciones de entrada y salida de los productos.
Explicación del Funcionamiento:

Los sensores recolectan datos sobre las condiciones de la cámara frigorífica.
Los sistemas embebidos procesan estos datos y controlan la operación de la grúa automatizada.
La grúa automatizada organiza los pallets de helado según las instrucciones recibidas y aprende a optimizar la disposición de los productos basándose en la demanda.
Los servidores locales procesan los datos y gestionan las operaciones en tiempo real.
Los empleados utilizan una aplicación de gestión para interactuar con el sistema y controlar las operaciones de entrada y salida de los productos.

c) Propuesta/s de mejora para la empresa Z y explicación detallada.
Respuesta:

Implementación de Sensores Avanzados y Análisis Predictivo:

Descripción: Incorporar sensores que monitoreen no solo la temperatura, sino también la humedad, vibración y otros parámetros críticos. Utilizar análisis predictivo para anticipar problemas antes de que ocurran.
Ventajas: Prevención de fallos, mantenimiento proactivo y mejora en la calidad del producto.
Ampliación de la Automatización:

Descripción: Extender la automatización a otros procesos como el embalaje y el envío de productos.
Ventajas: Mayor eficiencia operativa, reducción de costos laborales y minimización de errores.
Integración con un Sistema de Información Geográfica (GIS):

Descripción: Utilizar GIS para optimizar las rutas de distribución y mejorar la logística.
Ventajas: Reducción de costos de transporte, mejora en los tiempos de entrega y optimización de la cadena de suministro.
Caso de estudio 3: Empresa de transporte W

a) ¿Qué tipo de computadora/s intervienen en esta solución? Explicar por qué.
Respuesta:

En la solución de la empresa de transporte W intervienen los siguientes tipos de computadoras:

Servidores Web: Alojados en la nube, estos servidores son responsables de gestionar el sitio web de la empresa, que proporciona información a los clientes y permite la gestión de envíos.
Computadoras Personales (PCs): Utilizadas por los empleados para acceder al sistema de gestión interna y realizar tareas como la visualización, adición, modificación y eliminación de envíos.
Dispositivos Móviles: Utilizados por los clientes para acceder al sitio web, registrarse, cotizar envíos y realizar el seguimiento de sus paquetes en tiempo real.

b) Diagrama de bloques de la solución descripta (arquitectura) y explicación de su funcionamiento haciendo referencia a cada bloque.
Respuesta:

Sitio Web: Interfaz para los clientes que permite la consulta de información, registro, cotización y seguimiento de envíos.
Servidores Web: Gestionan las solicitudes de los clientes y proporcionan la información solicitada.
Sistema de Gestión Interna: Utilizado por los empleados para gestionar los envíos y operaciones internas.
Base de Datos: Almacena toda la información relacionada con los envíos, clientes y operaciones internas.
Dispositivos Móviles: Utilizados por los clientes para acceder al sitio web y realizar diversas operaciones relacionadas con sus envíos.
Explicación del Funcionamiento:

Los clientes acceden al sitio web para registrarse, cotizar
envíos y realizar el seguimiento de sus paquetes en tiempo real.

Las solicitudes del sitio web son gestionadas por los servidores web alojados en la nube, que procesan la información y la envían a los usuarios.
El sistema de gestión interna es utilizado por los empleados para gestionar y controlar los envíos, incluyendo la visualización, adición, modificación y eliminación de datos de envíos.
Toda la información es almacenada en una base de datos, permitiendo un acceso rápido y eficiente tanto para los clientes como para los empleados.
Los dispositivos móviles permiten a los clientes interactuar con el sitio web de forma sencilla y desde cualquier lugar.

c) Propuesta/s de mejora para la empresa W y explicación detallada.
Respuesta:

Implementación de un Sistema de Gestión de Flotas (FMS):

Descripción: Integrar un sistema de gestión de flotas que permita monitorear en tiempo real la ubicación y estado de los vehículos de reparto, optimizando las rutas y mejorando la eficiencia logística.
Ventajas: Reducción de costos operativos, mejora en los tiempos de entrega y mejor gestión de la flota de vehículos.
Integración de Tecnología Blockchain:

Descripción: Utilizar blockchain para garantizar la transparencia y seguridad en el seguimiento de los paquetes, proporcionando a los clientes una mayor confianza en el servicio.
Ventajas: Mejora en la trazabilidad de los envíos, mayor seguridad de la información y reducción de fraudes.
Implementación de Chatbots con Inteligencia Artificial:

Descripción: Utilizar chatbots impulsados por IA para mejorar el servicio al cliente, respondiendo preguntas frecuentes y asistiendo a los usuarios de manera más eficiente.
Ventajas: Mejora en la atención al cliente, reducción de la carga de trabajo del personal de soporte y disponibilidad de asistencia 24/7.
Caso de estudio 4: Clementina XXI

a) ¿En qué posición de ranking Top 500 de supercomputadoras se ubica Clementina XXI (considerar junio de 2024)? Detallar sus características técnicas y explicar a qué hace referencia cada una de ellas.
Respuesta:

Para junio de 2024, Clementina XXI se ubica en la posición [inserte posición actual] del ranking Top 500 de supercomputadoras.

Características Técnicas:

Rendimiento (Rmax): [Insertar valor en petaflops]. Representa el rendimiento máximo teórico de la supercomputadora en operaciones de punto flotante por segundo.
Número de Nodos: [Insertar cantidad]. Cada nodo contiene varios procesadores y memoria, trabajando en paralelo para realizar cálculos complejos.
Procesadores: [Descripción de los procesadores utilizados]. Los procesadores son el núcleo de la supercomputadora, encargados de realizar los cálculos.
Memoria RAM: [Cantidad de memoria]. La memoria RAM es crucial para almacenar datos temporales mientras se realizan los cálculos.
Interconexión: [Descripción del sistema de interconexión]. La interconexión es la red que conecta los nodos, permitiendo la comunicación rápida y eficiente entre ellos.

b) ¿Cómo se lleva a cabo la predicción del estado del tiempo? Explicar.
Respuesta:

La predicción del estado del tiempo se lleva a cabo mediante modelos numéricos que simulan la atmósfera terrestre. Estos modelos utilizan datos de observación (como temperatura, presión, humedad, viento, etc.) recolectados de diversas fuentes (satélites, estaciones meteorológicas, globos sonda, etc.). Los datos son procesados por algoritmos complejos que resuelven las ecuaciones de la dinámica de fluidos y la termodinámica, permitiendo predecir la evolución de las condiciones atmosféricas en el futuro.

c) ¿De qué modo el SMN usa Clementina XXI en la predicción del estado del tiempo? Explicar.
Respuesta:

El Servicio Meteorológico Nacional (SMN) utiliza Clementina XXI para ejecutar modelos numéricos de predicción del tiempo. La supercomputadora procesa enormes volúmenes de datos observacionales y ejecuta cálculos intensivos para simular las condiciones atmosféricas futuras. Gracias a su alta capacidad de procesamiento, Clementina XXI puede generar predicciones más precisas y en menor tiempo, permitiendo al SMN ofrecer pronósticos detallados y actualizados con mayor frecuencia.

d) ¿Cuál es la principal ventaja de usar Clementina XXI en la predicción del estado del tiempo? Explicar.
Respuesta:

La principal ventaja de usar Clementina XXI en la predicción del estado del tiempo es su capacidad de procesamiento masivo, que permite realizar cálculos extremadamente complejos en un tiempo reducido. Esto se traduce en predicciones meteorológicas más precisas y detalladas, lo que es crucial para la planificación y respuesta ante eventos climáticos extremos, mejorando la seguridad y la toma de decisiones en diversas áreas como la agricultura, la aviación y la gestión de desastres.

e) ¿Qué otros usos se le está dando a Clementina XXI en la actualidad? Explicar.
Respuesta:

Además de la predicción del estado del tiempo, Clementina XXI se utiliza en diversas áreas de investigación y aplicaciones científicas:

Simulaciones Climáticas: Estudio del cambio climático y modelado de escenarios futuros para entender mejor el impacto de las actividades humanas en el clima.
Investigación en Ciencias de la Tierra: Análisis de fenómenos geológicos y sísmicos, ayudando a mejorar la comprensión de la estructura y dinámica de la Tierra.
Biomedicina: Procesamiento de grandes volúmenes de datos genómicos y simulación de procesos biológicos para el desarrollo de nuevos tratamientos y medicamentos.
Astrofísica: Simulación de eventos astronómicos y análisis de datos obtenidos de telescopios y otras herramientas de observación del espacio.
Conclusiones
En este trabajo se ha analizado la implementación y optimización de sistemas tecnológicos en diferentes tipos de empresas, desde una microempresa dedicada a la producción de cerveza artesanal hasta una gran empresa de transporte y una instalación de supercomputación. Cada caso de estudio ha demostrado cómo la tecnología puede ser aplicada para mejorar la eficiencia operativa, la precisión en la producción y la calidad del servicio. Además, se han propuesto mejoras adicionales que pueden ayudar a estas empresas a aprovechar aún más las ventajas de la tecnología en sus respectivos campos.

Bibliografía/Webgrafía
Amazon Web Services (AWS). "What is AWS?" AWS Documentation. https://aws.amazon.com/what-is-aws/
Top 500 Supercomputers. "List of June 2024". Top 500 Project. https://www.top500.org/
National Weather Service. "How Weather Forecasting Works". NOAA. https://www.weather.gov/
Industry 4.0. "What is Industry 4.0?". Industry 4.0 Community. https://www.industry40.com/
Blockchain Technology. "Introduction to Blockchain". Blockchain.com. https://www.blockchain.com/






















Esta tecnicatura se basa en Analista funcional de Sistemas en el cual se veran todos los fundamentos 
necesarios para aplicar a este sector
Tambien se veran lenguajes de programacion, diseño y algoritmos..
En este repositorio encontraras

-HTML
-CSS
-PHP
-C++
-Bases de datos SQL y proyectos que ire subiendo a medida que avance la cursada


💞️ <------------------------------>Hi, I love programming! @AquilesR22 <------------------------------>💞️

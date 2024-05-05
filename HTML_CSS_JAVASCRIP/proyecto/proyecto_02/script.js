
// Obtiene una referencia al elemento HTML con el ID 'cajas', que actúa como contenedor de las cajas.
const cajasContainer = document.getElementById('cajas')

// Obtiene una referencia al botón con el ID 'btn'.
const btn = document.getElementById('btn')

// Añade un evento 'click' al botón para que cuando se haga clic, se alterna la clase CSS 'grandes' en el contenedor de las cajas.
// Esta clase CSS se utiliza para cambiar el tamaño de las cajas a un tamaño mayor.
btn.addEventListener('click', () => cajasContainer.classList.toggle('grandes'))

// Función que crea una cuadrícula de cajas (elementos 'div') dentro del contenedor de las cajas.
function createCajas() {
  // Itera 4 veces para crear 4 filas de cajas.
  for (let i = 0; i < 4; i++) {
    // Itera 4 veces para crear 4 columnas de cajas.
    for (let j = 0; j < 4; j++) {
      // Crea un nuevo elemento 'div' para cada caja.
      const caja = document.createElement('div')
      // Añade la clase CSS 'caja' al nuevo elemento 'div'.
      caja.classList.add('caja')
      // Establece la posición de fondo de cada caja para formar un mosaico visual.
      // Calcula el desplazamiento del fondo utilizando las coordenadas de la cuadrícula (i y j).
      caja.style.backgroundPosition = `${-j * 125}px ${-i * 125}px`
      // Añade la caja al contenedor de las cajas.
      cajasContainer.appendChild(caja)
    }
  }
}

// Llama a la función para crear la cuadrícula de cajas cuando se carga el script.
createCajas()
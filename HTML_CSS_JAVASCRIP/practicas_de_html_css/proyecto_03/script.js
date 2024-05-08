// Selecciona todos los elementos <span> con la clase 'nums' dentro del documento
const nums = document.querySelectorAll('.nums span');
// Selecciona el elemento con la clase 'counter' en el documento
const counter = document.querySelector('.counter');
// Selecciona el elemento con la clase 'final' en el documento
const finalMessage = document.querySelector('.final');
// Selecciona el botón con el ID 'replay' en el documento
const replay = document.querySelector('#replay');

// Inicia la animación de la cuenta regresiva
runAnimation();

// Define una función para restablecer el DOM a su estado inicial
function resetDOM() {
  // Remueve la clase 'hide' del contador para hacerlo visible
  counter.classList.remove('hide');
  // Remueve la clase 'show' del mensaje final para ocultarlo
  finalMessage.classList.remove('show');

  // Itera sobre cada elemento de la lista 'nums' para restablecer su clase
  nums.forEach((num) => {
    num.classList.value = ''; // Elimina todas las clases de los elementos
  });

  // Añade la clase 'in' al primer elemento de 'nums' para iniciar la animación
  nums[0].classList.add('in');
}

// Define una función para ejecutar la animación de la cuenta regresiva
function runAnimation() {
  // Itera sobre cada elemento de la lista 'nums' con su índice
  nums.forEach((num, idx) => {
    // Calcula el índice del penúltimo elemento
    const nextToLast = nums.length - 1;

    // Agrega un evento de escucha para el evento 'animationend'
    num.addEventListener('animationend', (e) => {
      // Si la animación 'goIn' ha terminado y el índice no es el último
      if (e.animationName === 'goIn' && idx !== nextToLast) {
        // Cambia la clase del elemento de 'in' a 'out'
        num.classList.remove('in');
        num.classList.add('out');
      } else if (e.animationName === 'goOut' && num.nextElementSibling) {
        // Si la animación 'goOut' ha terminado y hay un elemento siguiente
        // Añade la clase 'in' al elemento siguiente
        num.nextElementSibling.classList.add('in');
      } else {
        // Si es el último elemento, oculta el contador y muestra el mensaje final
        counter.classList.add('hide');
        finalMessage.classList.add('show');
      }
    });
  });
}

// Agrega un evento de escucha al botón 'replay' para restablecer el DOM
// y reiniciar la animación cuando se haga clic
replay.addEventListener('click', () => {
  resetDOM();
  runAnimation();
});
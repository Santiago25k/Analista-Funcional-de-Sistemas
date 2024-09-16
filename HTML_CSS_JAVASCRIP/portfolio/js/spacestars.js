const COLORS = ["#fff2", "#fff4", "#fff7", "#fffc"];

// Función para generar coordenadas aleatorias
const getRandomCoordinates = () => {
  const x = Math.floor(Math.random() * 100);
  const y = Math.floor(Math.random() * 100);
  return { x, y };
};

// Función para generar una capa de estrellas
const generateSpaceLayer = (size, selector, totalStars, duration) => {
  const layer = [];
  for (let i = 0; i < totalStars; i++) {
    const color = COLORS[Math.floor(Math.random() * COLORS.length)];
    const { x, y } = getRandomCoordinates(); // Usamos la función para obtener coordenadas
    layer.push(`${x}vw ${y}vh 0 ${color}, ${x}vw ${y + 100}vh 0 ${color}`);
  }

  // Asignacion de propiedades CSS dinámicamente
  const container = document.querySelector(selector);
  container.style.setProperty("--size", size);
  container.style.setProperty("--duration", duration);
  container.style.setProperty("--space-layer", layer.join(","));
}

// Configuracion de las capas de estrellas
const spaceLayersConfig = [
  { size: "2px", selector: ".space-1", totalStars: 250, duration: "25s" },
  { size: "3px", selector: ".space-2", totalStars: 100, duration: "20s" },
  { size: "6px", selector: ".space-3", totalStars: 25, duration: "15s" }
];

// Generar todas las capas de estrellas a partir de la configuracion
spaceLayersConfig.forEach(config => {
  generateSpaceLayer(config.size, config.selector, config.totalStars, config.duration);
});

// Función para generar meteoritos
const generateMeteorLayer = (size, selector, totalMeteors, duration) => {
  const layer = [];
  for (let i = 0; i < totalMeteors; i++) {
    const color = COLORS[Math.floor(Math.random() * COLORS.length)];
    const { x, y } = getRandomCoordinates(); // Generar coordenadas aleatorias
    layer.push(`${x}vw ${y}vh 0 ${color}`); // Añadir la posición y color del meteorito
  }

  // Asignación de propiedades CSS dinámicamente
  const container = document.querySelector(selector);
  container.style.setProperty("--size", size);
  container.style.setProperty("--duration", duration);
  container.style.setProperty("--meteor-layer", layer.join(","));
}

// Generar meteoritos en la capa especificada
generateMeteorLayer("4px", ".meteor", 12, "1.5s");

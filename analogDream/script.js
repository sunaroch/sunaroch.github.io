// Get the buttons and counter elements
const upButton = document.getElementById('upButton');
const downButton = document.getElementById('downButton');
const stayButton = document.getElementById('stayButton');
const upCount = document.getElementById('upCount');
const downCount = document.getElementById('downCount');
const stayCount = document.getElementById('stayCount');

// Initialize counts
let upPressCount = 0;
let downPressCount = 0;
let stayPressCount = 0;

// Add event listeners to the buttons
upButton.addEventListener('click', () => {
  upPressCount++;
  upCount.textContent = upPressCount;
});

downButton.addEventListener('click', () => {
  downPressCount++;
  downCount.textContent = downPressCount;
});

stayButton.addEventListener('click', () => {
  stayPressCount++;
  stayCount.textContent = stayPressCount;
});
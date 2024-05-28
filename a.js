// Wolfram Elementary CA - Scrolling!
// The Coding Train / Daniel Shiffman
// https://thecodingtrain.com/challenges/179-wolfram-ca
// https://youtu.be/Ggxt06qSAe4

let cells = [];
let history = [];
let ruleSet;
let w = 4;
let startRule = 150;
// a selection of rules
let ruleCollection = [235, 30, 110, 57, 62, 75, 22];


function setRules(ruleValue) {
  ruleSet = ruleValue.toString(2);
  while (ruleSet.length < 8) {
    ruleSet = "0"+ ruleSet;
  }
}

function setup() {
  createCanvas(600, 600);
  setRules(startRule);

  let total = width / w;
  for (let i = 0; i < total; i++) {
    cells[i] = 0;
  }
  cells[floor(total / 2)] = 1;
}

function draw() {
  history.push(cells);
  if (random(1) < 0.01) {
    let nextRule = random(ruleCollection);
    setRules(nextRule);
    cells[floor(cells.length / 2)] = 1;
  }

  let cols = height / w;
  if (history.length > cols + 1) {
    history.splice(0, 1);
  }

  let y = 0;
  background(255);
  for (let cells of history) {
    for (let i = 0; i < cells.length; i++) {
      let x = i * w;
      if (cells[i] == 1) {
        noStroke();
        fill(0);
        square(x, y - w, w);
      }
    }
    y += w;
  }

  let nextCells = [];
  let len = cells.length;
  for (let i = 0; i < cells.length; i++) {
    let left = cells[(i - 1 + len) % len];
    let right = cells[(i + 1) % len];
    let state = cells[i];
    nextCells[i] = calculateState(left, state, right);
  }
  cells = nextCells;
}

function calculateState(a, b, c) {
  let neighborhood = "" + a + b + c;
  // console.log(neighborhood);
  let value = 7 - parseInt(neighborhood, 2);
  return parseInt(ruleSet[value]);
}

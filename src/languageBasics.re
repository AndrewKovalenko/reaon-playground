let hello = "hello";
let score = 10;
let newScore = score + 10;

Js.log(hello);

if (true) {
  let hello = "Hola";
  Js.log(hello);
};

let scopedCalculation = {
  let one = 1;
  let two = 2;
  one + two;
};

Js.log(scopedCalculation);

let specialString = {|Hello
  world
  \
  hehe...
  |};

Js.log(specialString);

let longGreeting = {j| $hello, my friend|j};
Js.log(longGreeting);

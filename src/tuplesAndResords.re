let simpleTuple = (24, "Hola", true);

type person = {
  age: int,
  name: string,
};

type mutablePreson = {
  mutable age: int,
  name: string,
};

let me = {age: 5, name: "John Bo"};
let newMe = {...me, age: me.age + 1};
Js.log({j| Old me: $me|j});
Js.log({j| New me: $newMe|j});

let mutableMe = {age: 5, name: "Ololoev"};

mutableMe.age = mutableMe.age + 2;

Js.log({j| Mutated me: $mutableMe|j});

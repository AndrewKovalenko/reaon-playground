type possibleResponses =
  | Yes
  | No
  | MayBe(string);

let answer = MayBe("I need more time");

let message =
  switch (answer) {
  | Yes => "Awersome"
  | No => "Keep going"
  | MayBe(reason) => {j|$reason|j}
  };

Js.log(message);

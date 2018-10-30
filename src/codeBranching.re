let isMorning = true;

let greeting = if (isMorning) {"Buenas dias"} else {"Buenas tardes"};
Js.log(greeting);

let suspectUndefined =
  if (false) {
    Some("Should be never called");
  } else {
    None;
  };

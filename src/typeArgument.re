/* before */
type intCoordinates = (int, int, int);
type floatCoordinates = (float, float, float);

/* after */
type coordinates('a) = ('a, 'a, 'a);

let point: coordinates(float) = (1.2, 2.3, 3.4);

let anotherPoint = (1.2, 2.3, 3.4);
let thirdPoint = (1, 2, 3);

type result('ok, 'error) =
  | Ok('ok)
  | Error('error);

type okPayload = {data: string};

type multipleRequestsResults('errorMessageType) =
  list(result(okPayload, 'errorMessageType));

let requestsResults: multipleRequestsResults(string) = [
  Ok({data: "hey"}),
  Ok({data: "there"}),
  Error("Error I said"),
];

type student = {teachedBy: teacher}
and teacher = {teaches: list(student)};

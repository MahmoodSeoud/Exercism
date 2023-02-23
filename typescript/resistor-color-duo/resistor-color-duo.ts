export function decodedValue(color1: string, color2: string, color3?: string) : Number {

  const colors = ['black', 'brown', 'red', 'orange', 'yellow', 'green', 'blue', 'violet', 'grey', 'white'];
  const colorMap = new Map();

  colors.forEach((Color, index) => {
    colorMap.set(Color, `${index}`)
  });

  let number1:string = colorMap.get(color1);
  let number2:string = colorMap.get(color2);

  const finalNumber: string = number1 +  number2
  return Number(finalNumber)
}
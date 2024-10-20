export function decodedResistorValue(colorArr: string[]) {
  const colorMap: { [key: string]: Number } = {
    'black': 0,
    'brown': 1,
    'red': 2,
    'orange': 3,
    'yellow': 4,
    'green': 5,
    'blue': 6,
    'violet': 7,
    'grey': 8,
    'white': 9,
  }


const value1 = colorMap[colorArr[0]];
const value2 = colorMap[colorArr[1]];
const expValue = colorMap[colorArr[2]]


const zeros = []
for (let index = 0; index < expValue; index++) {
  zeros.push(0)
}

if(zeros.length == 4){
  return `${value1 > 0 && value1}${value2 > 0 && value2} kiloohms` 
}

if(zeros.length == 6){
  return `${value1 > 0 && value1}${value2 > 0 && value2} megaohms` 
}

if(zeros.length == 9){
  return `${value1 > 0 && value1}${value2 > 0 && value2} gigaohms` 
}

return `${value1}${value2}${zeros.length > 0 && zeros.toString()} ohms` 

}

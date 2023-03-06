export function isPangram(str: string) : any {
  const regexp: RegExp = /^[A-Z]+$/i

  const result = new Set();
  
  Array(str).forEach(char => char.match(regexp) && result.add(char))

  return result.values
}

export function isPangram(str: string) : any {

  str = str.toLowerCase();
  return [...'abcdefghijklmnopqrstuvwxyz'].every(char => str.includes(char))
}

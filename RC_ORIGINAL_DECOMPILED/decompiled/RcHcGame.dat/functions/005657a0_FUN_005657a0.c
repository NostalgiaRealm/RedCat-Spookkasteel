/*
 * FUN_005657a0 at 005657a0
 * undefined FUN_005657a0(void)
 * Address ranges: 005657a0-005657c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005657a0(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_1 != (char *)0x0) {
    uVar2 = 0xffffffff;
    pcVar3 = param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_005657d0(param_1,~uVar2 - 1);
  }
  return;
}


/*
 * FUN_004a6a00 at 004a6a00
 * undefined FUN_004a6a00(void)
 * Address ranges: 004a6a00-004a6a12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004a6a00(char *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return ~uVar2 - 1;
}


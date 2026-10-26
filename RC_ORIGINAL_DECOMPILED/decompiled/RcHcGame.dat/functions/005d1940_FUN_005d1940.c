/*
 * FUN_005d1940 at 005d1940
 * undefined FUN_005d1940(void)
 * Address ranges: 005d1940-005d195f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_005d1940(int *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (*param_1 == 0) {
    return 0;
  }
  uVar2 = 0xffffffff;
  pcVar3 = (char *)(param_1[*param_1 + 1] + 8 + (int)param_1);
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  return ~uVar2 + param_1[*param_1 + 1];
}


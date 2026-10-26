/*
 * FUN_0060d00b at 0060d00b
 * undefined FUN_0060d00b(void)
 * Address ranges: 0060d00b-0060d02f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0060d00b(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (0 < param_2) {
    puVar2 = &param_2;
    iVar3 = param_2;
    do {
      puVar1 = puVar2 + 1;
      puVar2 = puVar2 + 1;
      FUN_00611120(param_1,*puVar1);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


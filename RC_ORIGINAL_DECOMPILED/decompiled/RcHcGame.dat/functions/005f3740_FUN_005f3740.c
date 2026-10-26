/*
 * FUN_005f3740 at 005f3740
 * undefined FUN_005f3740(void)
 * Address ranges: 005f3740-005f377e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f3740(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x44))();
  if (cVar1 != '\0') {
    FUN_005ec880(*(int *)(param_2 + 0xc) + param_1[0xb],param_3);
    return;
  }
  FUN_005ec880(param_1[0xb],param_3);
  return;
}


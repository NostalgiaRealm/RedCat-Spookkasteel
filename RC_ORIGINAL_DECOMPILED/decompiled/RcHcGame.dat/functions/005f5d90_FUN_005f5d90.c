/*
 * FUN_005f5d90 at 005f5d90
 * undefined FUN_005f5d90(void)
 * Address ranges: 005f5d90-005f5dc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f5d90(undefined4 *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = (int)param_2 - (int)param_1;
  *(undefined2 *)param_1 = *param_2;
  iVar1 = 5;
  puVar2 = param_1 + 6;
  do {
    param_1 = param_1 + 1;
    *param_1 = *(undefined4 *)(iVar3 + (int)param_1);
    *(undefined2 *)puVar2 = *(undefined2 *)(iVar3 + -2 + (int)puVar2 + 2);
    iVar1 = iVar1 + -1;
    puVar2 = (undefined4 *)((int)puVar2 + 2);
  } while (iVar1 != 0);
  return;
}


/*
 * FUN_005ea8f0 at 005ea8f0
 * undefined FUN_005ea8f0(void)
 * Address ranges: 005ea8f0-005ea94a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005ea8f0(int param_1,undefined4 *param_2,void *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)param_3 + 4);
  puVar1 = operator_new(0x3c);
  puVar2 = param_3;
  if (param_3 == (void *)0x0) {
    puVar2 = puVar1;
  }
  *puVar1 = puVar2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  puVar1[1] = puVar3;
  *(undefined4 **)((int)param_3 + 4) = puVar1;
  *(undefined4 **)puVar1[1] = puVar1;
  FUN_005ea950(puVar1 + 2,param_4);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *param_2 = puVar1;
  return;
}


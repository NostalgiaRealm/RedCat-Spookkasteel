/*
 * FUN_006035c3 at 006035c3
 * undefined FUN_006035c3(void)
 * Address ranges: 006035c3-006035f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_006035c3(int *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  
  uVar1 = *(uint *)param_1[8];
  if ((uVar1 == 0) || (uVar1 + *(int *)param_1[0xc] * 2 <= uVar1)) {
    param_2 = (**(code **)(*param_1 + 4))(param_2);
  }
  else {
    puVar2 = (undefined2 *)FUN_00605550();
    *puVar2 = (short)param_2;
  }
  return param_2;
}


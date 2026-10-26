/*
 * FUN_00603561 at 00603561
 * undefined FUN_00603561(void)
 * Address ranges: 00603561-00603588
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00603561(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00603589(&param_2);
  *(undefined4 *)(param_1 + 8) = *puVar1;
  *puVar1 = 0;
  FUN_0060b25d(param_2);
  return;
}


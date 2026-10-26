/*
 * FUN_00457240 at 00457240
 * undefined FUN_00457240(void)
 * Address ranges: 00457240-00457251
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00457240(int *param_1,int param_2)

{
  *param_1 = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  }
  return;
}


/*
 * FUN_005c3350 at 005c3350
 * undefined FUN_005c3350(void)
 * Address ranges: 005c3350-005c338b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c3350(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1 + 0x20;
  if (param_1[0x2b] == 0) {
    puVar2 = param_1 + 1;
  }
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  if (param_3 != (undefined4 *)0x0) {
    for (iVar1 = 9; param_1 = param_1 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_3 = *param_1;
      param_3 = param_3 + 1;
    }
  }
  return 1;
}


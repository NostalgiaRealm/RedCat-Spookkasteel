/*
 * FUN_005c1be0 at 005c1be0
 * undefined FUN_005c1be0(void)
 * Address ranges: 005c1be0-005c1c13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c1be0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = FUN_005c1b80(&local_4);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xa4) = 0;
    return 0;
  }
  *(undefined4 *)(param_1 + 0xa4) = local_4;
  return 1;
}


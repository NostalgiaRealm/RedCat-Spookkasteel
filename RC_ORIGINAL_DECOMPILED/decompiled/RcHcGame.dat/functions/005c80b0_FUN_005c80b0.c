/*
 * FUN_005c80b0 at 005c80b0
 * undefined FUN_005c80b0(void)
 * Address ranges: 005c80b0-005c80d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005c80b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_005c8ed0(*(undefined4 *)(param_1 + 4),param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_005c8ea0(iVar1);
  return;
}


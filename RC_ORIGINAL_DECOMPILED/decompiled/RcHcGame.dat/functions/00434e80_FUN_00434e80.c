/*
 * FUN_00434e80 at 00434e80
 * undefined FUN_00434e80(void)
 * Address ranges: 00434e80-00434f1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00434e80(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [48];
  
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  FUN_004247e0();
  FUN_005b3af0();
  iVar1 = FUN_005b3fb0();
  if (iVar1 != 0) {
    FUN_005b44a0(local_30);
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    FUN_005b3470(&local_48);
  }
  *param_1 = local_48;
  param_1[1] = local_44;
  param_1[2] = local_40;
  return;
}


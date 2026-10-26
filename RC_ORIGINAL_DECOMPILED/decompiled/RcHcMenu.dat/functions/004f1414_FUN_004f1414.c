/*
 * FUN_004f1414 at 004f1414
 * undefined __register FUN_004f1414(int * param_1)
 * Address ranges: 004f1414-004f1497
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f1414(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_10 = 0;
  puStack_118 = &LAB_004f1498;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  local_8 = param_1;
  if (param_1[3] == 0) {
    FUN_00402fe0(*param_1,local_110);
    FUN_00403fd4(&local_10,local_110);
    FUN_00404038(&local_10,(undefined4 *)".SafeGetAppProp : no AppProp");
    FUN_00403d94(local_10);
  }
  local_c = local_8[3];
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_004f149f;
  puStack_118 = (undefined1 *)0x4f1497;
  FUN_00403db0(&local_10);
  return;
}


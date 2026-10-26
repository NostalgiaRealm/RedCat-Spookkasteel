/*
 * FUN_004a3c88 at 004a3c88
 * undefined __register FUN_004a3c88(int * param_1, undefined4 * param_2)
 * Address ranges: 004a3c88-004a3d13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a3c88(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_110 [256];
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  puStack_11c = &LAB_004a3d14;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = FUN_00402fdc(param_2);
  iVar2 = FUN_00402fdc(local_8);
  if (iVar1 != iVar2) {
    FUN_00402fe0(*local_8,local_110);
    FUN_00403fd4(&local_10,local_110);
    FUN_00404038(&local_10,(undefined4 *)".Assign: Incompatible classtype");
    FUN_00403d94(local_10);
  }
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_004a3d1b;
  puStack_11c = (undefined1 *)0x4a3d13;
  FUN_00403db0(&local_10);
  return;
}


/*
 * FUN_004b49b8 at 004b49b8
 * undefined __register FUN_004b49b8(int * param_1, int param_2)
 * Address ranges: 004b49b8-004b4a61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b49b8(int *param_1,int param_2)

{
  bool bVar1;
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
  puStack_118 = &LAB_004b4a62;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  local_c = param_2;
  local_8 = param_1;
  bVar1 = FUN_004918fc(param_2);
  if (!bVar1) {
    bVar1 = FUN_0049191c(local_c);
    if (!bVar1) {
      FUN_00402fe0(*local_8,local_110);
      FUN_00403fd4(&local_10,local_110);
      FUN_00404038(&local_10,
                   (undefined4 *)".SetAppObjDesc: This AppObjDesc does not exist as a table.");
      FUN_00403d94(local_10);
    }
  }
  local_8[7] = local_c;
  *(int *)(local_8[8] + 0x18) = local_c;
  FUN_004b51e8((int)local_8);
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_004b4a69;
  puStack_118 = (undefined1 *)0x4b4a61;
  FUN_00403db0(&local_10);
  return;
}


/*
 * FUN_0052c428 at 0052c428
 * undefined __register FUN_0052c428(int * param_1, int param_2)
 * Address ranges: 0052c428-0052c4c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052c428(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
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
  puStack_118 = &LAB_0052c4ca;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (-1 < param_2) {
    iVar2 = FUN_0045da14(param_1[0x20]);
    puVar1 = puStack_114;
    if (local_c < iVar2) goto LAB_0052c4a0;
  }
  puStack_114 = puVar1;
  FUN_00402fe0(*local_8,local_110);
  FUN_00403fd4(&local_10,local_110);
  FUN_00404038(&local_10,(undefined4 *)".SetCurrent: index out of bound");
  FUN_00403d94(local_10);
LAB_0052c4a0:
  local_8[0x22] = local_c;
  FUN_0054a2b0(local_8);
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_0052c4d1;
  puStack_118 = (undefined1 *)0x52c4c9;
  FUN_00403db0(&local_10);
  return;
}


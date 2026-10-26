/*
 * FUN_004717ac at 004717ac
 * undefined __register FUN_004717ac(undefined4 param_1, int param_2, int * param_3)
 * Address ranges: 004717ac-00471840
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004717ac(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined1 local_14;
  int local_10;
  undefined1 local_c;
  undefined4 *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_28 = &LAB_00471841;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_00403e04(param_3,*(undefined4 **)(param_2 + 0x2c));
  for (iVar1 = *(int *)(param_2 + 0x8c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x8c)) {
    if ((*(char *)(iVar1 + 0x34) != '\x1b') && (*(char *)(iVar1 + 0xe0) == '\0')) {
      local_18 = *(undefined4 *)(iVar1 + 0x2c);
      local_14 = 0xb;
      local_10 = *param_3;
      local_c = 0xb;
      FUN_0040a894((byte *)"%s.%s",&local_18,1,(int *)&local_8);
      FUN_00403e04(param_3,local_8);
    }
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00471848;
  puStack_28 = (undefined1 *)0x471840;
  FUN_00403db0((int *)&local_8);
  return;
}


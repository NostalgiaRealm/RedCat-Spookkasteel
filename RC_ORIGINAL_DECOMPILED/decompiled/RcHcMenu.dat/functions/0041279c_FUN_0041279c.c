/*
 * FUN_0041279c at 0041279c
 * undefined __register FUN_0041279c(int param_1, int param_2)
 * Address ranges: 0041279c-00412817
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041279c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x4127ae;
  FUN_00412824(param_1);
  puStack_14 = &LAB_00412818;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x20) != '\x01') {
    puStack_10 = &stack0xfffffffc;
    iVar1 = FUN_004123e0(*(int *)(param_1 + 4),param_2);
    if (iVar1 != -1) {
      if (*(char *)(param_1 + 0x20) == '\x02') {
        FUN_004122c0(**(undefined4 **)(param_1 + 4),(undefined4 *)PTR_LAB_00572288,param_2);
      }
      goto LAB_00412802;
    }
  }
  FUN_004121d8(*(int **)(param_1 + 4),param_2);
LAB_00412802:
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0041281f;
  puStack_14 = (undefined1 *)0x412817;
  FUN_00412888(param_1);
  return;
}


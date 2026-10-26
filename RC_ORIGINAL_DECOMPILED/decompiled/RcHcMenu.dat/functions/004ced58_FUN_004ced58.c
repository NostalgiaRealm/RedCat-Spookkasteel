/*
 * FUN_004ced58 at 004ced58
 * undefined __register FUN_004ced58(int param_1, int * param_2, int * param_3)
 * Address ranges: 004ced58-004cee3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ced58(int param_1,int *param_2,int *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 *local_1c;
  undefined4 *local_18;
  char local_11;
  int *local_10;
  int *local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_18 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  puStack_28 = &LAB_004cee3b;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00403e48((int *)&local_18,*param_2);
  FUN_00403e48((int *)&local_1c,*local_10);
  if ((local_18 == (undefined4 *)0x0) && (local_1c == (undefined4 *)0x0)) {
    FUN_00403e48((int *)&local_18,*(int *)(local_8 + 0x10));
    FUN_00403e48((int *)&local_1c,*(int *)(local_8 + 0x14));
  }
  if (*(int *)(local_8 + 0x24) == 0) {
    local_11 = FUN_004cc23c((int *)&local_18,(int *)&local_1c);
  }
  else {
    local_11 = (**(code **)(local_8 + 0x24))(&local_18,&local_1c);
  }
  if (local_11 != '\0') {
    FUN_00403e04(local_c,local_18);
    FUN_00403e04(local_10,local_1c);
    FUN_00403e04((int *)(local_8 + 0x10),local_18);
    FUN_00403e04((int *)(local_8 + 0x14),local_1c);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004cee42;
  puStack_28 = (undefined1 *)0x4cee3a;
  FUN_00403dd4((int *)&local_1c,2);
  return;
}


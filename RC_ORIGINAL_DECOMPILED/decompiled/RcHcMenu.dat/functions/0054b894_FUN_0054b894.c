/*
 * FUN_0054b894 at 0054b894
 * undefined __register FUN_0054b894(int * param_1, int param_2)
 * Address ranges: 0054b894-0054b90e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054b894(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_18 = (undefined1 *)0x54b8a8;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4(param_2);
  puStack_1c = &LAB_0054b90f;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  if (local_8 == (int *)0x0) {
    puStack_18 = &stack0xfffffffc;
    FUN_00403d94("No help context file set");
  }
  local_14 = (**(code **)(*local_8 + 0x50))(local_8,local_c);
  if (local_14 < 0) {
    local_10 = 0;
  }
  else {
    local_10 = (**(code **)(*local_8 + 0x18))(local_8,local_14);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0054b916;
  puStack_1c = (undefined1 *)0x54b90e;
  FUN_00403db0(&local_c);
  return;
}


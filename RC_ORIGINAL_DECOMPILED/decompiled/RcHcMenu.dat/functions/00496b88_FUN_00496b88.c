/*
 * FUN_00496b88 at 00496b88
 * undefined __register FUN_00496b88(int * param_1, int * param_2)
 * Address ranges: 00496b88-00496c1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00496b88(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = 0;
  puStack_18 = &LAB_00496c1e;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_c = param_2;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 == '\0') {
    FUN_00496d84((int)local_8);
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
  }
  cVar1 = (**(code **)(*local_8 + 0x50))();
  if (cVar1 == '\0') {
    (**(code **)(*local_8 + 0x14))(local_8,local_c);
  }
  else {
    FUN_00403db0(local_c);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00496c25;
  puStack_18 = (undefined1 *)0x496c1d;
  FUN_00403db0(&local_10);
  return;
}


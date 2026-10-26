/*
 * FUN_0048af98 at 0048af98
 * undefined __register FUN_0048af98(int * param_1, int param_2)
 * Address ranges: 0048af98-0048afda
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048af98(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_c;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x48afac;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4(param_2);
  puStack_14 = &LAB_0048afdb;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x70))(local_8,local_c);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0048afe2;
  puStack_14 = (undefined1 *)0x48afda;
  FUN_00403db0(&local_c);
  return;
}


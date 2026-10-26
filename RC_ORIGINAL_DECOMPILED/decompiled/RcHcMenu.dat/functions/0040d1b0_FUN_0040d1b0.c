/*
 * FUN_0040d1b0 at 0040d1b0
 * undefined __register FUN_0040d1b0(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0040d1b0-0040d24b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040d1b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  int *piVar2;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  byte *local_24;
  int local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  int local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_24 = (byte *)0x0;
  local_8 = 0;
  puStack_38 = &LAB_0040d24c;
  puStack_3c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_3c;
  if (param_1 == 0) {
    FUN_00406a48((undefined4 *)PTR_PTR_0057244c,&local_8);
  }
  else {
    puStack_34 = &stack0xfffffffc;
    FUN_00403e48(&local_8,param_1);
  }
  local_20 = local_8;
  local_1c = 0xb;
  local_14 = 0xb;
  local_c = 0;
  piVar2 = &local_20;
  uVar1 = 2;
  local_18 = param_2;
  local_10 = param_3;
  FUN_00406a48((undefined4 *)PTR_PTR_00572500,(int *)&local_24);
  FUN_0040cf28((int)&DAT_00409340,'\x01',local_24,uVar1,piVar2);
  *in_FS_OFFSET = uVar1;
  puStack_3c = &LAB_0040d253;
  FUN_00403db0((int *)&local_24);
  FUN_00403db0(&local_8);
  return;
}


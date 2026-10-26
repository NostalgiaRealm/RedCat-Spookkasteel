/*
 * FUN_00468b08 at 00468b08
 * undefined __register FUN_00468b08(int param_1, undefined4 param_2)
 * Address ranges: 00468b08-00468b71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00468b08(int param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_18;
  int local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_18 = 0;
  puStack_28 = &LAB_00468b72;
  puStack_2c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_2c;
  FUN_004692f8(param_1,&local_18);
  local_14 = local_18;
  local_10 = 0xb;
  local_8 = 0xb;
  uVar1 = 1;
  local_c = param_2;
  FUN_0040cfe4((int)&DAT_00461aa8,'\x01',(undefined4 *)PTR_PTR_00572580,1,&local_14);
  *in_FS_OFFSET = uVar1;
  puStack_2c = &LAB_00468b79;
  FUN_00403db0(&local_18);
  return;
}


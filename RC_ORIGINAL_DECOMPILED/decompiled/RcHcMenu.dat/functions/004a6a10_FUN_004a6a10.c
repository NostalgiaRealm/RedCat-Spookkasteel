/*
 * FUN_004a6a10 at 004a6a10
 * undefined __register FUN_004a6a10(undefined4 param_1, undefined * param_2)
 * Address ranges: 004a6a10-004a6a58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a6a10(undefined4 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined1 local_d;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = (undefined1 *)0x4a6a24;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_18 = &LAB_004a6a59;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  puVar1 = FUN_004041f4(local_c);
  local_d = xvga_file_exist();
  *in_FS_OFFSET = puVar1;
  puStack_18 = &LAB_004a6a60;
  uStack_1c = 0x4a6a58;
  FUN_00403db0((int *)&local_c);
  return;
}


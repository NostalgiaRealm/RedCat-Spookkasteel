/*
 * FUN_004a4c44 at 004a4c44
 * undefined __register FUN_004a4c44(int param_1)
 * Address ranges: 004a4c44-004a4ca9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a4c44(int param_1)

{
  undefined1 *extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  puStack_18 = &LAB_004a4caa;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_8 = param_1;
  FUN_0040b104();
  FUN_0040bd30((int *)&local_10,extraout_EDX,extraout_ECX);
  FUN_0040407c(&local_c,(undefined4 *)"Current date/time : ",local_10);
  FUN_004a4324(local_8,0x4d,local_c);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004a4cb1;
  puStack_18 = (undefined1 *)0x4a4ca9;
  FUN_00403dd4((int *)&local_10,2);
  return;
}


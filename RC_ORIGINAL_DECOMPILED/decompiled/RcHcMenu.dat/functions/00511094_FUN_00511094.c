/*
 * FUN_00511094 at 00511094
 * undefined __register FUN_00511094(int * param_1, uint * param_2)
 * Address ranges: 00511094-005110f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00511094(int *param_1,uint *param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_c;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x5110a8;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  bVar1 = true;
  puStack_14 = &LAB_005110f7;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00404140((uint *)local_8[0xa1],local_c);
  if (!bVar1) {
    FUN_00403e04(local_8 + 0xa1,local_c);
    FUN_005112f0(local_8,extraout_EDX,extraout_ECX);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005110fe;
  puStack_14 = (undefined1 *)0x5110f6;
  FUN_00403db0((int *)&local_c);
  return;
}


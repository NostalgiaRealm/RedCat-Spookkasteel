/*
 * FUN_0040fce4 at 0040fce4
 * undefined __register FUN_0040fce4(int * param_1, int param_2, int * param_3)
 * Address ranges: 0040fce4-0040fd21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040fce4(int *param_1,int param_2,int *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  BSTR local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (LPCWSTR)0x0;
  puStack_14 = &LAB_0040fd22;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_0040fc64(param_1,param_2,&local_8);
  FUN_00403ff8(param_3,local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0040fd29;
  puStack_14 = (undefined1 *)0x40fd21;
  FUN_00404474(&local_8);
  return;
}


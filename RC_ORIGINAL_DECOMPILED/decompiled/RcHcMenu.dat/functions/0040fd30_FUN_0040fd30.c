/*
 * FUN_0040fd30 at 0040fd30
 * undefined __register FUN_0040fd30(int * param_1, int param_2, LPCSTR param_3)
 * Address ranges: 0040fd30-0040fd77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040fd30(int *param_1,int param_2,LPCSTR param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  OLECHAR *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (OLECHAR *)0x0;
  puStack_1c = &LAB_0040fd78;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004045b8((BSTR)&local_8,param_3);
  FUN_0040fca4(param_1,param_2,local_8);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0040fd7f;
  puStack_1c = (undefined1 *)0x40fd77;
  FUN_00404474(&local_8);
  return;
}


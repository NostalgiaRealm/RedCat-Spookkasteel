/*
 * FUN_00434b64 at 00434b64
 * undefined __register FUN_00434b64(int * param_1, int * param_2)
 * Address ranges: 00434b64-00434ba3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00434b64(int *param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x434b76;
  FUN_00435304((int)param_1);
  puStack_14 = &LAB_00434ba4;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00431c54(param_1,param_2);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00434bab;
  puStack_14 = (undefined1 *)0x434ba3;
  FUN_0043530c((int)param_1);
  return;
}


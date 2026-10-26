/*
 * FUN_00438520 at 00438520
 * undefined __register FUN_00438520(int * param_1, int param_2, int param_3)
 * Address ranges: 00438520-00438570
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00438520(int *param_1,int param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x438535;
  FUN_00435304((int)param_1);
  puStack_18 = &LAB_00438571;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_004384d8((int)param_1,param_2,param_3);
  FUN_00432390(param_1,param_2,param_3);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00438578;
  puStack_18 = (undefined1 *)0x438570;
  FUN_0043530c((int)param_1);
  return;
}


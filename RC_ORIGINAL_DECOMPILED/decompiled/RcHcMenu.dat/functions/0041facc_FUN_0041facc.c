/*
 * FUN_0041facc at 0041facc
 * undefined __register FUN_0041facc(int * param_1, undefined * param_2)
 * Address ranges: 0041facc-0041fb39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41ab68 slot 19 for TMetafile. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41ab68 slot 19 for
   TMetafile. Original bytes unchanged; names and types still inferred. */

void FUN_0041facc(int *param_1,undefined *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined *local_c;
  uint *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  local_c = (undefined *)0x0;
  uVar2 = 1;
  puStack_20 = &LAB_0041fb3a;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar1 = param_1[9];
  FUN_0040a04c(param_2,(int *)&local_c);
  FUN_0040da54(local_c,(int *)&local_8);
  FUN_00404140(local_8,(uint *)&DAT_0041fb50);
  if ((bool)uVar2) {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  FUN_0041e7ac(param_1,param_2);
  *(char *)(param_1 + 9) = (char)iVar1;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0041fb41;
  puStack_20 = (undefined1 *)0x41fb39;
  FUN_00403dd4((int *)&local_c,2);
  return;
}


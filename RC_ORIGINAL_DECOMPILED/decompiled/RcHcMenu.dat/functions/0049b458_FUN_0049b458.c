/*
 * FUN_0049b458 at 0049b458
 * undefined __register FUN_0049b458(int * param_1, undefined2 * param_2, int * param_3, undefined4 * param_4)
 * Address ranges: 0049b458-0049b506
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49893c slot 23 for TDIB. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49893c slot 23 for TDIB.
   Original bytes unchanged; names and types still inferred. */

void FUN_0049b458(int *param_1,undefined2 *param_2,int *param_3,undefined4 *param_4)

{
  SIZE_T dwBytes;
  HGLOBAL pvVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int *local_18;
  undefined4 *local_14;
  int *local_10;
  undefined2 *local_c;
  int *local_8;
  
  *param_2 = 8;
  *param_4 = 0;
  puStack_1c = (undefined1 *)0x49b482;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  local_18 = (int *)FUN_00403064((int *)&PTR_FUN_00410f54,'\x01',param_3);
  puStack_20 = &LAB_0049b507;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x44))(local_8,local_18);
  dwBytes = FUN_004147cc(local_18);
  pvVar1 = GlobalAlloc(0x42,dwBytes);
  *local_10 = (int)pvVar1;
  if (*local_10 == 0) {
    FUN_0040cee0();
  }
  local_14 = GlobalLock((HGLOBAL)*local_10);
  uVar2 = FUN_004147cc(local_18);
  FUN_00402944((undefined4 *)local_18[1],local_14,uVar2);
  GlobalUnlock((HGLOBAL)*local_10);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0049b50e;
  puStack_20 = (undefined1 *)0x49b506;
  FUN_00403094(local_18);
  return;
}


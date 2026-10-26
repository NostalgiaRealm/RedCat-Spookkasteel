/*
 * FUN_00470f98 at 00470f98
 * undefined __register FUN_00470f98(int * param_1, uint * param_2)
 * Address ranges: 00470f98-00471018
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 6 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 6 for TDataSet.
   Original bytes unchanged; names and types still inferred. */

void FUN_00470f98(int *param_1,uint *param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined1 *puVar2;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint *local_10;
  uint *local_c;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  puVar2 = &stack0xfffffffc;
  local_c = (uint *)0x0;
  puStack_18 = &LAB_00471019;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_10 = param_2;
  local_8 = param_1;
  FUN_00403e48((int *)&local_c,param_1[2]);
  FUN_00419464(local_8,local_10);
  bVar1 = (*(byte *)(local_8 + 8) & 0x10) == 0;
  if (!bVar1) {
    FUN_00404140((uint *)local_8[2],local_c);
    if (!bVar1) {
      FUN_00470e1c(local_8[9],extraout_EDX,extraout_ECX,&stack0xfffffffc);
      FUN_00470e1c(local_8[10],extraout_EDX_00,puVar2,&stack0xfffffffc);
    }
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00471020;
  puStack_18 = (undefined1 *)0x471018;
  FUN_00403db0((int *)&local_c);
  return;
}


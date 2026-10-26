/*
 * FUN_00554434 at 00554434
 * undefined __register FUN_00554434(int param_1, undefined4 param_2)
 * Address ranges: 00554434-00554588
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5541f0 slot published:GDIFormShow for TfrmPlayerName. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5541f0 slot
   published:GDIFormShow for TfrmPlayerName. Original bytes unchanged; names and types still
   inferred. */

void FUN_00554434(int param_1,undefined4 param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  uint **ppuVar1;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_20;
  int local_1c;
  undefined1 local_18;
  uint *local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = (uint *)0x0;
  local_20 = 0;
  local_10 = 0;
  puStack_28 = &LAB_00554589;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_c = param_2;
  local_8 = param_1;
  FUN_0054ee68(param_1);
  FUN_00432744(*(int *)(local_8 + 0x300),(uint *)0x0);
  FUN_00432744(*(int *)(local_8 + 0x30c),*(uint **)(PTR_DAT_00572404 + 0x1c));
  FUN_004297c4(*(int **)(local_8 + 0x30c));
  FUN_00432714(*(int *)(local_8 + 0x30c),&local_10);
  (**(code **)(**(int **)(local_8 + 0x2f4) + 0x5c))(*(int **)(local_8 + 0x2f4),local_10 != 0);
  ppuVar1 = &local_14;
  FUN_00432714(*(int *)(local_8 + 0x2f4),&local_20);
  local_1c = local_20;
  local_18 = 0xb;
  FUN_0040a894(*(byte **)(PTR_DAT_00572404 + 0x18),&local_1c,0,(int *)ppuVar1);
  FUN_00432744(*(int *)(local_8 + 0x308),local_14);
  FUN_0043262c(*(int **)(local_8 + 0x30c),CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
  (**(code **)(**(int **)(local_8 + 0x30c) + 0xb0))();
  FUN_004297c4(*(int **)(local_8 + 0x30c));
  FUN_0043262c(*(int **)(local_8 + 0x2ec),0,extraout_ECX_00);
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"RcMn7");
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00554590;
  puStack_28 = (undefined1 *)0x554578;
  FUN_00403db0(&local_20);
  puStack_28 = (undefined1 *)0x554580;
  FUN_00403db0((int *)&local_14);
  puStack_28 = (undefined1 *)0x554588;
  FUN_00403db0(&local_10);
  return;
}


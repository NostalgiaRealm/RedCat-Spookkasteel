/*
 * FUN_0056aeec at 0056aeec
 * undefined __register FUN_0056aeec(int * param_1, int * param_2)
 * Address ranges: 0056aeec-0056b06b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x56aa80 slot 5 for TSettings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x56aa80 slot 5 for
   TSettings. Original bytes unchanged; names and types still inferred. */

void FUN_0056aeec(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_11c [256];
  int local_1c;
  undefined4 *local_18;
  undefined1 local_14 [4];
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_18 = (undefined4 *)0x0;
  local_1c = 0;
  puStack_124 = &LAB_0056b06c;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_11c);
  FUN_00403fd4(&local_1c,local_11c);
  FUN_004040f0((int *)&local_18,3);
  puVar1 = local_18;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,2);
  FUN_004a3b2c(local_c,local_14);
  *(undefined1 *)(local_8 + 2) = local_14[0];
  FUN_004a3b2c(local_c,local_8 + 0xb);
  FUN_004a3b2c(local_c,local_8 + 4);
  FUN_004a3b2c(local_c,local_8 + 6);
  FUN_004a3b2c(local_c,local_8 + 5);
  FUN_004a3b6c(local_c,local_8 + 7);
  FUN_004a3b6c(local_c,(int)local_8 + 0x1d);
  FUN_004a3b6c(local_c,(int)local_8 + 0x1e);
  FUN_004a3b6c(local_c,(int)local_8 + 0x1f);
  FUN_004a3b6c(local_c,(int)local_8 + 0x39);
  FUN_004a3b6c(local_c,local_8 + 0xe);
  FUN_004a3b6c(local_c,local_8 + 0x10);
  FUN_004a3b2c(local_c,&local_10);
  *(double *)(local_8 + 0xc) = (double)((float)local_10 / 100.0);
  FUN_004a3b2c(local_c,local_8 + 8);
  FUN_004a3b2c(local_c,local_8 + 0xf);
  (**(code **)(*(int *)local_8[3] + 0x14))((int *)local_8[3],local_c);
  *in_FS_OFFSET = "LoadFromStream";
  FUN_00403dd4(&local_1c,2);
  return;
}


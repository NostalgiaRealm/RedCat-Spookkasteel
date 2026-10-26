/*
 * FUN_0056b0a4 at 0056b0a4
 * undefined __register FUN_0056b0a4(int * param_1, int * param_2)
 * Address ranges: 0056b0a4-0056b22d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x56aa80 slot 4 for TSettings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x56aa80 slot 4 for
   TSettings. Original bytes unchanged; names and types still inferred. */

void FUN_0056b0a4(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_11c = &LAB_0056b22e;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_004040f0((int *)&local_10,3);
  puVar1 = local_10;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,2);
  FUN_004a3b8c(local_c,(uint)*(byte *)(local_8 + 2));
  FUN_004a3b8c(local_c,local_8[0xb]);
  FUN_004a3b8c(local_c,local_8[4]);
  FUN_004a3b8c(local_c,local_8[6]);
  FUN_004a3b8c(local_c,local_8[5]);
  FUN_004a3bcc(local_c,(char)local_8[7]);
  FUN_004a3bcc(local_c,*(undefined1 *)((int)local_8 + 0x1d));
  FUN_004a3bcc(local_c,*(undefined1 *)((int)local_8 + 0x1e));
  FUN_004a3bcc(local_c,*(undefined1 *)((int)local_8 + 0x1f));
  FUN_004a3bcc(local_c,*(undefined1 *)((int)local_8 + 0x39));
  FUN_004a3bcc(local_c,(char)local_8[0xe]);
  FUN_004a3bcc(local_c,(char)local_8[0x10]);
  uVar2 = FUN_00402b54();
  if ((int)uVar2 >> 0x1f != extraout_EDX) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  FUN_004a3b8c(local_c,uVar2);
  FUN_004a3b8c(local_c,local_8[8]);
  FUN_004a3b8c(local_c,local_8[0xf]);
  (**(code **)(*(int *)local_8[3] + 0x10))((int *)local_8[3],local_c);
  *in_FS_OFFSET = "SaveToStream";
  FUN_00403dd4(&local_14,2);
  return;
}


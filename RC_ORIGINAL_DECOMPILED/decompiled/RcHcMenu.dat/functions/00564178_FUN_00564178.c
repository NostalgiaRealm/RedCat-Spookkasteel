/*
 * FUN_00564178 at 00564178
 * undefined __register FUN_00564178(int * param_1, undefined4 param_2)
 * Address ranges: 00564178-00564223;00564245-00564256
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x563ec4 slot published:FormShow for TfrmIntro. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x563ec4 slot
   published:FormShow for TfrmIntro. Original bytes unchanged; names and types still inferred. */

void FUN_00564178(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c [4];
  undefined4 local_c;
  int *local_8;
  
  puStack_2c = &stack0xfffffffc;
  puStack_30 = &LAB_00564224;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_c = param_2;
  local_8 = param_1;
  FUN_00403e04((int *)(param_1[0xb4] + 0x300),(undefined4 *)param_1[0xb5]);
  FUN_005638ec(local_8[0xb4],local_8);
  FUN_00563870(local_8[0xb4],'\x01');
  FUN_00563858(local_8[0xb4],'\x01');
  FUN_00562b10((int *)local_8[0xb4]);
  (**(code **)(*local_8 + 0x40))(local_8,local_1c);
  FUN_00563a00(local_8[0xb4],local_1c);
  FUN_00562e4c((int *)local_8[0xb4]);
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = (undefined1 *)0x564250;
  (**(code **)(*local_8 + 0xb0))(local_8,*local_8,puVar1);
  return;
}


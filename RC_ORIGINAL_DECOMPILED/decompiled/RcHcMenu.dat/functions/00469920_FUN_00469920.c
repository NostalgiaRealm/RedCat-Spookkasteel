/*
 * FUN_00469920 at 00469920
 * undefined __register FUN_00469920(int * param_1, short * param_2)
 * Address ranges: 00469920-00469980;004699ca-004699e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x462a70 slot 41 for TField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x462a70 slot 41 for TField.
   Original bytes unchanged; names and types still inferred. */

void FUN_00469920(int *param_1,short *param_2)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_18 [4];
  int *local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_18[1] = 0;
  local_18[0] = 0;
  puStack_2c = &LAB_004699e5;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x46994b;
  local_8 = param_1;
  bVar1 = FUN_00405c2c(param_2);
  if (bVar1) {
    puStack_34 = (undefined1 *)0x46995a;
    (**(code **)(*local_8 + 0xc0))();
  }
  else {
    puStack_38 = &LAB_00469981;
    uStack_3c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_3c;
    puStack_34 = &stack0xfffffffc;
    (**(code **)(*local_8 + 0xbc))(local_8,param_2);
    *in_FS_OFFSET = uStack_3c;
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004699ec;
  puStack_2c = (undefined1 *)0x4699e4;
  FUN_00403dd4(local_18,2);
  return;
}


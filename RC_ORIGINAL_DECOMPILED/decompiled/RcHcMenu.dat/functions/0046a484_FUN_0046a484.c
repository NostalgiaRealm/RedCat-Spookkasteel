/*
 * FUN_0046a484 at 0046a484
 * undefined __register FUN_0046a484(int * param_1, int * param_2, char param_3)
 * Address ranges: 0046a484-0046a500
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x463020 slot 33 for TStringField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x463020 slot 33 for
   TStringField. Original bytes unchanged; names and types still inferred. */

void FUN_0046a484(int *param_1,int *param_2,char param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  puStack_24 = &LAB_0046a501;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if ((param_3 == '\0') || (param_1[0x14] == 0)) {
    (**(code **)(*param_1 + 0x58))(param_1,&local_10);
    FUN_00403e04(param_2,local_10);
  }
  else {
    puStack_20 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x58))(param_1,&local_c);
    FUN_004619f0((undefined *)param_1[0x14],local_c,(int *)&local_8);
    FUN_00403e04(param_2,local_8);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0046a508;
  puStack_24 = (undefined1 *)0x46a500;
  FUN_00403dd4((int *)&local_10,3);
  return;
}


/*
 * FUN_00487d54 at 00487d54
 * undefined __register FUN_00487d54(int * param_1, undefined * param_2, int param_3, undefined4 * param_4)
 * Address ranges: 00487d54-00487e03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47e718 slot 14 for TDBDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47e718 slot 14 for
   TDBDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00487d54(int *param_1,undefined *param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  int *in_FS_OFFSET;
  int *piVar2;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_18;
  undefined1 local_11;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_28 = (undefined1 *)0x487d7a;
  local_c = param_3;
  local_8 = param_1;
  local_11 = (**(code **)(*param_1 + 0x268))(param_1,10,1);
  puStack_2c = &LAB_00487e04;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_30;
  if (param_4 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
    puStack_28 = &stack0xfffffffc;
    local_10 = FUN_00482b2c((int *)local_8[0x8b],param_2,local_c,0,'\x01');
  }
  else {
    piVar2 = &local_18;
    puStack_28 = &stack0xfffffffc;
    local_10 = FUN_00482b2c((int *)local_8[0x8b],param_2,local_c,(int)piVar2,'\x01');
    piVar1 = FUN_00487538((int *)&PTR_FUN_0047e718,'\x01',(int *)0x0);
    *param_4 = piVar1;
    FUN_004875b0(piVar1,local_18);
  }
  *in_FS_OFFSET = (int)piVar2;
  puStack_30 = &LAB_00487e0b;
  (**(code **)(*local_8 + 0x268))(local_8,10,local_11);
  return;
}


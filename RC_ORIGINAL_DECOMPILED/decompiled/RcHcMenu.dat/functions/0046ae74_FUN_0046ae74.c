/*
 * FUN_0046ae74 at 0046ae74
 * undefined __register FUN_0046ae74(int * param_1, byte * param_2)
 * Address ranges: 0046ae74-0046af1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x46352c slot 40 for TIntegerField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x46352c slot 40 for
   TIntegerField. Original bytes unchanged; names and types still inferred. */

void FUN_0046ae74(int *param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  byte *local_20;
  int local_1c;
  byte *local_18;
  undefined1 local_14;
  int local_10;
  undefined1 local_c;
  int local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_1c = 0;
  local_20 = (byte *)0x0;
  puStack_34 = &LAB_0046af1c;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  if (param_2 == (byte *)0x0) {
    puStack_30 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0xc0))();
  }
  else {
    iVar2 = 0x46aeb1;
    uVar1 = FUN_00402d88(param_2,&local_8);
    if (local_8 != 0) {
      iVar2 = 0;
      local_14 = 0xb;
      local_18 = param_2;
      FUN_004692f8((int)param_1,&local_1c);
      local_10 = local_1c;
      local_c = 0xb;
      FUN_00406a48((undefined4 *)PTR_PTR_00572254,(int *)&local_20);
      FUN_00466e30(local_20,&local_18,1,iVar2);
    }
    (**(code **)(*param_1 + 0x9c))(param_1,uVar1,*param_1,iVar2);
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0046af23;
  puStack_34 = (undefined1 *)0x46af1b;
  FUN_00403dd4((int *)&local_20,2);
  return;
}


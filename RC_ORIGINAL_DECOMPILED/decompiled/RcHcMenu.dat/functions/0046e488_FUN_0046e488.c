/*
 * FUN_0046e488 at 0046e488
 * undefined __register FUN_0046e488(int * param_1, int * param_2)
 * Address ranges: 0046e488-0046e54a;0046e552-0046e576
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x462320 slot 2 for TIndexDef. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x462320 slot 2 for
   TIndexDef. Original bytes unchanged; names and types still inferred. */

void FUN_0046e488(int *param_1,int *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  uint *local_10;
  uint *local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (uint *)0x0;
  local_10 = (uint *)0x0;
  puStack_20 = &LAB_0046e577;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x46e4b3;
  local_8 = param_1;
  uVar3 = FUN_0040320c(param_2,(int)&PTR_FUN_00462320);
  if ((char)uVar3 != '\0') {
    if ((int *)local_8[1] != (int *)0x0) {
      puStack_28 = (undefined1 *)0x46e4cc;
      (**(code **)(*(int *)local_8[1] + 0x14))();
    }
    puStack_2c = &LAB_0046e54b;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    FUN_0046e584((int)local_8,(char)param_2[8]);
    (**(code **)(*local_8 + 0x14))(local_8,param_2[3]);
    FUN_0046e5a8((int)local_8,(uint *)param_2[4]);
    FUN_0046e5d0((int)param_2,(int *)&local_c);
    FUN_0046e5f4((int)local_8,local_c);
    FUN_0046e62c((int)param_2,(int *)&local_10);
    FUN_0046e650((int)local_8,local_10);
    puVar2 = puStack_28;
    local_8[9] = param_2[9];
    *in_FS_OFFSET = uStack_30;
    puStack_28 = (undefined1 *)0x46e55c;
    piVar1 = (int *)local_8[1];
    if (piVar1 != (int *)0x0) {
      puStack_2c = (undefined1 *)0x46e54a;
      (**(code **)(*piVar1 + 0x18))(piVar1,*piVar1,puVar2);
    }
    return;
  }
  puStack_28 = (undefined1 *)0x46e55c;
  FUN_00412a74(local_8,param_2);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0046e57e;
  puStack_20 = (undefined1 *)0x46e576;
  FUN_00403dd4((int *)&local_10,2);
  return;
}


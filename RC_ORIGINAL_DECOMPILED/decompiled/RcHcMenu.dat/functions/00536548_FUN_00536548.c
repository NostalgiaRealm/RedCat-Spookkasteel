/*
 * FUN_00536548 at 00536548
 * undefined4 __register FUN_00536548(int param_1, int * param_2)
 * Address ranges: 00536548-005365d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5361dc slot 1 for TAppOACLayOut. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5361dc slot 1 for
   TAppOACLayOut. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_00536548(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_18;
  int local_14;
  
  if (param_2 == (int *)0x0) {
    FUN_00403d94(" Parameter cannot be nil");
  }
  iVar1 = FUN_0045ba40(*(int *)(param_1 + 4));
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_18 = uVar2 + 1;
    local_14 = 0;
    do {
      iVar1 = (**(code **)**(undefined4 **)(param_1 + 4))(*(undefined4 **)(param_1 + 4),local_14);
      iVar1 = *(int *)(iVar1 + 4);
      iVar3 = (**(code **)(*param_2 + 0x10))();
      if (iVar1 == iVar3) {
        iVar1 = (**(code **)**(undefined4 **)(param_1 + 4))(*(undefined4 **)(param_1 + 4),local_14);
        return *(undefined4 *)(iVar1 + 8);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return 0;
}


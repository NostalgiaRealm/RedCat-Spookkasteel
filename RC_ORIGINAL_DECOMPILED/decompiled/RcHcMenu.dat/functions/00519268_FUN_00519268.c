/*
 * FUN_00519268 at 00519268
 * undefined __register FUN_00519268(int * param_1)
 * Address ranges: 00519268-005192d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x518800 slot 40 for TCheckListBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x518800 slot 40 for
   TCheckListBox. Original bytes unchanged; names and types still inferred. */

void FUN_00519268(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined3 extraout_var;
  uint uVar3;
  undefined4 extraout_ECX;
  WPARAM WVar4;
  
  iVar2 = (**(code **)(*(int *)param_1[0x7c] + 0x14))();
  if (0 < iVar2) {
    iVar2 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX);
    param_1[0x92] = iVar2;
    iVar2 = (**(code **)(*(int *)param_1[0x7c] + 0x14))();
    if (-1 < iVar2 + -1) {
      WVar4 = 0;
      do {
        bVar1 = FUN_005197d0(param_1,WVar4);
        uVar3 = FUN_005197fc(param_1,WVar4);
        uVar3 = FUN_00519194(uVar3,CONCAT31(extraout_var,bVar1) ^ 1);
        FUN_004121d8((int *)param_1[0x92],uVar3);
        WVar4 = WVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_0042cbd8(param_1);
  return;
}


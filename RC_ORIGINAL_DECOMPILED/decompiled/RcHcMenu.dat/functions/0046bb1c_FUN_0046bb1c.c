/*
 * FUN_0046bb1c at 0046bb1c
 * undefined __register FUN_0046bb1c(int * param_1, undefined * param_2)
 * Address ranges: 0046bb1c-0046bc68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x463fa4 slot 40 for TBooleanField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x463fa4 slot 40 for
   TBooleanField. Original bytes unchanged; names and types still inferred. */

void FUN_0046bb1c(int *param_1,undefined *param_2)

{
  uint uVar1;
  int iVar2;
  int *in_FS_OFFSET;
  int iStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  byte *local_24;
  int local_20;
  undefined *local_1c;
  undefined1 local_18;
  int local_14;
  undefined1 local_10;
  undefined *local_c;
  undefined *local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_20 = 0;
  local_24 = (byte *)0x0;
  local_c = (undefined *)0x0;
  local_8 = (undefined *)0x0;
  puStack_38 = &LAB_0046bc69;
  iStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_3c;
  uVar1 = FUN_00404030((int)param_2);
  if (uVar1 == 0) {
    iVar2 = FUN_00404030(param_1[0x35]);
    if (iVar2 == 0) {
      iVar2 = 0x46bb6d;
      (**(code **)(*param_1 + 0x88))(param_1,0);
    }
    else {
      iVar2 = FUN_00404030(param_1[0x36]);
      if (iVar2 == 0) {
        iVar2 = 0x46bb8d;
        (**(code **)(*param_1 + 0x88))(param_1,1);
      }
      else {
        iVar2 = 0x46bb9c;
        (**(code **)(*param_1 + 0xc0))();
      }
    }
  }
  else {
    FUN_00404238(param_1[0x35],1,uVar1,(int *)&local_8);
    iVar2 = FUN_00409870(param_2,local_8);
    if (iVar2 == 0) {
      iVar2 = 0x46bbd1;
      (**(code **)(*param_1 + 0x88))(param_1,0);
    }
    else {
      FUN_00404238(param_1[0x36],1,uVar1,(int *)&local_c);
      iVar2 = FUN_00409870(param_2,local_c);
      if (iVar2 == 0) {
        iVar2 = 0x46bc03;
        (**(code **)(*param_1 + 0x88))(param_1,1);
      }
      else {
        iVar2 = 0;
        local_18 = 0xb;
        local_1c = param_2;
        FUN_004692f8((int)param_1,&local_20);
        local_14 = local_20;
        local_10 = 0xb;
        FUN_00406a48((undefined4 *)PTR_PTR_0057249c,(int *)&local_24);
        FUN_00466e30(local_24,&local_1c,1,iVar2);
      }
    }
  }
  *in_FS_OFFSET = iVar2;
  puStack_38 = &LAB_0046bc70;
  iStack_3c = 0x46bc5b;
  FUN_00403dd4((int *)&local_24,2);
  iStack_3c = 0x46bc68;
  FUN_00403dd4((int *)&local_c,2);
  return;
}


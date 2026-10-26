/*
 * FUN_0046c870 at 0046c870
 * undefined __register FUN_0046c870(int * param_1, undefined * param_2)
 * Address ranges: 0046c870-0046c91d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464978 slot 40 for TBCDField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464978 slot 40 for
   TBCDField. Original bytes unchanged; names and types still inferred. */

void FUN_0046c870(int *param_1,undefined *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  byte *local_24;
  int local_20;
  undefined *local_1c;
  undefined1 local_18;
  int local_14;
  undefined1 local_10;
  
  puStack_30 = &stack0xfffffffc;
  local_20 = 0;
  local_24 = (byte *)0x0;
  puStack_34 = &LAB_0046c91e;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  if (param_2 == (undefined *)0x0) {
    puStack_30 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0xc0))();
  }
  else {
    pbVar1 = FUN_004041f4(param_2);
    uVar2 = FUN_0040efdc(pbVar1,(float10 *)&stack0xfffffff4,'\x01');
    if ((char)uVar2 == '\0') {
      iVar3 = 0;
      local_18 = 0xb;
      local_1c = param_2;
      FUN_004692f8((int)param_1,&local_20);
      local_14 = local_20;
      local_10 = 0xb;
      FUN_00406a48((undefined4 *)PTR_PTR_00572120,(int *)&local_24);
      FUN_00466e30(local_24,&local_1c,1,iVar3);
    }
    (**(code **)(*param_1 + 0x90))();
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0046c925;
  puStack_34 = (undefined1 *)0x46c91d;
  FUN_00403dd4((int *)&local_24,2);
  return;
}


/*
 * FUN_0046b7bc at 0046b7bc
 * undefined __register FUN_0046b7bc(int * param_1, undefined * param_2)
 * Address ranges: 0046b7bc-0046b86d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x463c40 slot 40 for TFloatField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x463c40 slot 40 for
   TFloatField. Original bytes unchanged; names and types still inferred. */

void FUN_0046b7bc(int *param_1,undefined *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  byte *local_2c;
  int local_28;
  undefined *local_24;
  undefined1 local_20;
  int local_1c;
  undefined1 local_18;
  float10 local_14;
  
  puStack_38 = &stack0xfffffffc;
  local_28 = 0;
  local_2c = (byte *)0x0;
  puStack_3c = &LAB_0046b86e;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  if (param_2 == (undefined *)0x0) {
    puStack_38 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0xc0))();
  }
  else {
    pbVar1 = FUN_004041f4(param_2);
    uVar2 = FUN_0040efdc(pbVar1,&local_14,'\0');
    if ((char)uVar2 == '\0') {
      iVar3 = 0;
      local_20 = 0xb;
      local_24 = param_2;
      FUN_004692f8((int)param_1,&local_28);
      local_1c = local_28;
      local_18 = 0xb;
      FUN_00406a48((undefined4 *)PTR_PTR_00572120,(int *)&local_2c);
      FUN_00466e30(local_2c,&local_24,1,iVar3);
    }
    (**(code **)(*param_1 + 0x98))();
  }
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0046b875;
  puStack_3c = (undefined1 *)0x46b86d;
  FUN_00403dd4((int *)&local_2c,2);
  return;
}


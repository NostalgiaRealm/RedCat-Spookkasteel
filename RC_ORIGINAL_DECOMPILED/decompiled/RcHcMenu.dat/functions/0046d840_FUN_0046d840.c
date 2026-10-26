/*
 * FUN_0046d840 at 0046d840
 * undefined __register FUN_0046d840(int * param_1, int * param_2)
 * Address ranges: 0046d840-0046d8c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464fe0 slot 22 for TObjectField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464fe0 slot 22 for
   TObjectField. Original bytes unchanged; names and types still inferred. */

void FUN_0046d840(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar3;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  _union_2683 local_18;
  undefined4 *local_8;
  
  puStack_28 = &stack0xfffffffc;
  puVar3 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_18._12_4_ = 0;
  local_18._8_4_ = 0;
  local_18.decVal.Hi32 = 0;
  local_18._0_4_ = 0;
  puStack_2c = &LAB_0046d8c2;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puVar1 = &stack0xfffffffc;
  if (param_1[0x34] == param_1[0x35]) {
    iVar2 = FUN_004687b0(param_1[0x34]);
    puVar1 = puStack_28;
    if (0 < iVar2) {
      (**(code **)(*param_1 + 0x5c))(param_1,&local_18);
      FUN_0046d6d8((VARIANTARG *)&local_18.n2,(int *)&local_8,extraout_ECX,puVar3);
      FUN_00403e04(param_2,local_8);
      goto LAB_0046d8a4;
    }
  }
  puStack_28 = puVar1;
  FUN_00469028(param_1,param_2);
LAB_0046d8a4:
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0046d8c9;
  puStack_2c = (undefined1 *)0x46d8b9;
  FUN_00405bcc((VARIANTARG *)&local_18.n2);
  puStack_2c = (undefined1 *)0x46d8c1;
  FUN_00403db0((int *)&local_8);
  return;
}


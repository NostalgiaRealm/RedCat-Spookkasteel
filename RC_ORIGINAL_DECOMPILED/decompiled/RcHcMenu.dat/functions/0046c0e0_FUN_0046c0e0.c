/*
 * FUN_0046c0e0 at 0046c0e0
 * undefined __register FUN_0046c0e0(int * param_1, int * param_2)
 * Address ranges: 0046c0e0-0046c16e;0046c176-0046c18b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464574 slot 22 for TBinaryField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464574 slot 22 for
   TBinaryField. Original bytes unchanged; names and types still inferred. */

void FUN_0046c0e0(int *param_1,int *param_2)

{
  bool bVar1;
  LONG LVar2;
  undefined4 *puVar3;
  LONG extraout_ECX;
  void *extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  _union_2683 local_14;
  
  puStack_24 = &stack0xfffffffc;
  local_14._12_4_ = 0;
  local_14._8_4_ = 0;
  local_14.decVal.Hi32 = 0;
  local_14._0_4_ = 0;
  puStack_28 = &LAB_0046c18c;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x46c108;
  (**(code **)(*param_1 + 0x44))(param_1,&local_14);
  puStack_30 = (undefined1 *)0x46c110;
  bVar1 = FUN_00405c2c((short *)&local_14);
  if (bVar1) {
    puStack_30 = (undefined1 *)0x46c11b;
    FUN_00403db0(param_2);
    *in_FS_OFFSET = uStack_2c;
    puStack_24 = &LAB_0046c193;
    puStack_28 = (undefined1 *)0x46c18b;
    FUN_00405bcc((VARIANTARG *)&local_14.n2);
    return;
  }
  puStack_30 = (undefined1 *)0x46c12a;
  LVar2 = FUN_00405d8c((int)&local_14,1,extraout_ECX);
  puStack_30 = (undefined1 *)0x46c135;
  puVar3 = FUN_00405db4((int)&local_14,extraout_EDX,extraout_ECX_00);
  puStack_34 = &LAB_0046c16f;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  FUN_00404364(param_2,LVar2 + 1U);
  FUN_00402944(puVar3,(undefined4 *)*param_2,LVar2 + 1U);
  *in_FS_OFFSET = uStack_38;
  puStack_30 = (undefined1 *)0x46c176;
  puStack_34 = (undefined1 *)0x46c16e;
  FUN_00405dd8((int)&local_14);
  return;
}


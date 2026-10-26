/*
 * FUN_0046c19c at 0046c19c
 * undefined __register FUN_0046c19c(int * param_1, undefined4 * param_2)
 * Address ranges: 0046c19c-0046c255;0046c26b-0046c280
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464574 slot 40 for TBinaryField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464574 slot 40 for
   TBinaryField. Original bytes unchanged; names and types still inferred. */

void FUN_0046c19c(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_44;
  undefined1 *puStackY_40;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  LONG local_24;
  int local_20;
  _union_2683 local_1c;
  int *local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_1c._0_4_ = 0;
  local_1c.decVal.Hi32 = 0;
  local_1c._8_4_ = 0;
  local_1c._12_4_ = 0;
  puStack_34 = &LAB_0046c281;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_8 = param_1;
  if (param_2 == (undefined4 *)0x0) {
    puStack_30 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0xc0))();
    *in_FS_OFFSET = uStack_38;
    puStack_30 = &LAB_0046c288;
    puStack_34 = (undefined1 *)0x46c280;
    FUN_00405bcc((VARIANTARG *)&local_1c.n2);
    return;
  }
  uVar1 = FUN_00404030((int)param_2);
  iVar2 = (**(code **)(*local_8 + 0x80))();
  if (iVar2 < (int)uVar1) {
    uVar1 = (**(code **)(*local_8 + 0x80))();
  }
  local_24 = 0;
  local_20 = uVar1 - 1;
  puStackY_40 = (undefined1 *)0x46c21f;
  FUN_00405cac(&local_24,1,0x11,(VARIANTARG *)&local_1c.n2);
  puVar3 = FUN_00405db4((int)&local_1c,extraout_EDX,extraout_ECX);
  puStackY_40 = &LAB_0046c256;
  uStackY_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_44;
  FUN_00402944(param_2,puVar3,uVar1);
  *in_FS_OFFSET = uStackY_44;
  puStackY_40 = (undefined1 *)0x46c255;
  FUN_00405dd8((int)&local_1c);
  return;
}


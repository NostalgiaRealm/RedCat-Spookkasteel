/*
 * FUN_00405318 at 00405318
 * undefined __register FUN_00405318(int * param_1, undefined4 * param_2)
 * Address ranges: 00405318-00405379
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00405318(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  _union_2683 *p_Var3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  _union_2683 local_14;
  
  p_Var3 = &local_14;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)p_Var3 = *param_2;
    param_2 = param_2 + 1;
    p_Var3 = (_union_2683 *)((int)p_Var3 + 4);
  }
  puStack_24 = (undefined1 *)0x405337;
  FUN_00405bd4((VARIANT *)&local_14.n2);
  puStack_28 = &LAB_0040537a;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  uVar1 = (*DAT_005733ec)(&local_14);
  if (local_14.n2.vt != 0xd) {
    thunk_FUN_00402874(uVar1);
  }
  FUN_00406ab8(param_1,(int *)local_14._8_4_);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00405381;
  puStack_28 = (undefined1 *)0x405379;
  FUN_00405bcc((VARIANTARG *)&local_14.n2);
  return;
}


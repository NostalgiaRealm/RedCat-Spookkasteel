/*
 * FUN_00405698 at 00405698
 * undefined __register FUN_00405698(short * param_1, undefined4 * param_2, undefined4 param_3)
 * Address ranges: 00405698-0040570a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00405698(short *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  _union_2683 *p_Var2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  _union_2683 local_14;
  
  p_Var2 = &local_14;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)p_Var2 = *param_2;
    param_2 = param_2 + 1;
    p_Var2 = (_union_2683 *)((int)p_Var2 + 4);
  }
  puStack_24 = (undefined1 *)0x4056bb;
  FUN_00405bd4((VARIANT *)&local_14.n2);
  puStack_28 = &LAB_0040570b;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  if (*param_1 == 0x101) {
    puStack_24 = &stack0xfffffffc;
    (*DAT_005733ec)(param_1);
  }
  if (local_14.n2.vt == 0x101) {
    (*DAT_005733ec)(&local_14);
  }
  FUN_0040571c((uint *)param_1,(uint *)&local_14,param_3);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00405712;
  puStack_28 = (undefined1 *)0x40570a;
  FUN_00405bcc((VARIANTARG *)&local_14.n2);
  return;
}


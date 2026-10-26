/*
 * FUN_00470bec at 00470bec
 * undefined __register FUN_00470bec(int param_1, int * param_2, undefined1 param_3)
 * Address ranges: 00470bec-00470c6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00470bec(int param_1,int *param_2,undefined1 param_3)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  _union_2683 local_18;
  undefined4 *local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_18._12_4_ = 0;
  local_18._8_4_ = 0;
  local_18.decVal.Hi32 = 0;
  local_18._0_4_ = 0;
  puStack_2c = &LAB_00470c6c;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  *(undefined1 *)(param_1 + 0x30) = param_3;
  FUN_004147c0(param_2,0);
  uVar1 = FUN_004147cc(param_2);
  FUN_00404364((int *)&local_8,uVar1);
  FUN_00414804(param_2,local_8,uVar1);
  FUN_004054ac((VARIANTARG *)&local_18.n2,local_8);
  FUN_00470a54(param_1,(VARIANTARG *)&local_18.n2);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00470c73;
  puStack_2c = (undefined1 *)0x470c63;
  FUN_00405bcc((VARIANTARG *)&local_18.n2);
  puStack_2c = (undefined1 *)0x470c6b;
  FUN_00403db0((int *)&local_8);
  return;
}


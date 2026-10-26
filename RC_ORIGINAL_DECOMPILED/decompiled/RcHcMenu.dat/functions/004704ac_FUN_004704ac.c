/*
 * FUN_004704ac at 004704ac
 * undefined __register FUN_004704ac(int param_1, int * param_2)
 * Address ranges: 004704ac-00470503
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004704ac(int param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  _union_2683 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14._12_4_ = 0;
  local_14._8_4_ = 0;
  local_14.decVal.Hi32 = 0;
  local_14._0_4_ = 0;
  puStack_24 = &LAB_00470504;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x5c))(param_2,&local_14);
    FUN_00470434(param_1,param_2,(VARIANTARG *)&local_14.n2);
    FUN_00403e04((int *)(param_1 + 0x2c),(undefined4 *)param_2[0xb]);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0047050b;
  puStack_24 = (undefined1 *)0x470503;
  FUN_00405bcc((VARIANTARG *)&local_14.n2);
  return;
}


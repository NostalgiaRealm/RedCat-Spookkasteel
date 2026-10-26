/*
 * FUN_0046df74 at 0046df74
 * undefined __register FUN_0046df74(int * param_1)
 * Address ranges: 0046df74-0046dfbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046df74(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  _union_2683 local_1c;
  double local_c;
  
  puStack_24 = &stack0xfffffffc;
  local_c = 0.0;
  local_1c._12_4_ = 0;
  local_1c._8_4_ = 0;
  local_1c.decVal.Hi32 = 0;
  local_1c._0_4_ = 0;
  puStack_28 = &LAB_0046dfbc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  (**(code **)(*param_1 + 0x5c))(param_1,&local_1c);
  FUN_004051ec((VARIANTARG *)&local_1c.n2);
  local_c = (double)in_ST0;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0046dfc3;
  puStack_28 = (undefined1 *)0x46dfbb;
  FUN_00405bcc((VARIANTARG *)&local_1c.n2);
  return;
}


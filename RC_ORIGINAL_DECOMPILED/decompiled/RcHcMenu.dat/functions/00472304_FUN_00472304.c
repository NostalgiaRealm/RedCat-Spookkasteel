/*
 * FUN_00472304 at 00472304
 * undefined __register FUN_00472304(undefined4 * param_1, uint param_2, VARIANTARG * param_3)
 * Address ranges: 00472304-0047238e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00472304(undefined4 *param_1,uint param_2,VARIANTARG *param_3)

{
  undefined4 *puVar1;
  void *extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_40;
  undefined1 *puStackY_3c;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  LONG local_20;
  int local_1c;
  _union_2683 local_18;
  VARIANTARG *local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_18._12_4_ = 0;
  local_18._8_4_ = 0;
  local_18.decVal.Hi32 = 0;
  local_18._0_4_ = 0;
  puStack_30 = &LAB_004723ac;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_20 = 0;
  local_1c = param_2 - 1;
  puStackY_3c = (undefined1 *)0x47234d;
  local_8 = param_3;
  FUN_00405cac(&local_20,1,0x11,(VARIANTARG *)&local_18.n2);
  FUN_004055a8(local_8,&local_18);
  puVar1 = FUN_00405db4((int)local_8,extraout_EDX,extraout_ECX);
  puStackY_3c = &LAB_0047238f;
  uStackY_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_40;
  FUN_00402944(param_1,puVar1,param_2);
  *in_FS_OFFSET = uStackY_40;
  puStackY_3c = (undefined1 *)0x47238e;
  FUN_00405dd8((int)local_8);
  return;
}


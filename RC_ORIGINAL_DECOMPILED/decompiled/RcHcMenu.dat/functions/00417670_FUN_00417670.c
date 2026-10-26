/*
 * FUN_00417670 at 00417670
 * undefined __register FUN_00417670(int param_1, undefined4 param_2, undefined4 param_3, undefined * param_4, undefined4 param_5)
 * Address ranges: 00417670-004176e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00417670(int param_1,undefined4 param_2,undefined4 param_3,undefined *param_4,
                 undefined4 param_5)

{
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint local_c;
  int *local_8;
  
  puStack_14 = (undefined1 *)0x417685;
  local_8 = (int *)FUN_00403064((int *)&PTR_FUN_00410f54,'\x01',param_3);
  puStack_18 = &LAB_004176e8;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  (*(code *)param_4)(param_5,local_8);
  FUN_00418ed0(param_1,10,extraout_ECX);
  local_c = FUN_004147cc(local_8);
  FUN_00417624(param_1,&local_c,4);
  FUN_00417624(param_1,(undefined4 *)local_8[1],local_c);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004176ef;
  puStack_18 = (undefined1 *)0x4176e7;
  FUN_00403094(local_8);
  return;
}


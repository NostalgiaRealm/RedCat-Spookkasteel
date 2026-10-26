/*
 * FUN_0043e2fc at 0043e2fc
 * undefined __register FUN_0043e2fc(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0043e2fc-0043e3a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043e2fc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_0043e3a9;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar1 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',param_3);
  param_1[0x10] = iVar1;
  if (((param_1[9] < 1) || (0x8000 < param_1[9])) ||
     (uVar3 = extraout_ECX, uVar4 = extraout_EDX, param_1[10] < 1)) {
    FUN_00406a48((undefined4 *)PTR_PTR_00572198,(int *)&local_8);
    piVar2 = FUN_0040ceec((int *)&DAT_0041071c,'\x01',local_8);
    FUN_0040382c(piVar2);
    uVar3 = extraout_ECX_00;
    uVar4 = extraout_EDX_00;
  }
  param_1[0xb] = 4;
  *(undefined1 *)((int)param_1 + 0x35) = 1;
  FUN_0043f1f4(param_1,CONCAT31((int3)((uint)uVar4 >> 8),2),uVar3);
  *(undefined1 *)((int)param_1 + 0x37) = 0;
  param_1[0xe] = 0x1fffffff;
  param_1[0xf] = 0x1fffffff;
  piVar2 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX_01);
  param_1[0x11] = (int)piVar2;
  FUN_0043e3c8((int)param_1);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0043e3b0;
  puStack_14 = (undefined1 *)0x43e3a8;
  FUN_00403db0((int *)&local_8);
  return;
}


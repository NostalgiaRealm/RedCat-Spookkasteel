/*
 * FUN_0043e620 at 0043e620
 * undefined __register FUN_0043e620(int * param_1)
 * Address ranges: 0043e620-0043e6ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043e620(int *param_1)

{
  HIMAGELIST p_Var1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_1c = &LAB_0043e6af;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  p_Var1 = ImageList_Create(param_1[10],param_1[9],
                            *(uint *)(&DAT_0056f8c4 + (uint)*(byte *)((int)param_1 + 0x35) * 4) |
                            0xfe,param_1[0xb],param_1[0xb]);
  param_1[0xc] = (int)p_Var1;
  if (p_Var1 == (HIMAGELIST)0x0) {
    FUN_00406a48((undefined4 *)PTR_PTR_00572414,(int *)&local_8);
    piVar2 = FUN_0040ceec((int *)&DAT_0041071c,'\x01',local_8);
    FUN_0040382c(piVar2);
  }
  if (param_1[0xe] != 0x1fffffff) {
    FUN_0043ebd0(param_1,param_1[0xe]);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0043e6b6;
  puStack_1c = (undefined1 *)0x43e6ae;
  FUN_00403db0((int *)&local_8);
  return;
}


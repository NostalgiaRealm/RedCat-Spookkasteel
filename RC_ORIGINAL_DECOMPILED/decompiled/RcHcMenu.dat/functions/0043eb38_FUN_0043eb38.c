/*
 * FUN_0043eb38 at 0043eb38
 * undefined __register FUN_0043eb38(int * param_1, int param_2)
 * Address ranges: 0043eb38-0043ebb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043eb38(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  HIMAGELIST himl;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_0043ebb7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar2 = FUN_0043e8ec(param_1);
  if (iVar2 <= param_2) {
    FUN_00406a48((undefined4 *)PTR_PTR_005721ac,(int *)&local_8);
    piVar3 = FUN_0040ceec((int *)&DAT_0041071c,'\x01',local_8);
    FUN_0040382c(piVar3);
  }
  bVar1 = FUN_0043e3b4((int)param_1);
  uVar4 = extraout_ECX;
  uVar5 = extraout_EDX;
  if (bVar1) {
    himl = (HIMAGELIST)FUN_0043e588(param_1);
    ImageList_Remove(himl,param_2);
    uVar4 = extraout_ECX_00;
    uVar5 = extraout_EDX_00;
  }
  FUN_00403270(param_1,uVar5,uVar4);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0043ebbe;
  puStack_18 = (undefined1 *)0x43ebb6;
  FUN_00403db0((int *)&local_8);
  return;
}


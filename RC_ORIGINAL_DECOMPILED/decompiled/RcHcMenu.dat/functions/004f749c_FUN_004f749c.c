/*
 * FUN_004f749c at 004f749c
 * undefined __register FUN_004f749c(int * param_1, int param_2)
 * Address ranges: 004f749c-004f759c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f749c(int *param_1,int param_2)

{
  int iVar1;
  int nSavedDC;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  
  iVar1 = *(int *)(param_2 + 8);
  nSavedDC = SaveDC(*(HDC *)(iVar1 + 0x18));
  FUN_0041caa8(param_1[0x7f]);
  *in_FS_OFFSET = &stack0xffffffdc;
  FUN_0041cfec((int *)param_1[0x7f],*(int *)(iVar1 + 0x18));
  FUN_0041ce68(param_1[0x7f]);
  FUN_0041c318(*(int **)(param_1[0x7f] + 0x14),0x8000000f);
  FUN_0041c434(*(int **)(param_1[0x7f] + 0x14),'\0');
  uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),(*(byte *)(iVar1 + 0x10) & 1) != 0);
  uVar3 = FUN_004f6c58(param_1[0x7c],*(int *)(iVar1 + 8));
  FUN_00403270(param_1,uVar3,iVar1 + 0x1c);
  *in_FS_OFFSET = uVar2;
  FUN_0041cfec((int *)param_1[0x7f],0);
  FUN_0041ce40(param_1[0x7f]);
  RestoreDC(*(HDC *)(iVar1 + 0x18),nSavedDC);
  return;
}


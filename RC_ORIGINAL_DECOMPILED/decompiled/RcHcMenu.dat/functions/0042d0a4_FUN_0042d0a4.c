/*
 * FUN_0042d0a4 at 0042d0a4
 * undefined __register FUN_0042d0a4(int * param_1, int param_2)
 * Address ranges: 0042d0a4-0042d15d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042d0a4(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  iVar2 = *(int *)(param_2 + 8);
  uVar1 = *(ushort *)(iVar2 + 0x10);
  FUN_0041cfec((int *)param_1[0x7e],*(int *)(iVar2 + 0x18));
  FUN_0041ce68(param_1[0x7e]);
  FUN_0041ce84(param_1[0x7e]);
  if ((-1 < *(int *)(iVar2 + 8)) && ((uVar1 & 1) != 0)) {
    FUN_0041c318(*(int **)(param_1[0x7e] + 0x14),0x8000000d);
    FUN_0041bb48(*(int **)(param_1[0x7e] + 0xc),-0x7ffffff2,extraout_ECX);
  }
  if (*(int *)(iVar2 + 8) < 0) {
    FUN_0041c9f8((int *)param_1[0x7e],(RECT *)(iVar2 + 0x1c));
  }
  else {
    (**(code **)(*param_1 + 0xb4))(param_1,*(undefined4 *)(iVar2 + 8),iVar2 + 0x1c,uVar1);
  }
  if ((uVar1 & 0x10) != 0) {
    DrawFocusRect(*(HDC *)(iVar2 + 0x18),(RECT *)(iVar2 + 0x1c));
  }
  FUN_0041cfec((int *)param_1[0x7e],0);
  return;
}


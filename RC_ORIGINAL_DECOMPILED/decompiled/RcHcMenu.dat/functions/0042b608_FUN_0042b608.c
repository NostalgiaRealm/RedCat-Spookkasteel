/*
 * FUN_0042b608 at 0042b608
 * undefined __register FUN_0042b608(int * param_1, int param_2)
 * Address ranges: 0042b608-0042b6d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042b608(int *param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  ushort uVar2;
  
  iVar1 = *(int *)(param_2 + 8);
  uVar2 = *(ushort *)(iVar1 + 0x10);
  if ((*(uint *)(iVar1 + 0x10) & 0x1000) != 0) {
    uVar2 = uVar2 | 0x1000;
  }
  if ((*(uint *)(iVar1 + 0x10) & 0x20) != 0) {
    uVar2 = uVar2 | 0x20;
  }
  FUN_0041cfec((int *)param_1[0x7d],*(int *)(iVar1 + 0x18));
  FUN_0041ce68(param_1[0x7d]);
  FUN_0041ce84(param_1[0x7d]);
  if ((-1 < *(int *)(iVar1 + 8)) && ((uVar2 & 1) != 0)) {
    FUN_0041c318(*(int **)(param_1[0x7d] + 0x14),0x8000000d);
    FUN_0041bb48(*(int **)(param_1[0x7d] + 0xc),-0x7ffffff2,extraout_ECX);
  }
  if (*(int *)(iVar1 + 8) < 0) {
    FUN_0041c9f8((int *)param_1[0x7d],(RECT *)(iVar1 + 0x1c));
  }
  else {
    (**(code **)(*param_1 + 0xb8))(param_1,*(undefined4 *)(iVar1 + 8),iVar1 + 0x1c,uVar2);
  }
  if ((uVar2 & 0x10) != 0) {
    DrawFocusRect(*(HDC *)(iVar1 + 0x18),(RECT *)(iVar1 + 0x1c));
  }
  FUN_0041cfec((int *)param_1[0x7d],0);
  return;
}


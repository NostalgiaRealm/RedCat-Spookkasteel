/*
 * FUN_0041d138 at 0041d138
 * undefined __register FUN_0041d138(int param_1)
 * Address ranges: 0041d138-0041d1b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041d138(int param_1)

{
  HGDIOBJ pvVar1;
  undefined4 uVar2;
  uint uVar3;
  COLORREF color;
  
  pvVar1 = (HGDIOBJ)FUN_0041c34c(*(int *)(param_1 + 0x14));
  UnrealizeObject(pvVar1);
  pvVar1 = (HGDIOBJ)FUN_0041c34c(*(int *)(param_1 + 0x14));
  SelectObject(*(HDC *)(param_1 + 4),pvVar1);
  uVar2 = FUN_0041c42c(*(int *)(param_1 + 0x14));
  if ((char)uVar2 == '\0') {
    uVar3 = FUN_0041c310(*(int *)(param_1 + 0x14));
    color = FUN_0041b688(uVar3);
    SetBkColor(*(HDC *)(param_1 + 4),color);
    SetBkMode(*(HDC *)(param_1 + 4),2);
    return;
  }
  uVar3 = FUN_0041c310(*(int *)(param_1 + 0x14));
  uVar3 = FUN_0041b688(uVar3);
  SetBkColor(*(HDC *)(param_1 + 4),~uVar3);
  SetBkMode(*(HDC *)(param_1 + 4),1);
  return;
}


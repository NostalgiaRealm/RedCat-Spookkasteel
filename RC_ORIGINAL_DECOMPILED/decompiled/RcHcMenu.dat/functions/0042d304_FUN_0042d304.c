/*
 * FUN_0042d304 at 0042d304
 * undefined __register FUN_0042d304(int param_1)
 * Address ranges: 0042d304-0042d35c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042d304(int param_1)

{
  int iVar1;
  HWND pHVar2;
  BOOL BVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = *(int *)(*(int *)PTR_DAT_005723fc + 0x24);
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 == 0) {
      pHVar2 = FUN_00448574();
      *(HWND *)(param_1 + 8) = pHVar2;
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
    BVar3 = OpenClipboard(*(HWND *)(param_1 + 8));
    if (BVar3 == 0) {
      piVar4 = FUN_0040cfa8((int *)&DAT_00408ac4,'\x01',(undefined4 *)PTR_PTR_005720ac);
      FUN_0040382c(piVar4);
    }
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}


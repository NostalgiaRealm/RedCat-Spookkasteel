/*
 * FUN_004518a4 at 004518a4
 * undefined __register FUN_004518a4(void)
 * Address ranges: 004518a4-00451907
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004518a4(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  HWND pHVar4;
  BOOL BVar5;
  int iVar6;
  
  iVar2 = FUN_0044f15c(DAT_005737d8);
  if (-1 < iVar2 + -1) {
    iVar6 = 0;
    do {
      piVar3 = (int *)FUN_0044f148(DAT_005737d8,iVar6);
      bVar1 = FUN_00438c84((int)piVar3);
      if (bVar1) {
        pHVar4 = (HWND)FUN_00438988(piVar3);
        BVar5 = IsWindowVisible(pHVar4);
        if (BVar5 != 0) {
          pHVar4 = (HWND)FUN_00438988(piVar3);
          BVar5 = IsWindowEnabled(pHVar4);
          if (BVar5 != 0) {
            (**(code **)(*piVar3 + 200))();
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


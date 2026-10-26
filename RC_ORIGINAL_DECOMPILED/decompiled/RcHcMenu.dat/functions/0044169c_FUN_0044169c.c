/*
 * FUN_0044169c at 0044169c
 * undefined4 __register FUN_0044169c(int param_1)
 * Address ranges: 0044169c-004416e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0044169c(int param_1)

{
  undefined4 uVar1;
  HMENU pHVar2;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar1 = FUN_0040320c(*(int **)(param_1 + 4),(int)&PTR_FUN_004404a0);
    if ((char)uVar1 == '\0') {
      pHVar2 = CreateMenu();
      *(HMENU *)(param_1 + 0x28) = pHVar2;
    }
    else {
      pHVar2 = CreatePopupMenu();
      *(HMENU *)(param_1 + 0x28) = pHVar2;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      FUN_00440834((undefined4 *)PTR_PTR_005720d0);
    }
    FUN_00441490(param_1);
  }
  return *(undefined4 *)(param_1 + 0x28);
}


/*
 * FUN_00485b68 at 00485b68
 * undefined1 __register FUN_00485b68(int param_1, int * param_2)
 * Address ranges: 00485b68-00485bd4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_00485b68(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_14;
  
  if (((*(char *)(param_1 + 0x8d) == '\x04') && (*(int *)(param_1 + 0x1e0) == 0)) &&
     (*(char *)(param_1 + 0x1b0) != '\0')) {
    local_14 = 1;
  }
  else {
    local_14 = 0;
    iVar1 = (**(code **)(*param_2 + 0x74))();
    if ((0 < iVar1) && (iVar1 = *(int *)(param_1 + 0x1e0), -1 < iVar1 + -1)) {
      iVar3 = 0;
      do {
        uVar2 = (**(code **)(*param_2 + 0x74))();
        if (uVar2 == *(ushort *)(param_1 + 400 + iVar3 * 2)) {
          return 1;
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return local_14;
}


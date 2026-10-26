/*
 * FUN_00485bd8 at 00485bd8
 * undefined1 __register FUN_00485bd8(int param_1, undefined4 * param_2, char param_3)
 * Address ranges: 00485bd8-00485c6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_00485bd8(int param_1,undefined4 *param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_13;
  
  local_13 = 0;
  bVar1 = false;
  iVar6 = param_2[2];
  if (-1 < iVar6 + -1) {
    iVar5 = 0;
    do {
      iVar2 = FUN_00412384(param_2,iVar5);
      if ((*(char *)(iVar2 + 0x34) == '\x01') || ((byte)(*(char *)(iVar2 + 0x34) - 0x17U) < 2)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) break;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if ((!(bool)(*(char *)(param_1 + 0x1b1) != param_3 & bVar1)) &&
     (iVar6 = param_2[2], iVar6 <= *(int *)(param_1 + 0x1e0))) {
    if (-1 < iVar6 + -1) {
      iVar5 = 0;
      do {
        piVar3 = (int *)FUN_00412384(param_2,iVar5);
        uVar4 = (**(code **)(*piVar3 + 0x74))();
        if (uVar4 != *(ushort *)(param_1 + 400 + iVar5 * 2)) {
          return 0;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    local_13 = 1;
  }
  return local_13;
}


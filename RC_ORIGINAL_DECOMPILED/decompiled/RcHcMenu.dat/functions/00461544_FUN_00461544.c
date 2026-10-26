/*
 * FUN_00461544 at 00461544
 * bool __register FUN_00461544(undefined * param_1)
 * Address ranges: 00461544-004615c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00461544(undefined *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  bVar6 = true;
  iVar1 = FUN_00404030((int)param_1);
  if (3 < iVar1) {
    iVar1 = -1;
    iVar2 = FUN_00404030((int)param_1);
    iVar4 = -1;
    do {
      uVar3 = FUN_00461138(param_1,iVar2);
      iVar5 = iVar4;
      if (((char)uVar3 == '\x06') && (iVar5 = iVar2, iVar1 < 0)) {
        iVar1 = iVar2;
        iVar5 = iVar4;
      }
      iVar2 = iVar2 + -1;
    } while (((0 < iVar2) && (iVar4 = FUN_00404030((int)param_1), iVar4 + -4 <= iVar2)) &&
            (iVar4 = iVar5, iVar5 < 0));
    if (iVar5 < 0) {
      iVar5 = iVar1;
    }
    iVar1 = FUN_00404030((int)param_1);
    if (iVar5 != iVar1) {
      bVar6 = param_1[iVar5] != DAT_00570604;
    }
  }
  return bVar6;
}


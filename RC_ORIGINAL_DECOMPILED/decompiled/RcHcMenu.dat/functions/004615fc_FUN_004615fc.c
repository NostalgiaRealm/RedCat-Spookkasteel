/*
 * FUN_004615fc at 004615fc
 * int __register FUN_004615fc(undefined * param_1, int param_2)
 * Address ranges: 004615fc-00461657
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004615fc(undefined *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_14;
  
  iVar1 = FUN_00404030((int)param_1);
  iVar1 = FUN_004615c4(param_1,iVar1);
  if (iVar1 < param_2) {
    iVar3 = -1;
  }
  else {
    iVar3 = 0;
    iVar1 = FUN_00404030((int)param_1);
    if (0 < iVar1) {
      iVar4 = 1;
      local_14 = param_2;
      do {
        iVar3 = iVar3 + 1;
        uVar2 = FUN_00461138(param_1,iVar4);
        if (((char)uVar2 != '\x03') && (local_14 = local_14 + -1, local_14 < 0)) {
          return iVar3;
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return iVar3;
}


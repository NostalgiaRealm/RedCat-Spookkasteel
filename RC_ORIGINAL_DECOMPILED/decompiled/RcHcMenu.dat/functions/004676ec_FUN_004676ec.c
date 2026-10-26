/*
 * FUN_004676ec at 004676ec
 * int __register FUN_004676ec(int param_1, undefined * param_2)
 * Address ranges: 004676ec-00467729
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004676ec(int param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0041300c(param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      iVar2 = FUN_00413014(param_1,iVar3);
      iVar2 = FUN_00409870(*(undefined **)(iVar2 + 0xc),param_2);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return -1;
}


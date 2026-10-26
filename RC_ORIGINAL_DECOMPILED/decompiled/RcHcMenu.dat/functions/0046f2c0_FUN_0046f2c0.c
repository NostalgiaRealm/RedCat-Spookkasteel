/*
 * FUN_0046f2c0 at 0046f2c0
 * int __register FUN_0046f2c0(int param_1, undefined * param_2)
 * Address ranges: 0046f2c0-0046f302
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0046f2c0(int param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_0041300c(param_1);
  if (-1 < iVar1 + -1) {
    iVar4 = 0;
    do {
      iVar2 = FUN_00413014(param_1,iVar4);
      iVar3 = FUN_00409870(*(undefined **)(iVar2 + 0x2c),param_2);
      if (iVar3 == 0) {
        return iVar2;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}


/*
 * FUN_0046f140 at 0046f140
 * undefined __register FUN_0046f140(int param_1, int param_2)
 * Address ranges: 0046f140-0046f190
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046f140(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = FUN_0041300c(param_2);
  if (-1 < iVar1 + -1) {
    iVar5 = 0;
    do {
      iVar2 = FUN_0046f0d0(param_2,iVar5);
      piVar3 = (int *)FUN_0046f2c0(param_1,*(undefined **)(iVar2 + 0x2c));
      if (piVar3 != (int *)0x0) {
        uVar4 = FUN_0046f0d0(param_2,iVar5);
        (**(code **)(*piVar3 + 8))(piVar3,uVar4);
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


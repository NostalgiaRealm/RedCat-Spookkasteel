/*
 * FUN_0046f1dc at 0046f1dc
 * uint __register FUN_0046f1dc(int param_1, int param_2)
 * Address ranges: 0046f1dc-0046f23c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0046f1dc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = FUN_0041300c(param_1);
  iVar2 = FUN_0041300c(param_2);
  uVar5 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == iVar2);
  if ((iVar1 == iVar2) && (iVar1 = FUN_0041300c(param_1), -1 < iVar1 + -1)) {
    iVar2 = 0;
    do {
      iVar3 = FUN_0046f0d0(param_2,iVar2);
      iVar4 = FUN_0046f0d0(param_1,iVar2);
      uVar5 = FUN_0046f8a8(iVar4,iVar3);
      if ((char)uVar5 == '\0') {
        return uVar5;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return uVar5;
}


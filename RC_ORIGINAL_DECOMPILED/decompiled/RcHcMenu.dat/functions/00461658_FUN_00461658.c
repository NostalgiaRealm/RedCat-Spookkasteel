/*
 * FUN_00461658 at 00461658
 * bool __register FUN_00461658(undefined * param_1, int param_2)
 * Address ranges: 00461658-0046167c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00461658(undefined *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  bVar3 = false;
  iVar1 = FUN_004615fc(param_1,param_2);
  if (-1 < iVar1) {
    uVar2 = FUN_00461138(param_1,iVar1);
    bVar3 = (byte)((char)uVar2 - 1U) < 2;
  }
  return bVar3;
}


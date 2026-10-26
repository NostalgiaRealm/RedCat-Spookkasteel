/*
 * FUN_00440ae4 at 00440ae4
 * undefined4 __register FUN_00440ae4(int * param_1, undefined * param_2)
 * Address ranges: 00440ae4-00440b3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00440ae4(int *param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  PCNZCH pCVar3;
  PCNZCH pCVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  iVar1 = FUN_00404030(*param_1);
  iVar2 = FUN_00404030((int)param_2);
  if (iVar2 <= iVar1) {
    iVar1 = FUN_00404030((int)param_2);
    pCVar3 = FUN_004041f4(param_2);
    pCVar4 = FUN_004041f4((undefined *)*param_1);
    iVar1 = FUN_00409904(pCVar4,pCVar3,iVar1);
    if (iVar1 == 0) {
      uVar5 = 1;
      iVar1 = FUN_00404030((int)param_2);
      FUN_00404278(param_1,1,iVar1);
    }
  }
  return uVar5;
}


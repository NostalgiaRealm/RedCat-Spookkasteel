/*
 * FUN_0048bfb0 at 0048bfb0
 * undefined4 __register FUN_0048bfb0(int * param_1, int * param_2)
 * Address ranges: 0048bfb0-0048bfea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0048bfb0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)FUN_00403224(param_2,(int)&PTR_FUN_0048b6c0);
  iVar2 = (**(code **)(*piVar1 + 0x70))();
  iVar3 = (**(code **)(*param_1 + 0x70))();
  uVar4 = FUN_0045a4b8(iVar3,iVar2);
  return uVar4;
}


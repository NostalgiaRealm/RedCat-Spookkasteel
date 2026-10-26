/*
 * FUN_00505310 at 00505310
 * undefined4 __register FUN_00505310(int * param_1, int * param_2)
 * Address ranges: 00505310-0050534a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00505310(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)FUN_00403224(param_2,(int)&PTR_FUN_00504a1c);
  iVar2 = (**(code **)(*piVar1 + 0x70))();
  iVar3 = (**(code **)(*param_1 + 0x70))();
  uVar4 = FUN_0045a4b8(iVar3,iVar2);
  return uVar4;
}


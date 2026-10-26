/*
 * FUN_0048f7bc at 0048f7bc
 * undefined __register FUN_0048f7bc(int * param_1, byte * param_2, undefined1 param_3)
 * Address ranges: 0048f7bc-0048f7f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048f7bc(int *param_1,byte *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = FUN_0048eaf4(param_1,param_2);
  piVar2 = (int *)(*(code *)**(undefined4 **)param_1[8])((undefined4 *)param_1[8],uVar1);
  iVar3 = FUN_00403224(piVar2,(int)&PTR_FUN_0048e468);
  *(undefined1 *)(iVar3 + 4) = param_3;
  return;
}


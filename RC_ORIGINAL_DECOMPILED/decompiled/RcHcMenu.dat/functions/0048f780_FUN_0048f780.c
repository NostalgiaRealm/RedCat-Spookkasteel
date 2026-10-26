/*
 * FUN_0048f780 at 0048f780
 * undefined1 __register FUN_0048f780(int * param_1, byte * param_2)
 * Address ranges: 0048f780-0048f7ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_0048f780(int *param_1,byte *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = FUN_0048eaf4(param_1,param_2);
  piVar2 = (int *)(*(code *)**(undefined4 **)param_1[8])((undefined4 *)param_1[8],uVar1);
  iVar3 = FUN_00403224(piVar2,(int)&PTR_FUN_0048e468);
  return *(undefined1 *)(iVar3 + 4);
}


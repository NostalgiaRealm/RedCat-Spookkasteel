/*
 * FUN_0042cbd8 at 0042cbd8
 * undefined __register FUN_0042cbd8(int * param_1)
 * Address ranges: 0042cbd8-0042cc2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042cbd8(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  
  iVar1 = (**(code **)(*(int *)param_1[0x7c] + 0x14))();
  if (0 < iVar1) {
    piVar2 = (int *)FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX);
    param_1[0x84] = (int)piVar2;
    (**(code **)(*piVar2 + 8))(piVar2,param_1[0x7c]);
    iVar1 = FUN_0042c8dc(param_1);
    param_1[0x85] = iVar1;
    iVar1 = FUN_0042c73c(param_1);
    param_1[0x86] = iVar1;
  }
  FUN_00435c00(param_1);
  return;
}


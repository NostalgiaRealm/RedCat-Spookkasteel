/*
 * FUN_004f8fe0 at 004f8fe0
 * int __register FUN_004f8fe0(undefined4 * param_1)
 * Address ranges: 004f8fe0-004f9043
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004f8fe0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  
  piVar1 = FUN_00495828(param_1);
  iVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_004f8e6c);
  *(undefined4 *)(iVar2 + 0x30) = param_1[0xc];
  if (param_1[0xd] != 0) {
    uVar3 = FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX);
    *(undefined4 *)(iVar2 + 0x34) = uVar3;
    (**(code **)(**(int **)(iVar2 + 0x34) + 8))(*(int **)(iVar2 + 0x34),param_1[0xd]);
  }
  return iVar2;
}


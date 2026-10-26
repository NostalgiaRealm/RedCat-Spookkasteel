/*
 * FUN_0041efd0 at 0041efd0
 * undefined __register FUN_0041efd0(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 0041efd0-0041f046;0041f05e-0041f092
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041efd0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x41efec;
  iVar1 = FUN_0041ed24(DAT_0056f644,(short)param_2);
  if (iVar1 == 0) {
    puStack_1c = (undefined1 *)0x41effc;
    FUN_0041d22c((undefined4 *)PTR_PTR_00572410);
  }
  puStack_1c = (undefined1 *)0x41f003;
  piVar2 = (int *)(**(code **)(iVar1 + 0xc))(iVar1,1);
  puStack_20 = &LAB_0041f047;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  piVar2[5] = (int)param_1;
  puStack_1c = &stack0xfffffffc;
  iVar1 = FUN_00403288(param_1,CONCAT22(extraout_var,0xfffc));
  piVar2[4] = iVar1;
  (**(code **)(*piVar2 + 0x58))(piVar2,param_2,param_3);
  *in_FS_OFFSET = param_4;
  puStack_20 = (undefined1 *)0x41f066;
  FUN_00403094((int *)param_1[1]);
  param_1[1] = (int)piVar2;
  piVar2[3] = (int)param_1;
  puStack_20 = (undefined1 *)0x41f07a;
  iVar1 = FUN_00403288(param_1,CONCAT22(extraout_var_00,0xfffd));
  piVar2[2] = iVar1;
  puStack_20 = (undefined1 *)0x41f08a;
  FUN_00403270(param_1,param_1,extraout_ECX);
  return;
}


/*
 * FUN_0041ee8c at 0041ee8c
 * undefined __register FUN_0041ee8c(int * param_1, int param_2)
 * Address ranges: 0041ee8c-0041eeed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041ee8c(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  
  piVar1 = (int *)param_1[1];
  uVar2 = FUN_0040320c(piVar1,param_2);
  if ((char)uVar2 == '\0') {
    FUN_00403094(piVar1);
    param_1[1] = 0;
    iVar3 = (**(code **)(param_2 + 0xc))(param_2,1);
    param_1[1] = iVar3;
    *(int **)(iVar3 + 0xc) = param_1;
    uVar2 = FUN_00403288(param_1,CONCAT22(extraout_var,0xfffd));
    *(undefined4 *)(iVar3 + 8) = uVar2;
    *(int **)(iVar3 + 0x14) = param_1;
    uVar2 = FUN_00403288(param_1,CONCAT22(extraout_var_00,0xfffc));
    *(undefined4 *)(iVar3 + 0x10) = uVar2;
    FUN_00403270(param_1,param_1,extraout_ECX);
  }
  return;
}


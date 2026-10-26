/*
 * FUN_0049a5b8 at 0049a5b8
 * undefined __register FUN_0049a5b8(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 0049a5b8-0049a64c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049a5b8(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined *puVar6;
  
  uVar1 = FUN_0040320c(param_1,(int)&PTR_FUN_0041acd8);
  if ((char)uVar1 != '\0') {
    FUN_0049a370(param_1,extraout_EDX,extraout_ECX,param_4);
    return;
  }
  puVar6 = (undefined *)0x18;
  iVar2 = (**(code **)(*param_1 + 0x20))();
  piVar3 = (int *)(**(code **)(*param_1 + 0x2c))();
  FUN_0049b884(*(int **)(param_4 + -4),piVar3,iVar2,puVar6);
  puVar4 = (undefined4 *)FUN_0049ae0c(*(int **)(param_4 + -4),extraout_EDX_00,extraout_ECX_00);
  FUN_00402cfc(puVar4,*(uint *)(*(int *)(param_4 + -4) + 0x7c),0);
  piVar3 = param_1;
  piVar5 = (int *)FUN_0049ac74(*(int *)(param_4 + -4),extraout_EDX_01,extraout_ECX_01);
  FUN_0041c8d0(piVar5,0,0,piVar3);
  uVar1 = (**(code **)(*param_1 + 0x28))();
  (**(code **)(**(int **)(param_4 + -4) + 0x3c))(*(int **)(param_4 + -4),uVar1);
  return;
}


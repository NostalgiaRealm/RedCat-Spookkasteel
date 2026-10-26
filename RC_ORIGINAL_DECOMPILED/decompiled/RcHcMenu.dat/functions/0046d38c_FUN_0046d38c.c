/*
 * FUN_0046d38c at 0046d38c
 * undefined __register FUN_0046d38c(undefined4 param_1, int * param_2)
 * Address ranges: 0046d38c-0046d3d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046d38c(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  FUN_00468e1c(param_1,param_2);
  puVar3 = &LAB_0046d328;
  puVar2 = &LAB_0046d344;
  uVar4 = param_1;
  uVar1 = FUN_0046d354();
  (**(code **)(*param_2 + 4))(param_2,"UnNamed",uVar1,puVar2,param_1,puVar3,uVar4);
  return;
}


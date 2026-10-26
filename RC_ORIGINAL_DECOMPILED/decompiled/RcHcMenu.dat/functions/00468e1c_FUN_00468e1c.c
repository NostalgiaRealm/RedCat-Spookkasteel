/*
 * FUN_00468e1c at 00468e1c
 * undefined __register FUN_00468e1c(undefined4 param_1, int * param_2)
 * Address ranges: 00468e1c-00468ea5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00468e1c(undefined4 param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar5 = &LAB_004695fc;
  puVar4 = &LAB_0046a184;
  uVar2 = param_1;
  uVar3 = param_1;
  bVar1 = FUN_00468d54();
  (**(code **)(*param_2 + 4))(param_2,"AttributeSet",bVar1,puVar4,uVar2,puVar5,uVar3);
  puVar5 = &LAB_0046964c;
  puVar4 = &LAB_0046a190;
  uVar2 = param_1;
  uVar3 = param_1;
  bVar1 = FUN_00468d94();
  (**(code **)(*param_2 + 4))(param_2,"Calculated",bVar1,puVar4,uVar2,puVar5,uVar3);
  puVar5 = &LAB_00469664;
  puVar4 = &LAB_0046a19c;
  uVar2 = param_1;
  bVar1 = FUN_00468dd8();
  (**(code **)(*param_2 + 4))(param_2,"Lookup",bVar1,puVar4,param_1,puVar5,uVar2);
  return;
}


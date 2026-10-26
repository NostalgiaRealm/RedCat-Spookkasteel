/*
 * FUN_0041f3dc at 0041f3dc
 * undefined __register FUN_0041f3dc(undefined4 param_1, int * param_2)
 * Address ranges: 0041f3dc-0041f415
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041f3dc(undefined4 param_1,int *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  puVar3 = &LAB_0041f1ec;
  puVar2 = &LAB_0041f304;
  uVar4 = param_1;
  bVar1 = FUN_0041f360();
  (**(code **)(*param_2 + 8))(param_2,&DAT_0041f420,bVar1,puVar2,param_1,puVar3,uVar4);
  return;
}


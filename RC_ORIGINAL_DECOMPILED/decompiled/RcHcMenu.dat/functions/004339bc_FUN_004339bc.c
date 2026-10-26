/*
 * FUN_004339bc at 004339bc
 * undefined __register FUN_004339bc(undefined4 param_1, int * param_2)
 * Address ranges: 004339bc-004339f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004339bc(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  puVar3 = &LAB_0043396c;
  puVar2 = &LAB_00433980;
  uVar4 = param_1;
  uVar1 = FUN_0043398c();
  (**(code **)(*param_2 + 4))(param_2,"IsControl",uVar1,puVar2,param_1,puVar3,uVar4);
  return;
}


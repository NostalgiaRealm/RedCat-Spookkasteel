/*
 * FUN_0041e58c at 0041e58c
 * undefined __register FUN_0041e58c(int * param_1, int * param_2)
 * Address ranges: 0041e58c-0041e5c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041e58c(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = *(undefined4 *)(*param_1 + 0x30);
  uVar2 = *(undefined4 *)(*param_1 + 0x44);
  piVar4 = param_1;
  uVar1 = FUN_0041e534();
  (**(code **)(*param_2 + 8))(param_2,&DAT_0041e5d0,uVar1,uVar2,param_1,uVar3,piVar4);
  return;
}


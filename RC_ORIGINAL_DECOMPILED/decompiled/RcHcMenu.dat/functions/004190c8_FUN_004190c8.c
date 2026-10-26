/*
 * FUN_004190c8 at 004190c8
 * undefined __register FUN_004190c8(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 004190c8-0041911c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004190c8(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_00403270(param_2,param_1,param_3);
  (**(code **)(*param_1 + 0x20))(param_1,param_2,0,param_2[2]);
  FUN_00419074((int)param_1,(int)param_2,extraout_ECX);
  FUN_004195e4((int)param_2,'\x01');
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
    FUN_00419594((int)param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),1),'\x01');
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2,0);
  return;
}


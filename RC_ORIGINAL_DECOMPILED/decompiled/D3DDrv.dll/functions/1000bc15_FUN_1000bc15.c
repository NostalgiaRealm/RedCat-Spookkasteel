/*
 * FUN_1000bc15 at 1000bc15
 * int * __cdecl FUN_1000bc15(undefined4 param_1, undefined4 param_2, int * param_3, uint * param_4)
 * Address ranges: 1000bc15-1000bc70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_1000bc15(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined4 in_stack_ffffffbc;
  undefined2 uVar4;
  short local_2c;
  char local_2a;
  uint local_28 [6];
  uint local_10;
  uint uStack_c;
  undefined2 uStack_8;
  
  uVar4 = (undefined2)((uint)in_stack_ffffffbc >> 0x10);
  FUN_1000bc71(&local_10,&param_1);
  iVar3 = FUN_1000f218(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,0,&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_1000bd30(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}


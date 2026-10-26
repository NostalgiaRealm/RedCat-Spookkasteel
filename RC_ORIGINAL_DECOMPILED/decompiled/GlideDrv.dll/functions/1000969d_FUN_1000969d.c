/*
 * FUN_1000969d at 1000969d
 * int * __cdecl FUN_1000969d(undefined4 param_1, undefined4 param_2, int * param_3, uint * param_4)
 * Address ranges: 1000969d-100096f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_1000969d(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

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
  FUN_100096f9(&local_10,&param_1);
  iVar3 = FUN_1000ac71(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,0,&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_100097b0(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}


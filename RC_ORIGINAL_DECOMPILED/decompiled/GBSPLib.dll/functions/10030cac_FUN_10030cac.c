/*
 * FUN_10030cac at 10030cac
 * undefined FUN_10030cac(void)
 * Address ranges: 10030cac-10030d07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10030cac(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short local_2c;
  char local_2a;
  undefined1 local_28 [24];
  undefined4 local_10;
  undefined4 uStack_c;
  undefined2 uStack_8;
  
  FUN_10030d08(&local_10,&param_1);
  iVar3 = FUN_10032922(local_10,uStack_c,uStack_8,0x11,0,&local_2c);
  iVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_10030dc0(param_4,local_28);
  piVar1[3] = iVar2;
  return piVar1;
}


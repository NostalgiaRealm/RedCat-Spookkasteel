/*
 * FUN_00455108 at 00455108
 * undefined __register FUN_00455108(undefined4 * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 00455108-004551f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00455108(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  LONG local_24;
  LONG local_20;
  POINT local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = *(int **)(*(int *)(param_4 + -4) + 0x120);
  FUN_0041c034((int *)piVar1[4],*(undefined4 *)(param_4 + -8));
  FUN_0041160c(*param_1,param_1[3],&local_24);
  local_1c.x = local_24;
  local_1c.y = local_20;
  FUN_0041160c(*param_1,param_1[1],&local_2c);
  local_14 = local_2c;
  local_10 = local_28;
  FUN_0041160c(param_1[2],param_1[1],&local_34);
  local_c = local_34;
  local_8 = local_30;
  FUN_0041cafc(piVar1,&local_1c,2);
  FUN_0041c034((int *)piVar1[4],*(undefined4 *)(param_4 + -0xc));
  FUN_0041160c(param_1[2],param_1[1],&local_24);
  local_1c.x = local_24;
  local_1c.y = local_20;
  FUN_0041160c(param_1[2],param_1[3],&local_2c);
  local_14 = local_2c;
  local_10 = local_28;
  FUN_0041160c(*param_1,param_1[3],&local_34);
  local_c = local_34;
  local_8 = local_30;
  FUN_0041cafc(piVar1,&local_1c,2);
  return;
}


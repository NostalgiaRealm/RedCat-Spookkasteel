/*
 * FUN_005c9e70 at 005c9e70
 * undefined FUN_005c9e70(void)
 * Address ranges: 005c9e70-005ca025
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_005c9e70(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 *param_11)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = param_11;
  iVar2 = param_1;
  DAT_006cc58c = param_6;
  DAT_006cc590 = *(int *)(param_1 + 0x18) + 200;
  param_6 = 0;
  param_1 = 0;
  *param_11 = 0;
  param_11[1] = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    DAT_00720828 = DAT_00720828 + 1;
    iVar2 = FUN_005ca030(iVar2,param_4,param_5,param_7,&local_20,&local_14,&param_6,&param_1,
                         &param_10,param_8,param_9,param_10);
    if (iVar2 != 0) {
      puVar1[3] = local_20;
      puVar1[4] = local_1c;
      puVar1[5] = local_18;
      puVar1[7] = local_14;
      puVar1[8] = local_10;
      puVar1[10] = local_8;
      puVar1[9] = local_c;
      *puVar1 = param_6;
      puVar1[1] = param_1;
      puVar1[2] = param_10;
      puVar1[6] = DAT_006cc4d0;
      return 1;
    }
  }
  else {
    DAT_00720830 = DAT_00720830 + 1;
    iVar2 = FUN_005cae80(iVar2,param_2,param_3,param_4,param_5,param_7,&local_20,&local_14,&param_6,
                         &param_1,&param_10,param_8,param_9,param_10);
    if (iVar2 != 0) {
      puVar1[3] = local_20;
      puVar1[4] = local_1c;
      puVar1[5] = local_18;
      puVar1[7] = local_14;
      puVar1[8] = local_10;
      puVar1[10] = local_8;
      puVar1[9] = local_c;
      *puVar1 = param_6;
      puVar1[1] = param_1;
      puVar1[2] = param_10;
      puVar1[6] = DAT_006cc4d0;
      return 1;
    }
  }
  return 0;
}


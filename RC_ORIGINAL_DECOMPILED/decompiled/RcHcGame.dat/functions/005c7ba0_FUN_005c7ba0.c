/*
 * FUN_005c7ba0 at 005c7ba0
 * undefined FUN_005c7ba0(void)
 * Address ranges: 005c7ba0-005c7d1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c7ba0(undefined4 param_1,int param_2,undefined4 param_3,float param_4,undefined4 param_5
                 ,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  int iVar1;
  float10 fVar2;
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74 [3];
  float local_68 [2];
  float local_60;
  undefined1 local_2c [44];
  
  local_88 = *(undefined4 *)(param_2 + 0x24);
  local_84 = *(undefined4 *)(param_2 + 0x28);
  local_80 = *(undefined4 *)(param_2 + 0x2c);
  FUN_005c94b0();
  FUN_005b3470(local_68);
  iVar1 = FUN_005b9be0(param_1,&local_88,&local_78);
  if (iVar1 != 0) {
    iVar1 = FUN_005b9be0(param_1,param_3,&local_7c);
    if (iVar1 != 0) {
      iVar1 = FUN_005b9c40(param_1,local_78,local_7c,0);
      if (iVar1 == 0) {
        local_94 = 0;
        local_74[0] = 0;
      }
      else {
        FUN_005b2fe0(local_74);
        fVar2 = (float10)FUN_005b2fd0();
        local_98 = (float)fVar2;
        iVar1 = FUN_005c9e70(param_1,0,0,&local_88,param_3,0x43,2,0,0,0,local_2c);
        if (iVar1 != 0) {
          local_98 = local_98 * 1.5;
        }
        FUN_005c7d20(&local_94,local_98,param_4,_DAT_006a99f0 * param_4);
      }
      fVar2 = (float10)fpatan((float10)local_68[0],(float10)local_60);
      FUN_005c7d80(&local_94,(float)fVar2);
      FUN_005c7da0(&local_94,param_5);
      *param_6 = local_94;
      *param_7 = local_90;
      *param_8 = local_8c;
    }
  }
  return;
}


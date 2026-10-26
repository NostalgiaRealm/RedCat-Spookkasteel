/*
 * FUN_0049d020 at 0049d020
 * undefined FUN_0049d020(void)
 * Address ranges: 0049d020-0049d20e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float * __thiscall FUN_0049d020(int param_1,float *param_2,float *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined8 local_a0;
  undefined1 local_85;
  undefined1 *local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined1 local_68 [4];
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_38 [12];
  float local_2c;
  float local_28;
  float local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ca40;
  local_c = ExceptionList;
  iVar2 = DAT_006b915c;
  ExceptionList = &local_c;
  if (DAT_006b915c == 0) {
    local_a0 = (double)CONCAT44(0x49d04f,(undefined4)local_a0);
    ExceptionList = &local_c;
    iVar2 = FUN_004bc480();
  }
  if (*(float *)(iVar2 + 0x478) == 0.0) {
    local_a0 = (double)CONCAT44(&local_85,iVar2 + 0x42c);
    fVar4 = (float10)FUN_005ad390();
    *(float *)(iVar2 + 0x478) = (float)fVar4;
  }
  else {
    fVar4 = (float10)*(float *)(iVar2 + 0x478);
  }
  local_74 = *param_3;
  local_80 = *param_3;
  local_70 = param_3[1] + 1.0;
  local_6c = param_3[2];
  local_78 = param_3[2];
  local_84 = (undefined1 *)&local_a0;
  local_a0 = (double)CONCAT44(param_1 + 0x11c,param_1 + 0x11c);
  local_7c = (float)((float10)param_3[1] - fVar4 * (float10)100.0);
  FUN_004042e0();
  FUN_005545f0();
  local_4 = 0;
  local_84 = (undefined1 *)
             (CONCAT31(local_84._1_3_,(char)(*(uint *)(param_1 + 0x14c) >> 3)) & 0xffffff01);
  local_a0 = 2.39011667160391e-317;
  FUN_0049df30();
  local_a0 = (double)CONCAT44(local_38,param_4);
  cVar1 = FUN_00554ab0(&local_74,&local_80);
  local_a0 = (double)CONCAT44(local_84,0x49d140);
  FUN_0049df30();
  if (cVar1 == '\0') {
    local_a0 = (double)param_3[2];
    uVar3 = FUN_005ae390(local_68,s_Actor_can_t_find_the_floor_near___00694d10,(double)*param_3,
                         (double)param_3[1]);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_00694c70,0x299,uVar3);
    if (local_64 != 0) {
      cVar1 = *(char *)(local_64 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        local_a0 = (double)CONCAT44((char *)(local_64 + -1),0x49d1b6);
        FUN_005fe5f0();
      }
      else {
        *(char *)(local_64 + -1) = cVar1 + -1;
      }
    }
    local_2c = *param_3;
    local_28 = param_3[1];
    local_24 = param_3[2];
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
  }
  local_4 = 0xffffffff;
  *param_2 = local_2c;
  param_2[1] = local_28;
  param_2[2] = local_24;
  local_a0 = (double)CONCAT44(0x49d1f2,(undefined4)local_a0);
  FUN_00554630();
  ExceptionList = local_c;
  return param_2;
}


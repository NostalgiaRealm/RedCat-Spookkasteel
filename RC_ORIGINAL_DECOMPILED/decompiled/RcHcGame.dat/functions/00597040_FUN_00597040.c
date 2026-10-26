/*
 * FUN_00597040 at 00597040
 * undefined FUN_00597040(void)
 * Address ranges: 00597040-0059713e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_00597040(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643f20;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00596e90(param_2);
  param_1[6] = param_3;
  uVar3 = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[8] = 0xffffffff;
  param_1[9] = 0x3f800000;
  *(undefined1 *)(param_1 + 10) = 1;
  local_4 = 0;
  *param_1 = &PTR_FUN_00650028;
  if ((param_4 != -1) && (param_4 < 0)) {
    pcVar4 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    local_1c[0] = (undefined1)param_2;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar3 - 1);
    local_4 = CONCAT31(local_4._1_3_,2);
    pcVar2 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                  s___AdamSource_AdamLifeTime_h_0068d4c8,0x56,local_1c);
    (*pcVar2)();
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
  }
  param_1[7] = param_4;
  param_1[8] = 0xffffffff;
  param_1[9] = 0x3f800000;
  *(undefined1 *)(param_1 + 10) = 1;
  ExceptionList = local_c;
  return param_1;
}


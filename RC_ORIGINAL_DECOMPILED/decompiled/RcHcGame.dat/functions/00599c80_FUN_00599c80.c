/*
 * FUN_00599c80 at 00599c80
 * undefined FUN_00599c80(void)
 * Address ranges: 00599c80-00599e04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_00599c80(int param_1,undefined4 *param_2,undefined4 param_3,char param_4,float param_5,
            undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 local_28;
  float local_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064436f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059b1d0(&DAT_00650084);
  local_4 = 1;
  local_24 = 99999.9;
  uVar2 = FUN_00597fb0();
  fVar6 = (float10)FUN_005b1600(param_3,uVar2);
  puVar5 = (undefined4 *)(param_1 + 0x34);
  iVar4 = 8;
  do {
    cVar1 = FUN_0059b1f0();
    if (cVar1 != '\0') {
      FUN_0059df90(*puVar5);
      uVar2 = FUN_00597a00();
      cVar1 = FUN_00599e10(param_6,uVar2);
      if (cVar1 != '\0') {
        puVar3 = (undefined4 *)FUN_00597fb0();
        local_18 = *puVar3;
        local_14 = puVar3[1];
        local_10 = puVar3[2];
        fVar7 = (float10)FUN_005b1600(param_3,&local_18);
        fVar7 = fVar7 - (float10)(float)fVar6;
        if ((fVar7 < (float10)-3.1415927) || ((float10)0.0 <= fVar7)) {
          if ((fVar7 < (float10)3.1415927) || ((float10)6.2831855 <= fVar7)) {
            cVar1 = '\0';
          }
          else {
            cVar1 = '\x01';
          }
        }
        else {
          cVar1 = '\x01';
        }
        if (cVar1 == param_4) {
          fVar7 = (float10)FUN_005b30a0();
          if (ABS(fVar7 - (float10)param_5) < (float10)local_24) {
            local_24 = (float)ABS(fVar7 - (float10)param_5);
            FUN_0059b1d0(puVar5);
          }
        }
      }
    }
    puVar5 = puVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *param_2 = local_28;
  local_4 = local_4 & 0xffffff00;
  FUN_005630e0();
  ExceptionList = local_c;
  return param_2;
}


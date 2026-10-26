/*
 * FUN_00607d31 at 00607d31
 * undefined FUN_00607d31(void)
 * Address ranges: 00607d31-00607e45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_00607d31(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,uint *param_8,int param_9)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *local_c;
  int *piStack_8;
  
  iVar2 = param_9;
  puVar1 = param_8;
  local_c = param_1;
  piStack_8 = param_1;
  puVar4 = (undefined4 *)
           (**(code **)(*param_1 + 0x14))
                     (&local_c,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  param_3 = *puVar4;
  param_4 = puVar4[1];
  if (*puVar1 == 0) {
    if ((char)param_4 == '\0') {
      Peek();
    }
    if (param_4._1_1_ != ' ') goto LAB_00607da3;
    FUN_0060045f();
    uVar5 = FUN_00608fff(&param_3,&param_5,1,0x1f,iVar2 + 0xc);
    *puVar1 = *puVar1 | uVar5;
  }
  else {
LAB_00607da3:
    *puVar1 = *puVar1 | 2;
  }
  if (*puVar1 == 0) {
    if ((char)param_4 == '\0') {
      Peek();
    }
    if (param_4._1_1_ == ',') {
      FUN_0060045f();
      cVar3 = FUN_00600aa5(&param_5);
      if (cVar3 == '\0') {
        if ((char)param_4 == '\0') {
          Peek();
        }
        if (param_4._1_1_ == ' ') {
          FUN_0060045f();
          puVar4 = (undefined4 *)
                   (**(code **)(*param_1 + 0x18))
                             (&local_c,param_3,param_4,param_5,param_6,param_7,puVar1,iVar2);
          param_3 = *puVar4;
          param_4 = puVar4[1];
          goto LAB_00607e1e;
        }
      }
    }
  }
  *puVar1 = *puVar1 | 2;
LAB_00607e1e:
  cVar3 = FUN_00600aa5(&param_5);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}


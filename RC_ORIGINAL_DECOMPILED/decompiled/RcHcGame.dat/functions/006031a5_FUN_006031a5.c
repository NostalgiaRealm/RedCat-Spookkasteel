/*
 * FUN_006031a5 at 006031a5
 * undefined FUN_006031a5(void)
 * Address ranges: 006031a5-006032d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_006031a5(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,uint *param_8,int param_9)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *local_c;
  int *piStack_8;
  
  iVar2 = param_9;
  puVar1 = param_8;
  local_c = param_1;
  piStack_8 = param_1;
  puVar5 = (undefined4 *)
           (**(code **)(*param_1 + 0x14))
                     (&local_c,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  param_3 = *puVar5;
  param_4 = puVar5[1];
  if (*puVar1 == 0) {
    if ((char)param_4 == '\0') {
      Peek();
    }
    sVar4 = FUN_0060a03a(0x20);
    if (param_4._2_2_ != sVar4) goto LAB_0060321f;
    FUN_00605560();
    uVar6 = FUN_006053fb(&param_3,&param_5,1,0x1f,iVar2 + 0xc);
    *puVar1 = *puVar1 | uVar6;
  }
  else {
LAB_0060321f:
    *puVar1 = *puVar1 | 2;
  }
  if (*puVar1 == 0) {
    if ((char)param_4 == '\0') {
      Peek();
    }
    sVar4 = FUN_0060a03a(0x2c);
    if (param_4._2_2_ == sVar4) {
      FUN_00605560();
      cVar3 = FUN_006069c8(&param_5);
      if (cVar3 == '\0') {
        if ((char)param_4 == '\0') {
          Peek();
        }
        sVar4 = FUN_0060a03a(0x20);
        if (param_4._2_2_ == sVar4) {
          FUN_00605560();
          puVar5 = (undefined4 *)
                   (**(code **)(*param_1 + 0x18))
                             (&local_c,param_3,param_4,param_5,param_6,param_7,puVar1,iVar2);
          param_3 = *puVar5;
          param_4 = puVar5[1];
          goto LAB_006032ae;
        }
      }
    }
  }
  *puVar1 = *puVar1 | 2;
LAB_006032ae:
  cVar3 = FUN_006069c8(&param_5);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}


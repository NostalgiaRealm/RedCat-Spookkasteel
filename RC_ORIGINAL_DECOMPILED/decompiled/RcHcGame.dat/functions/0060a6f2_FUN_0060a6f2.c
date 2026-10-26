/*
 * FUN_0060a6f2 at 0060a6f2
 * undefined FUN_0060a6f2(void)
 * Address ranges: 0060a6f2-0060a7d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0060a6f2(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *local_40;
  undefined1 local_3c [12];
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00651b78;
  puStack_10 = &LAB_006106d0;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffa4;
  if (param_1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    local_8 = 0;
    ExceptionList = &local_14;
    iVar3 = FUN_0060a855(param_1);
    local_28 = *(int *)(*param_1 + -4);
    local_2c = (int)param_1 + (-iVar3 - param_2);
    uVar1 = *(uint *)(*(int *)(local_28 + 0x10) + 4);
    local_30 = iVar3;
    if ((uVar1 & 1) == 0) {
      local_20 = FUN_0060a86f(iVar3,local_28,param_3,local_2c,param_4);
    }
    else if ((uVar1 & 2) == 0) {
      local_20 = FUN_0060a8c9();
    }
    else {
      local_20 = FUN_0060a9c2(iVar3,local_28,param_3,local_2c,param_4);
    }
    if (local_20 == 0) {
      iVar2 = 0;
      local_24 = 0;
      if (param_5 != 0) {
        local_40 = "Bad dynamic_cast!";
        FUN_0060a809(&local_40);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_3c,&DAT_0068a6d8);
      }
    }
    else {
      iVar2 = FUN_0060aafa(iVar3,local_20 + 8);
      iVar2 = iVar2 + iVar3;
    }
  }
  ExceptionList = local_14;
  return iVar2;
}


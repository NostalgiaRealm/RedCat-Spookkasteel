/*
 * FUN_005eaf50 at 005eaf50
 * undefined FUN_005eaf50(void)
 * Address ranges: 005eaf50-005eb0bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005eaf50(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646ee8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0045da10(local_1c);
  local_4 = 0;
  iVar3 = *(int *)(*(int *)(param_2 + 4) + 0x28);
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  iVar2 = *(int *)(*(int *)(param_2 + 4) + 0x40);
  if (iVar2 < 1) {
    FUN_005e2da0(&DAT_006b3f70);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  else {
    if (local_14 < iVar3 + iVar2) {
      local_2c[0] = (undefined1)param_1;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      FUN_0040cc00(local_1c,iVar3,local_14 - iVar3);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_005e2be0(local_2c);
      if (local_28 != 0) {
        cVar1 = *(char *)(local_28 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(local_28 + -1));
        }
        else {
          *(char *)(local_28 + -1) = cVar1 + -1;
        }
      }
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
    }
    else {
      local_2c[0] = (undefined1)param_1;
      FUN_004040a0(0);
      FUN_0040cc00(local_1c,(local_14 - iVar2) - iVar3,iVar2);
      local_4._0_1_ = 1;
      FUN_005e2be0(local_2c);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_18 + -1);
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}


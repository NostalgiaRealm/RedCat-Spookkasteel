/*
 * FUN_005b0c70 at 005b0c70
 * undefined FUN_005b0c70(void)
 * Address ranges: 005b0c70-005b0dbe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b0c70(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_2c [4];
  int local_28;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646170;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_005b0c40(param_1);
  if (cVar1 == '\0') {
    local_2c[0] = (undefined1)param_1;
    FUN_004040a0(0);
    local_4 = 0;
    uVar2 = FUN_0044e370(local_1c,param_1,param_2);
    local_4._0_1_ = 1;
    FUN_0040cc00(uVar2,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
    cVar1 = FUN_005b0c40(local_2c);
    if (cVar1 == '\0') {
      if (local_28 != 0) {
        cVar1 = *(char *)(local_28 + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          *(char *)(local_28 + -1) = cVar1 + -1;
          ExceptionList = local_c;
          return 0;
        }
        FUN_005fe5f0(local_28 + -1);
      }
      ExceptionList = local_c;
      return 0;
    }
    FUN_0040cc00(local_2c,0,0xffffffff);
    if (local_28 != 0) {
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_28 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return 1;
      }
      FUN_005fe5f0(local_28 + -1);
    }
  }
  ExceptionList = local_c;
  return 1;
}


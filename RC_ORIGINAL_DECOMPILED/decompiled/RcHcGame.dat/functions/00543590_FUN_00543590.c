/*
 * FUN_00543590 at 00543590
 * undefined FUN_00543590(void)
 * Address ranges: 00543590-00543863
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_00543590(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_stack_0000001c;
  int in_stack_00000020;
  undefined1 local_5c;
  int local_58;
  int local_48;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063cbe7;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_005ae390();
  local_4._0_1_ = 2;
  iVar4 = 0;
  do {
    while( true ) {
      while( true ) {
        if (in_stack_0000001c == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = in_stack_00000020 - in_stack_0000001c >> 4;
        }
        if (iVar2 <= iVar4) {
          *param_1 = local_5c;
          *(undefined4 *)(param_1 + 4) = 0;
          *(undefined4 *)(param_1 + 8) = 0;
          *(undefined4 *)(param_1 + 0xc) = 0;
          FUN_0040cc00();
          if (local_58 != 0) {
            cVar1 = *(char *)(local_58 + -1);
            if ((cVar1 == '\0') || (cVar1 == -1)) {
              FUN_005fe5f0();
            }
            else {
              *(char *)(local_58 + -1) = cVar1 + -1;
            }
          }
          local_4 = 8;
          FUN_00514430();
          local_4._0_1_ = 7;
          FUN_00548ca0();
          FUN_005fe5f0();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_004040a0();
          ExceptionList = local_c;
          return param_1;
        }
        if (iVar4 != 0) break;
        uVar3 = FUN_00549060();
        FUN_00548a70(uVar3);
        FUN_00543a60(local_1c);
        local_4._0_1_ = 3;
        FUN_005ae390();
        local_4._0_1_ = 4;
        FUN_0040cc00();
        local_4._0_1_ = 3;
        FUN_004040a0();
        local_4._0_1_ = 2;
        FUN_004040a0();
        iVar4 = 1;
      }
      uVar3 = FUN_00549060();
      FUN_00548a70(uVar3);
      FUN_00543a60(local_3c);
      local_4._0_1_ = 5;
      FUN_005ae390();
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_0040cc00();
      if (local_48 != 0) {
        cVar1 = *(char *)(local_48 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0();
        }
        else {
          *(char *)(local_48 + -1) = cVar1 + -1;
        }
      }
      local_48 = 0;
      local_4._0_1_ = 2;
      if (local_38 != 0) break;
LAB_00543773:
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      iVar4 = iVar4 + 1;
    }
    cVar1 = *(char *)(local_38 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0();
      goto LAB_00543773;
    }
    iVar4 = iVar4 + 1;
    *(char *)(local_38 + -1) = cVar1 + -1;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
  } while( true );
}


/*
 * FUN_0054efe0 at 0054efe0
 * undefined FUN_0054efe0(void)
 * Address ranges: 0054efe0-0054f233
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0054f036) */
/* WARNING: Removing unreachable block (ram,0x0054f12f) */
/* WARNING: Removing unreachable block (ram,0x0054f140) */

int * __thiscall
FUN_0054efe0(int param_1,int *param_2,undefined4 *param_3,undefined4 param_4,undefined1 *param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  int *piStack_48;
  undefined1 *puStack_44;
  int local_2c;
  int local_28;
  int local_24 [2];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063db47;
  pvStack_c = ExceptionList;
  local_24[1] = 0;
  local_2c = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  puStack_44 = (undefined1 *)0x54f015;
  ExceptionList = &pvStack_c;
  cVar2 = FUN_00553640();
  puVar1 = (undefined1 *)param_3;
  if ((cVar2 != '\0') && (*(char *)(param_1 + 0x8c) != '\0')) {
    local_4._0_1_ = 2;
    local_28 = 0;
    local_2c = 0;
    piStack_48 = local_24;
    puStack_44 = (undefined1 *)param_3;
    puStack_4c = (undefined1 *)0x54f08e;
    piVar3 = (int *)FUN_005512a0();
    local_4._0_1_ = 4;
    if (local_28 != *piVar3) {
      if ((local_28 != 0) &&
         (iVar4 = *(int *)(local_28 + 0x14) + -1, *(int *)(local_28 + 0x14) = iVar4, iVar4 == 0)) {
        puStack_44 = (undefined1 *)0x0;
        piStack_48 = (int *)0x54f0b8;
        FUN_005abfc0();
      }
      local_28 = *piVar3;
      puStack_44 = (undefined1 *)0x54f0c7;
      FUN_005844b0();
    }
    local_4._0_1_ = 2;
    if (local_24[0] != 0) {
      puStack_44 = (undefined1 *)0x54f0dd;
      FUN_004098d0();
    }
    if (local_28 == 0) {
      puStack_44 = (undefined1 *)0x54f172;
      FUN_00516fb0();
      puStack_44 = (undefined1 *)0x54f179;
      iVar4 = FUN_004337e0();
      if (iVar4 != 0) {
        puStack_44 = *(undefined1 **)(puVar1 + 4);
        if (puStack_44 == (undefined1 *)0x0) {
          puStack_44 = &DAT_0064a3b4;
        }
        puStack_4c = local_1c;
        piStack_48 = (int *)s_Cannot_find__existing__sound___s_006a1a8c;
        uStack_50 = 0x54f199;
        uStack_50 = FUN_005ae390();
        local_4._0_1_ = 6;
        uStack_54 = 0x54f1a4;
        FUN_005aff00();
        local_4._0_1_ = 2;
        puStack_44 = (undefined1 *)0x1;
        piStack_48 = (int *)0x54f1b7;
        FUN_004040a0();
      }
    }
    else {
      puStack_44 = (undefined1 *)param_7;
      piStack_48 = (int *)param_6;
      puStack_4c = param_5;
      uStack_50 = param_4;
      param_3 = &uStack_54;
      uStack_54 = param_4;
      FUN_00449760(&local_28);
      piVar3 = (int *)FUN_0054f910(&param_3);
      if (*piVar3 != 0) {
        local_4._0_1_ = 5;
        local_2c = *piVar3;
        puStack_44 = (undefined1 *)0x54f155;
        FUN_005844b0();
      }
      local_4._0_1_ = 2;
      if (param_3 != (undefined4 *)0x0) {
        puStack_44 = (undefined1 *)0x54f16b;
        FUN_004098d0();
      }
    }
    local_4._0_1_ = 1;
    if ((local_28 != 0) &&
       (iVar4 = *(int *)(local_28 + 0x14) + -1, *(int *)(local_28 + 0x14) = iVar4, iVar4 == 0)) {
      puStack_44 = (undefined1 *)0x0;
      piStack_48 = (int *)0x54f1dd;
      FUN_005abfc0();
    }
  }
  *param_2 = local_2c;
  if (local_2c != 0) {
    *(int *)(local_2c + 0x14) = *(int *)(local_2c + 0x14) + 1;
  }
  local_24[1] = 1;
  local_4 = (uint)local_4._1_3_ << 8;
  if ((local_2c != 0) &&
     (iVar4 = *(int *)(local_2c + 0x14) + -1, *(int *)(local_2c + 0x14) = iVar4, iVar4 == 0)) {
    puStack_44 = (undefined1 *)0x0;
    piStack_48 = (int *)0x54f21d;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return param_2;
}

